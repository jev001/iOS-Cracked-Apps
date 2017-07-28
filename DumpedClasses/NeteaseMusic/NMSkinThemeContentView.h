//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMSkinTheme, UIButton, UIImage, UIImageView, UILabel;

@interface NMSkinThemeContentView : UIView
{
    UIButton *_coverButton;
    UIButton *_deleteButton;
    UIImage *_defaultCoverImage;
    UIImage *_defaultSkinImage;
    UIView *_currentChosenImageBg;
    UIView *_iconBgView;
    UIImageView *_currentChosenImage;
    UIImageView *_isNewImage;
    _Bool _isEdting;
    _Bool _isManagement;
    UILabel *_themeNameLabel;
    UILabel *_themeStateLabel;
    UIImageView *_progressBgView;
    UIImageView *_progressView;
    UIImageView *_pointIcon;
    UILabel *_rmbIcon;
    UIImageView *_membershipIcon;
    NMSkinTheme *_theme;
}

+ (double)coverWidth;
+ (double)coverHeight;
+ (double)smallCoverWidth;
+ (double)smallCoverHeight;
+ (struct CGSize)sizeForContent:(id)arg1;
+ (id)_nameLableForTheme;
@property(readonly, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(readonly, nonatomic) UIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) NMSkinTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)refreshDownloadProgress;
- (void)updateStateLabel;
- (void)setIsManagement:(_Bool)arg1;
- (void)setIsEditing:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setChangeSkin:(id)arg1;
- (void)dealloc;
- (id)init;

@end

