//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSettingCell.h"

@class NSMutableAttributedString, OHAttributedLabel, UIImageView;

@interface NMSettingRadioCell : NMSettingCell
{
    OHAttributedLabel *_titleLabel;
    UIImageView *_checkImageView;
}

- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
@property(nonatomic) _Bool checked; // @dynamic checked;
@property(retain, nonatomic) NSMutableAttributedString *attributedTitle;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

