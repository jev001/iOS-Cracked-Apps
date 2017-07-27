//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MessageTouchDelegate.h"
#import "QQTouchHook.h"

@class NSString, QQAVMsgView;

@interface QQAVMessageBar : UIView <QQTouchHook, MessageTouchDelegate>
{
    QQAVMsgView *_msgView;
    int _msgMaxLine;
    _Bool _isViewLocked;
    _Bool _isViewShowed;
    _Bool _isOnTheOrigin;
    id <MessageTouchDelegate> _delegate;
}

@property(nonatomic) id <MessageTouchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fadein;
- (void)fadeout;
- (void)queryMessageAfterUnlockView;
- (void)unlockMessageBar;
- (void)lockMessageBar;
- (void)dismissMessageBar;
- (void)updateMessageBar;
- (void)showMessageBar;
- (_Bool)showMsg:(_Bool)arg1;
- (void)receiveMessage:(int)arg1 isViewInShown:(_Bool)arg2;
- (void)changeFrame:(int)arg1 andDegree:(float)arg2 isCtrlBarHidden:(_Bool)arg3 isSmallViewHShow:(int)arg4 animation:(_Bool)arg5;
- (void)changeFrameOnMoving:(int)arg1 andDegree:(float)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2 from:(id)arg3;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2 from:(id)arg3;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2 from:(id)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2 from:(id)arg3;
- (void)messageTouchesEnded;
- (void)messageTouchesBegan;
- (void)messageTouched:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
