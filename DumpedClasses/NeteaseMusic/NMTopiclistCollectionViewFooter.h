//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface NMTopiclistCollectionViewFooter : UIView
{
    _Bool _isTriggerd;
    UIImageView *_iconImageView;
    UIImageView *_iconBgImageView;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconBgImageView; // @synthesize iconBgImageView=_iconBgImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)triggerAnimation:(_Bool)arg1;
- (id)formattedString:(id)arg1 skin:(id)arg2;
- (void)layoutSubviews;
- (void)handleChangeSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

