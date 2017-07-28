//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "NMMyCollectedAlbumRecommendViewDelegate.h"

@class NSArray, NSString;

@interface NMMyCollectedAlbumRecommendCell : UITableViewCell <NMMyCollectedAlbumRecommendViewDelegate>
{
    NSArray *_viewArray;
    NSArray *_albums;
    id <NMMyCollectedAlbumRecommendCellDelegate> _delegate;
}

+ (double)heightForAlbums:(id)arg1;
@property(nonatomic) __weak id <NMMyCollectedAlbumRecommendCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
- (void).cxx_destruct;
- (void)myCollectedAlbumRecommendView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

