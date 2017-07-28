//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MCLoadMoreTableFooterViewDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMNotConnectedProtocol.h"
#import "NMUserCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMFansRequest, NMFollowUserRequest, NMMutualFocusRequest, NMTableViewContainer, NMUserFollowRequest, NSMutableArray, NSString;

@interface NMRelationUserViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, NMHttpRequestDelegate, MCLoadMoreTableFooterViewDelegate, NMUserCellDelegate, NMNotConnectedProtocol>
{
    _Bool _isLoading;
    _Bool _isLoadingMore;
    _Bool _isEndUserList;
    NMFansRequest *_fansUserRequest;
    NMFollowUserRequest *_followUserRequest;
    NMUserFollowRequest *_userFollowRequest;
    NSMutableArray *_userArray;
    unsigned long long _userType;
    NSString *_userId;
    _Bool _refresh;
    long long _newFansCount;
    _Bool _needRefresh;
    NMMutualFocusRequest *_mutualFocusRequest;
    NSMutableArray *_mutualFocusUserArray;
    long long _mutualFocusSection;
    long long _allUserSection;
    NMTableViewContainer *_tableViewContainer;
}

- (void).cxx_destruct;
- (void)addClickActionLog:(id)arg1 targetUserId:(id)arg2;
- (void)dealloc;
- (void)parseFansUsersResult:(id)arg1;
- (void)parseFollowUsersResult:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)reloadTableView;
- (void)requestCompleted:(id)arg1;
- (void)finishLoadMore:(_Bool)arg1;
- (_Bool)mcLoadMoreTableFooterDataSourceIsLoading:(id)arg1;
- (void)mcLoadMoreTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)unFollowUser:(id)arg1;
- (void)confirmUnfollow:(id)arg1;
- (void)moreOperationButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)generateDefaultCell:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)backAction:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)loadData;
- (void)refreshView;
- (void)userRemarkNameChanged:(id)arg1;
- (void)followUserChanged:(id)arg1;
- (void)blacklistChanged:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)tableView;
- (void)loadView;
- (id)initWithId:(id)arg1 relationType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

