//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSearchCell.h"

@class NMDjRadio, UIImageView;

@interface NMSearchDjRadioCell : NMSearchCell
{
    NMDjRadio *_djRadio;
    UIImageView *_payMaskView;
}

+ (double)height;
@property(retain, nonatomic) NMDjRadio *djRadio; // @synthesize djRadio=_djRadio;
- (void).cxx_destruct;
- (void)setDjRadio:(id)arg1 keywords:(id)arg2;
- (void)setDjRadio:(id)arg1 keyword:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

