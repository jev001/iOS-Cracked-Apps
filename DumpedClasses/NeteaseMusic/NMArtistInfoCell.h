//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AttributedLabel, NMArtistInfoParagraph, UIImageView, UILabel;

@interface NMArtistInfoCell : UITableViewCell
{
    UIImageView *_headlineView;
    UILabel *_titleLabel;
    AttributedLabel *_contentLabel;
    NMArtistInfoParagraph *_paragraph;
}

+ (double)heightForParagraph:(id)arg1;
@property(retain, nonatomic) NMArtistInfoParagraph *paragraph; // @synthesize paragraph=_paragraph;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

