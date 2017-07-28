//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMCommodity, NMCommonAccessoryArrowImageView, UIButton, UIImageView, UILabel;

@interface NMActivityCommodityView : UIView
{
    UIButton *_contentButton;
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    NMCommonAccessoryArrowImageView *_arrowImageView;
    NMCommodity *_commodity;
}

+ (double)viewHeight;
@property(retain, nonatomic) NMCommodity *commodity; // @synthesize commodity=_commodity;
- (void).cxx_destruct;
- (void)addCommodityTouchedTarget:(id)arg1 selector:(SEL)arg2;
- (void)layoutSubviews;
- (void)handleSkinThemeChanged:(id)arg1;
- (id)init;

@end

