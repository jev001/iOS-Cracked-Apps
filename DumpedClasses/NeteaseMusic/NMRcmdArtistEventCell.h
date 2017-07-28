//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMGeneralEventCell.h"

#import "NMHttpRequestDelegate.h"
#import "NMRcmdArtistCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSMutableArray, NSString, UICollectionView, UIView;

@interface NMRcmdArtistEventCell : NMGeneralEventCell <UICollectionViewDataSource, UICollectionViewDelegate, NMRcmdArtistCellDelegate, NMHttpRequestDelegate>
{
    UIView *_contentSuperView;
    UICollectionView *_collectionView;
    NSMutableArray *_rcmdArtists;
    NSMutableArray *_subRequestArray;
}

+ (double)heightForContentWithEvent:(id)arg1 adjustForDetailView:(_Bool)arg2;
+ (double)collectionViewTotalHeight;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)rcmdArtistCell:(id)arg1 subClicked:(id)arg2;
- (void)rcmdArtistCell:(id)arg1 artistClicked:(id)arg2;
- (void)rcmdArtistCell:(id)arg1 closeClicked:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setEvent:(id)arg1;
- (id)contentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

