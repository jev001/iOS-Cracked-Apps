//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class UIImageView, UILabel;

@interface NMRvbCell : NMCommonCell
{
    long long _reverberator;
    UILabel *_titleLabel;
    UIImageView *_checkMarkImageView;
}

+ (double)height;
@property(nonatomic) long long reverberator; // @synthesize reverberator=_reverberator;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

