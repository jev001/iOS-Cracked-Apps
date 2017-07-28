//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NMAvatarView, NMBadgeTextView, NMBadgeView, NMSettingButton, NMSettingLevelButton, NMUser, NSString, UIButton, UIImage, UIImageView, UILabel;

@interface NMSettingHeadView : UIView <UIGestureRecognizerDelegate>
{
    id _delegate;
    UIView *_bgView;
    NMAvatarView *_avatarView;
    NMSettingLevelButton *_levelButton;
    UILabel *_nicknameLabel;
    UIImageView *_vipIconImageView;
    UIView *_separator1;
    UIView *_separator2;
    UIView *_separator3;
    UIButton *_signInButton;
    NMSettingButton *_eventButton;
    NMSettingButton *_followsButton;
    NMSettingButton *_fansButton;
    UIButton *_editButton;
    UIImageView *_editIconImageView;
    NMBadgeView *_editProfileBadgeView;
    NMBadgeTextView *_fansBadgeView;
    UIButton *_messageBadgeView;
    UIView *_topLine;
    double _signButtonDiff;
    UIImage *_coinPrsImage;
    NMUser *_user;
}

+ (double)height;
@property(retain, nonatomic) NMUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshAvatarUrl:(id)arg1;
- (void)refreshAvatarImage:(id)arg1;
- (void)refreshEidtProfileIcon:(_Bool)arg1;
- (void)setSignAdImage:(id)arg1 title:(id)arg2;
- (void)setSignIned:(_Bool)arg1;
- (void)setNewFansCount:(long long)arg1;
- (void)handleVipNightMode:(id)arg1;
- (void)setName:(id)arg1 skin:(id)arg2;
- (void)tapGestureUpdated:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (void)_refreshViewForSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

