//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface CTDestPocketAlterView : UIView
{
    UIView *_bodyView;
    UILabel *_titleLb;
    UILabel *_contentLb;
    UILabel *_bottomLb;
    UIButton *_tapBt;
    UIButton *_closeBt;
}

+ (void)showInVC:(id)arg1;
@property(retain, nonatomic) UIButton *closeBt; // @synthesize closeBt=_closeBt;
@property(retain, nonatomic) UIButton *tapBt; // @synthesize tapBt=_tapBt;
@property(retain, nonatomic) UILabel *bottomLb; // @synthesize bottomLb=_bottomLb;
@property(retain, nonatomic) UILabel *contentLb; // @synthesize contentLb=_contentLb;
@property(retain, nonatomic) UILabel *titleLb; // @synthesize titleLb=_titleLb;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dismiss;
- (void)closeTap:(id)arg1;
- (void)closeTapped:(id)arg1;

@end
