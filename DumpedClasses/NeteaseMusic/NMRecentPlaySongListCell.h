//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class UIImageView, UILabel;

@interface NMRecentPlaySongListCell : NMCommonCell
{
    UIImageView *_coverImageView;
    UIImageView *_arrowImageView;
    UILabel *_textLabel;
    UILabel *_songCountLabel;
}

+ (double)height;
- (void).cxx_destruct;
- (void)setSongCount:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

