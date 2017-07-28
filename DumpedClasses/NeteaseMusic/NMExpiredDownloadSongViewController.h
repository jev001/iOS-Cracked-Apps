//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSongCellBaseController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMExpiredDownloadSongHeaderView, NSMutableArray, NSString, UITableView;

@interface NMExpiredDownloadSongViewController : NMSongCellBaseController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_expiredSongs;
    NMExpiredDownloadSongHeaderView *_headerView;
    UITableView *_tableView;
}

- (void).cxx_destruct;
- (void)downloadChanged:(id)arg1;
- (void)clearAllExpiredSongs;
- (void)deleteSong:(id)arg1;
- (void)deleteCellSelected:(id)arg1;
- (void)playSelcetedSongList:(id)arg1 selectedIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshForVipStatusUpdated;
- (void)refreshDataForUMG;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (id)tableView;
- (void)backAction:(id)arg1;
- (void)dealloc;
- (id)initWithExpiredSongs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

