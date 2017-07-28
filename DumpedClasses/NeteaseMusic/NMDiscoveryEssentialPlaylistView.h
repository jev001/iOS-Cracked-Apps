//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMDiscoveryEssentialEntrance, UIImageView, UILabel;

@interface NMDiscoveryEssentialPlaylistView : UIView
{
    UIImageView *_blurImageView;
    UIView *_blurCoverView;
    UIImageView *_coverImageView;
    UIImageView *_coverMaskImageView;
    UIImageView *_iconImageView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    UIView *_line;
    id <SDWebImageOperation> _downloadImageJob;
    NMDiscoveryEssentialEntrance *_entranceObject;
}

@property(retain, nonatomic) NMDiscoveryEssentialEntrance *entranceObject; // @synthesize entranceObject=_entranceObject;
- (void).cxx_destruct;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (double)bottomMargin;
- (void)dealloc;
- (void)handleChangeSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

