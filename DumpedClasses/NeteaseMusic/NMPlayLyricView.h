//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMLyricViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NMLyricViewController, NSString, UILongPressGestureRecognizer;

@interface NMPlayLyricView : UIView <NMLyricViewControllerDelegate, UIGestureRecognizerDelegate>
{
    UILongPressGestureRecognizer *_longPressGestrue;
    NMLyricViewController *_lyricController;
    id <NMPlayLyricViewDelegate> _delegate;
}

@property(nonatomic) __weak id <NMPlayLyricViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NMLyricViewController *lyricController; // @synthesize lyricController=_lyricController;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestrue; // @synthesize longPressGestrue=_longPressGestrue;
- (void).cxx_destruct;
- (void)lyricViewControllerWillStartScroll;
- (void)lyricViewControllerDidFinishUpdate;
- (void)reload;
- (void)hideLyricToPlayButton;
- (void)setHidden:(_Bool)arg1;
- (void)songChange:(id)arg1;
- (void)currentPlayTime:(double)arg1 animated:(_Bool)arg2 force:(_Bool)arg3;
- (void)currentPlayTime:(double)arg1 animated:(_Bool)arg2;
- (void)removeShareGestureRecognizer;
- (void)addShareGestureRecognizerWithTarget:(id)arg1 selector:(SEL)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

