//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SDWebImageManagerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, NMMoreOperationListView, NMPlayActionView, NMPlayControlBar, NMPlayDjRadioSubView, NMPlayLyricView, NMPlayPagingView, NMPlayProgramInfoView, NMPlayToolBar, NSString, UIImage, UIImageView;

@interface NMPlayView : UIView <SDWebImageManagerDelegate, UIGestureRecognizerDelegate>
{
    id _delegate;
    double _toolBarHeight;
    double _controlViewHeight;
    NSString *_currentBackImageUrl;
    UIView *_bgView;
    UIView *_actionBgView;
    NMPlayToolBar *_toolBar;
    NMPlayDjRadioSubView *_radioSubView;
    NMPlayControlBar *_controlView;
    NMPlayActionView *_actionView;
    NMMoreOperationListView *_expandView;
    UIImageView *_needlImageView;
    NMPlayPagingView *_pagingView;
    UIImageView *_backgroundImageView;
    UIView *_backgroundImageMaskView;
    UIImageView *_maskView;
    UIImageView *_topMaskView;
    UIImageView *_topShadowView;
    UIView *_topline;
    UIView *_nightModeMask;
    _Bool _isNeedleDown;
    _Bool _isNeedleAnimating;
    double _rotateSpeed;
    double _degree;
    CADisplayLink *_rotationDisplayLink;
    id <SDWebImageOperation> _downloadImageOperation;
    _Bool _isImmerse;
    _Bool _isDarkerActionView;
    UIView *_switchGuideView;
    UIImage *_currentMediaCoverImage;
}

@property(nonatomic) _Bool isDarkerActionView; // @synthesize isDarkerActionView=_isDarkerActionView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) NSString *currentBackImageUrl; // @synthesize currentBackImageUrl=_currentBackImageUrl;
@property(readonly, nonatomic) UIImage *currentMediaCoverImage; // @synthesize currentMediaCoverImage=_currentMediaCoverImage;
@property(nonatomic) _Bool isImmerse; // @synthesize isImmerse=_isImmerse;
@property(retain, nonatomic) UIView *switchGuideView; // @synthesize switchGuideView=_switchGuideView;
@property(readonly, nonatomic) UIImageView *needlImageView; // @synthesize needlImageView=_needlImageView;
@property(readonly, nonatomic) NMPlayDjRadioSubView *radioSubView; // @synthesize radioSubView=_radioSubView;
@property(readonly, nonatomic) NMMoreOperationListView *expandView; // @synthesize expandView=_expandView;
@property(readonly, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(readonly, nonatomic) _Bool isNeedleAnimating; // @synthesize isNeedleAnimating=_isNeedleAnimating;
@property(readonly, nonatomic) _Bool isNeedleDown; // @synthesize isNeedleDown=_isNeedleDown;
@property(readonly, nonatomic) NMPlayPagingView *pagingView; // @synthesize pagingView=_pagingView;
@property(readonly, nonatomic) NMPlayActionView *actionView; // @synthesize actionView=_actionView;
@property(readonly, nonatomic) NMPlayToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(readonly, nonatomic) NMPlayControlBar *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showPlayViewEgg:(id)arg1;
- (void)showSongCoverView:(id)arg1;
- (void)setNeedleDown:(_Bool)arg1 animated:(_Bool)arg2;
- (void)rotate:(id)arg1;
- (void)rotateDownWillStart;
- (void)rotateUpWillStart;
- (void)rotateUpDidFinish;
- (void)rotateDownDidFinish;
- (void)blur:(id)arg1;
- (void)findBackgroundColorFinished:(id)arg1 image:(id)arg2;
- (void)handleBackgroundImage:(id)arg1;
- (void)setCurrentBackground:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setActionBgViewBackgroundColor:(_Bool)arg1;
- (void)addPagingView;
- (void)removePagingView;
- (void)hideActionView;
- (void)showActionView;
- (void)actionViewAnimationWillStart:(id)arg1 context:(void *)arg2;
- (void)actionViewAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)setActionViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)actionViewHidden;
@property(readonly, nonatomic) NMPlayProgramInfoView *programInfoView; // @dynamic programInfoView;
@property(readonly, nonatomic) NMPlayLyricView *lyricView; // @dynamic lyricView;
- (void)lyricTimerToggled;
- (void)progressTimerToggled;
- (void)setDurationText;
- (void)setUIStyle;
- (void)songChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;
- (void)setNightMode:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

