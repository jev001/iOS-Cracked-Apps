//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseSquareCoverButtonContentView.h"

@class NMDjRadio, UIImageView, UILabel;

@interface NMDjRadioSquareView : NMBaseSquareCoverButtonContentView
{
    UILabel *_djRadioNameLabel;
    UIImageView *_maskImageView;
    UIImageView *_payMaskView;
}

+ (struct CGSize)sizeForContent:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NMDjRadio *content;
- (void)layoutSubviews;
- (id)init;

@end

