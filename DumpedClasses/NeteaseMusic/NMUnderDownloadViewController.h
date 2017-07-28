//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMDownloadControlPanelDelegate.h"
#import "NMDownloadingResourceCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString;

@interface NMUnderDownloadViewController : UIViewController <NMDownloadControlPanelDelegate, UITableViewDelegate, UITableViewDataSource, NMDownloadingResourceCellDelegate>
{
    NSMutableArray *_downloadingResourceArray;
    _Bool _isLoading;
    _Bool _needLoadData;
}

- (void).cxx_destruct;
- (void)addClickActionLog:(id)arg1 resourceId:(id)arg2 resourceType:(id)arg3;
- (void)downloadSongChanged:(id)arg1;
- (void)updateDownloadProgress:(id)arg1;
- (void)downloadSongStateChanged:(id)arg1;
- (void)tableReloadData;
- (void)tableReloadData:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)clearButtonClicked:(id)arg1;
- (void)startAllButtonClicked:(id)arg1;
- (void)pauseAllButtonClicked:(id)arg1;
- (void)downloadingResourceCell:(id)arg1 deleteDownload:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshView;
- (void)downloadingResourcesDidLoad:(id)arg1;
- (void)refreshDownloadingResources;
- (void)loadDownloadingResources;
- (void)didReceiveMemoryWarning;
- (id)tableView;
- (id)underDownloadView;
- (void)viewDidLoad;
- (void)loadView;
- (void)backAction:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

