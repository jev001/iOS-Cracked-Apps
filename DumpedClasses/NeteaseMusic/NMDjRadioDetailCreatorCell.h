//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NMDjRadio, NSMutableArray, UIImageView, UILabel;

@interface NMDjRadioDetailCreatorCell : UITableViewCell
{
    UIImageView *_line;
    UILabel *_titleLabel;
    NSMutableArray *_djViewArray;
    NMDjRadio *_djRadio;
}

+ (double)heightForRadio:(id)arg1;
@property(retain, nonatomic) NMDjRadio *djRadio; // @synthesize djRadio=_djRadio;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

