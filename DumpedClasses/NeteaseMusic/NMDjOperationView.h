//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface NMDjOperationView : UIView
{
    UIButton *_djRadioCategoryBtn;
    UIButton *_djRadioRankBtn;
    UIView *_singleLineView;
    UIView *_bottomLineView;
    id <NMDjOperationDelegate> _delegate;
}

+ (double)height;
+ (double)buttonWith;
@property(nonatomic) __weak id <NMDjOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)djRadioRankBtnClick:(id)arg1;
- (void)djRadioCategoryBtnClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

