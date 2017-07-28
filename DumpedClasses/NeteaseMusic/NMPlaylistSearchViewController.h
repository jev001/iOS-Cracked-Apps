//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSongCellBaseController.h"

#import "MCSearchBarDelegate.h"
#import "NMDelSongIoListManagerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MCSearchBar, NMMyPlaylistSqliteManager, NMPlaylist, NSMutableArray, NSString, UITableView;

@interface NMPlaylistSearchViewController : NMSongCellBaseController <MCSearchBarDelegate, UITableViewDataSource, UITableViewDelegate, NMDelSongIoListManagerDelegate>
{
    MCSearchBar *_searchBar;
    NSMutableArray *_searchDisplayArray;
    NMMyPlaylistSqliteManager *_myplaylistManager;
    NSString *_keyword;
    _Bool _isSearching;
    NSMutableArray *_sourceSongArray;
    NMPlaylist *_playlist;
    id _delegate;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMPlaylist *playlist; // @synthesize playlist=_playlist;
@property(retain, nonatomic) NSMutableArray *sourceSongArray; // @synthesize sourceSongArray=_sourceSongArray;
- (void).cxx_destruct;
- (void)downloadChanged:(id)arg1;
- (void)tableReloadData:(id)arg1;
- (void)tableReloadData;
- (void)delSongInListDidSuccess:(id)arg1 songCount:(long long)arg2 cloudCount:(long long)arg3;
- (void)delSongInListDidFail:(id)arg1;
- (void)delSongsInPlaylist:(id)arg1 needDeleteFile:(_Bool)arg2;
- (void)popupDeleteConfirmBox:(id)arg1;
- (void)deleteCellSelected:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)artistButtonInCellClicked:(id)arg1 artist:(id)arg2;
- (void)albumButtonInCellClicked:(id)arg1;
- (void)shareButtonInCellClicked:(id)arg1;
- (void)commentButtonInCellClicked:(id)arg1;
- (void)downloadButtonInCellClicked:(id)arg1 collection:(id)arg2;
- (void)addPlaylistButtonInCellClicked:(id)arg1;
- (void)refreshForVipStatusUpdated;
- (void)refreshDataForUMG;
- (void)startSearch;
- (void)mcsearchBarTextDidChange:(id)arg1;
- (_Bool)mcsearchBarShouldReturn:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)_getCurrentPlaylistForSong:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadView;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSearchBar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

