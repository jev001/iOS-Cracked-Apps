//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MCLoadMoreTableFooterViewDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMNotConnectedProtocol.h"
#import "OpenPlatformAuthViewControllerDelegate.h"
#import "OpenPlatformObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMInviteSnsView, NMSnsFriendRequest, NSMutableArray, NSMutableDictionary, NSString, OpenPlatformBase;

@interface NMInviteSnsViewController : UIViewController <OpenPlatformAuthViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, MCLoadMoreTableFooterViewDelegate, OpenPlatformObserver, NMHttpRequestDelegate, NMNotConnectedProtocol>
{
    long long _limit;
    long long _offset;
    NSString *_type;
    NMInviteSnsView *_snsView;
    NSMutableArray *_userArray;
    NSMutableArray *_showUserArray;
    NSMutableArray *_inviteUserArray;
    NSMutableDictionary *_userDictionary;
    _Bool _isLoading;
    _Bool _isLoadingMore;
    _Bool _isEnd;
    _Bool _isLastRequest;
    NMSnsFriendRequest *_friendRequest;
    NSString *_sendMessage;
    NSMutableArray *_followRequestArray;
    _Bool _isAuthPageShown;
    OpenPlatformBase *_platform;
}

@property(nonatomic) OpenPlatformBase *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (void)requestMoreUsersInfoWithOffSet:(long long)arg1;
- (void)followChanged:(id)arg1;
- (void)dealloc;
- (void)cancelAllFollowRequest;
- (void)requestCompleted:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)beforeUpdateAccessToken:(id)arg1;
- (void)onOPSuccess:(id)arg1 operation:(unsigned long long)arg2 retInfo:(id)arg3;
- (void)onOPError:(id)arg1 operation:(unsigned long long)arg2 Code:(long long)arg3 Desc:(id)arg4;
- (void)bindSnsFail:(id)arg1;
- (void)bindSnsSuccess:(id)arg1;
- (void)openAuthenticationWeb:(id)arg1;
- (id)inviteTextFromCurrentText:(id)arg1 addUsers:(id)arg2;
- (void)inviteSnsCellClicked:(_Bool)arg1 snsUser:(id)arg2;
- (void)cellButtonClicked:(id)arg1;
- (void)backAction:(id)arg1;
- (_Bool)mcLoadMoreTableFooterDataSourceIsLoading:(id)arg1;
- (void)mcLoadMoreTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadUsers;
- (void)doLoadUsers;
- (void)finishLoadUsers:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)refreshView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)loadView;
- (id)tableView;
- (id)inviteSnsView;
- (id)initWithType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

