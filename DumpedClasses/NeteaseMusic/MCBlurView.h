//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface MCBlurView : UIView
{
    UIView *_maskView;
    UIView *_bgView;
    unsigned long long _style;
    UIColor *_blurTintColor;
    UIColor *_unblurTintColor;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *unblurTintColor; // @synthesize unblurTintColor=_unblurTintColor;
@property(retain, nonatomic) UIColor *blurTintColor; // @synthesize blurTintColor=_blurTintColor;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(unsigned long long)arg1 frame:(struct CGRect)arg2;

@end

