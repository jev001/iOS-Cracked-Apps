//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MCLoadMoreTableFooterViewDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MCLoadMoreTableView, NMExcludeResourcesRequest, NSMutableArray, NSString, UIBarButtonItem;

@interface NMNetEaseExclusiveChannelViewController : UIViewController <MCLoadMoreTableFooterViewDelegate, NMHttpRequestDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UIBarButtonItem *_backwardButton;
    MCLoadMoreTableView *_tableView;
    NSMutableArray *_dataArray;
    NMExcludeResourcesRequest *_exclusiveProgramRequest;
    _Bool _isLoading;
    _Bool _hasMore;
    long long _loadCount;
}

+ (id)handleResourceAndReturnControllerIfNeeded:(id)arg1 showRecommendation:(_Bool)arg2 collection:(id)arg3 fromMainPage:(_Bool)arg4;
+ (void)_addClickBILog:(id)arg1 index:(long long)arg2;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)_finishLoadMoreWithSuccess:(_Bool)arg1;
- (void)_loadDataIfNeeded;
- (void)_startExcluesiveProgramRequest;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)mcLoadMoreTableFooterDataSourceIsLoading:(id)arg1;
- (void)mcLoadMoreTableFooterDidTriggerRefresh:(id)arg1;
- (void)navigationPushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)backAction:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

