//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class NSString, UIImageView, UILabel;

@interface NMRecentPlayCleanCell : NMCommonCell
{
    UILabel *_label;
    UIImageView *_icon;
    _Bool _blackMode;
}

+ (double)height;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cleanTitle;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)handleChangeSkin:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 blackMode:(_Bool)arg3;

@end

