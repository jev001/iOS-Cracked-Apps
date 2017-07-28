//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMAvatarView, NMCustomTruncatingLabel, NMPrivateMessage, UIImageView, UILabel, UITapGestureRecognizer;

@interface NMNewMessageNotificationView : UIView
{
    UIImageView *_backgroundImageView;
    NMAvatarView *_avatarView;
    NMCustomTruncatingLabel *_userNameLabel;
    UILabel *_messageContentLabel;
    UITapGestureRecognizer *_tapRecognizer;
    _Bool _shouldShowNewMessage;
    NMPrivateMessage *_message;
}

+ (void)freeInstance;
+ (_Bool)instanceIsShowing;
+ (id)sharedInstance;
+ (id)stringFromMessage:(id)arg1;
@property(nonatomic) _Bool shouldShowNewMessage; // @synthesize shouldShowNewMessage=_shouldShowNewMessage;
@property(retain, nonatomic) NMPrivateMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hideAndDestory:(_Bool)arg1;
- (void)hide;
- (void)removeObserverNow;
- (void)show;
- (void)showInView:(id)arg1 frame:(struct CGRect)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setTargetForTap:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (void)setNightMode:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

