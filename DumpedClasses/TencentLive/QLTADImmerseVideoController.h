//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QLSliderActionProtocol.h"
#import "QLTADPlayerManagerDelegate.h"
#import "TADLandingViewControllerDelegate.h"

@class NSString, QLTADPlayerControlView, QLTADPlayerManager, QLTADSliderControl, TADItemInfo, UIButton;

@interface QLTADImmerseVideoController : UIViewController <QLTADPlayerManagerDelegate, TADLandingViewControllerDelegate, QLSliderActionProtocol>
{
    CDUnknownBlockType selfClosed;
    _Bool _isImmerseAppear;
    _Bool _fullScreen;
    QLTADPlayerManager *_playerManager;
    TADItemInfo *_itemInfo;
    QLTADPlayerControlView *_customPlayerUI;
    UIButton *_closeButton;
    UIButton *_shareButton;
    UIButton *_detailButton;
    UIButton *_fullScreenButton;
    QLTADSliderControl *_slideControl;
}

@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) QLTADSliderControl *slideControl; // @synthesize slideControl=_slideControl;
@property(retain, nonatomic) UIButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) QLTADPlayerControlView *customPlayerUI; // @synthesize customPlayerUI=_customPlayerUI;
@property(retain, nonatomic) TADItemInfo *itemInfo; // @synthesize itemInfo=_itemInfo;
@property(nonatomic) _Bool isImmerseAppear; // @synthesize isImmerseAppear=_isImmerseAppear;
@property(nonatomic) __weak QLTADPlayerManager *playerManager; // @synthesize playerManager=_playerManager;
- (void).cxx_destruct;
- (void)modifyPlayButtonToPause;
- (void)modifyPlayButtonToPlay;
- (void)playBtnClicked;
- (void)actionFromButton:(id)arg1;
- (void)sliderCurrentDragTo:(double)arg1 dragStatus:(int)arg2;
- (void)dismissNavigationControllerCompletion:(CDUnknownBlockType)arg1;
- (void)presentNavigationControllerInController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)adLandingViewDidDismiss;
- (void)adLandingViewDidAppear;
- (void)adLandingViewWillAppear;
- (void)rotateToOrientation:(long long)arg1;
- (void)orientationDidChange:(_Bool)arg1;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)statusBarOrientationWillChange:(id)arg1;
- (void)didNetworkStateChange:(long long)arg1;
- (void)didMediaPlayerDurationChanged:(double)arg1 playableDuration:(double)arg2 duration:(double)arg3;
- (void)didMediaPlayerStateChanged:(long long)arg1 error:(id)arg2;
- (void)dismissSelf:(_Bool)arg1 networkState:(long long)arg2;
- (void)fullScreenButtonClick;
- (void)shareButtonPressed:(id)arg1;
- (void)closeButtonPressed;
- (void)didDetailButtonClick;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)closeBlock:(CDUnknownBlockType)arg1;
- (id)initWithItemInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
