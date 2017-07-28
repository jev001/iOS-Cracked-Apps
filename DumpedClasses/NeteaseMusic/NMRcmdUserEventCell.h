//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMEventCell.h"

#import "NMHttpRequestDelegate.h"
#import "NMRcmdUserCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NMEventCellHeader, NSMutableArray, NSString, UICollectionView, UIView;

@interface NMRcmdUserEventCell : NMEventCell <UICollectionViewDelegate, UICollectionViewDataSource, NMRcmdUserCellDelegate, NMHttpRequestDelegate>
{
    NMEventCellHeader *_cellHeader;
    UICollectionView *_rcmdUserCollectionView;
    UIView *_line;
    NSMutableArray *_rcmdUserArray;
    NSMutableArray *_eventDataArray;
    NSMutableArray *_followRequestArray;
    NSMutableArray *_subRequestArray;
    _Bool _isRcmdArtist;
}

+ (double)heightForEvent:(id)arg1;
- (void).cxx_destruct;
- (void)logRcmdUserClickWithType:(id)arg1 withUserId:(id)arg2;
- (void)dealloc;
- (void)updateRelationInSearch:(id)arg1 isFollow:(_Bool)arg2;
- (void)followChanged:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)rcmdUserCell:(id)arg1 artistCloseRcmdUserClicked:(id)arg2;
- (void)rcmdUserCell:(id)arg1 artistFollowButtonClicked:(id)arg2;
- (void)rcmdUserCell:(id)arg1 artistClicked:(id)arg2;
- (void)updateDataSourceAfterDelete;
- (void)rcmdUserCell:(id)arg1 closeRcmdUserClicked:(id)arg2;
- (void)rcmdUserCell:(id)arg1 followButtonClicked:(id)arg2;
- (void)rcmdUserCell:(id)arg1 avartClicked:(id)arg2;
- (void)rcmdUserCell:(id)arg1 contentClicked:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

