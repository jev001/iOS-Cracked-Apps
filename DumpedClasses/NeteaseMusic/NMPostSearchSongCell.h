//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class UIImageView, UILabel;

@interface NMPostSearchSongCell : NMCommonCell
{
    UIImageView *_coverImageView;
    UIImageView *_maskImageView;
    UILabel *_nameLabel;
    UILabel *_otherLabel;
    UIImageView *_playingImageView;
    UIImageView *_payMaskView;
}

+ (double)height;
- (void).cxx_destruct;
- (void)setSongCover:(id)arg1;
- (void)setSong:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

