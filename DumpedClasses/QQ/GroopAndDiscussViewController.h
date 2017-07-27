//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRelationTabBaseViewController.h"

#import "DiscussGroupListViewDelegate.h"
#import "GroupListViewDelegate.h"
#import "GroupRecommendListViewDelegate.h"
#import "IDiscussGroupListView.h"
#import "MulMemSelBusiProcessDelegate.h"
#import "QQCreateGroupAuthorityDelegate.h"
#import "QQRightMenuViewDelegate.h"
#import "QQSearchResultClickResponding.h"
#import "QQTabMenuDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DiscussGroupListViewNew, GroupListViewNew, NSMutableArray, NSString, NSTimer, ODRefreshControl, ODRefreshControlWithSectionHeaderFixed, QQRightMenuView, QQTabWithInPageControl, UIView;

@interface GroopAndDiscussViewController : QQRelationTabBaseViewController <UITableViewDataSource, UITableViewDelegate, QQSearchResultClickResponding, QQCreateGroupAuthorityDelegate, MulMemSelBusiProcessDelegate, QQTabMenuDelegate, GroupListViewDelegate, IDiscussGroupListView, DiscussGroupListViewDelegate, GroupRecommendListViewDelegate, QQRightMenuViewDelegate>
{
    GroupListViewNew *_groupListView;
    ODRefreshControlWithSectionHeaderFixed *_refreshGroopListControl;
    ODRefreshControl *_refreshDiscussListControl;
    int _getGroupListSeq;
    NSTimer *_refreshGroupListTimer;
    NSTimer *_refreshDiscussListTimer;
    QQRightMenuView *_rightMenu;
    DiscussGroupListViewNew *_discussTableView;
    NSMutableArray *_discussTableData;
    QQTabWithInPageControl *_segmentControl;
    UIView *_segmentPanel;
    UIView *_contentView;
    _Bool _notifyLoad;
    int _initialIndex;
    long long _curIndex;
    _Bool _hideCellAccessory;
    _Bool _fromOuter;
    long long _initCreateGroupType;
    QQTabWithInPageControl *segmentControl;
    NSMutableArray *_memberArrary;
    int _currentCreateGroupSeq;
    _Bool _isPerformingRefreshDiscussList;
    _Bool _bSupportGroupSaveHeadersId;
    _Bool _bSupportDiscussSaveHeadersId;
    struct CGPoint _lastGroupListViewContentOffset;
    int _lastReloadTime;
    _Bool _canEditRowForItem;
    _Bool _supportLongPress;
    _Bool _canShowToast;
}

@property(nonatomic) _Bool canShowToast; // @synthesize canShowToast=_canShowToast;
@property(nonatomic) _Bool supportLongPress; // @synthesize supportLongPress=_supportLongPress;
@property(nonatomic) _Bool canEditRowForItem; // @synthesize canEditRowForItem=_canEditRowForItem;
@property(retain, nonatomic) NSMutableArray *memberArrary; // @synthesize memberArrary=_memberArrary;
- (void)superGroupOwnerEntryExpReport;
- (void)doSelectedAction;
- (void)scrollListToTop;
- (void)resetListState;
- (void)loadPersonalTheme;
- (void)showCommonGroupSettingLimitation:(id)arg1;
- (void)onJumpFindGroup;
- (void)onRecommendGroupClick:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onResultCellClick:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)reloadDestTableDataDelay;
- (void)reloadDestTableData;
- (void)reload;
- (void)popToRootView:(id)arg1;
- (void)updateDiscussGroupList;
- (void)discussGroupListViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)discussGroupListViewDidScroll:(id)arg1;
- (void)discussGroupListOnAddClick;
- (void)groupListClickAddGroup;
- (void)groupListViewWillBeginDragging:(id)arg1;
- (void)groupListViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)groupListViewDidScroll:(id)arg1;
- (void)doRefreshDiscussList;
- (void)refreshDiscussListWithFrequencyControl:(double)arg1;
- (void)refreshDiscussListPeriodically;
- (void)refreshDiscussList;
- (void)refreshDiscussInfo:(long long)arg1;
- (void)initDisCussChatViewController:(id)arg1;
- (void)delayDiscussEndRefreshing:(_Bool)arg1;
- (void)refreshDiscussListTimeout;
- (void)refreshDiscussListFail;
- (void)refreshDListSuccess;
- (void)dropDiscussViewDidBeginRefreshing:(id)arg1;
- (void)dropGroopViewDidBeginRefreshing:(id)arg1;
- (void)delayEndRefreshing:(_Bool)arg1;
- (void)refreshGroopListTimeout;
- (void)refreshGroupListSuccess;
- (void)refreshGroupListResult:(id)arg1;
- (void)refreshGroupList;
- (void)resetGroupHeadRequestState;
- (void)didCreateGroupRespondOnDiscuss:(id)arg1;
- (void)createGroupWithMember;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)createDiscussGroup;
- (void)groupMsgSetting;
- (void)addGroup;
- (void)onGetCreateGroupAuthority:(int)arg1 groupCode:(unsigned int)arg2 groupUin:(unsigned int)arg3 sign:(id)arg4 svrErrorCode:(int)arg5;
- (void)createGroup;
- (void)menuCellDidClick:(id)arg1;
- (void)showRightMenu;
- (void)createRightMenu;
- (void)initializeSegmentControl;
- (int)viewTag;
- (void)refreshData;
- (double)viewControllerContentOffsetY;
- (void)initDiscussListData;
- (void)loadDiscussListView;
- (void)loadGroopListView;
- (void)initContentView;
- (void)loadView;
- (int)getLastTabIndex;
- (void)saveTabIndex;
- (void)applyLastBtnChoice;
- (void)valueChanged:(id)arg1;
- (void)forceToSelectIndex:(long long)arg1;
- (id)getTableViewByIndex:(long long)arg1;
- (void)popToRootOnLogout;
- (void)handleQQAccountLogoutNotification:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)reloadAppearance;
- (_Bool)isSupportFullScreenLayout;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithSupportGroupSaveHeadersId:(_Bool)arg1 supportDiscussSaveHeadersId:(_Bool)arg2;

// Remaining properties
@property(nonatomic) long long curIndex; // @dynamic curIndex;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fromOuter; // @dynamic fromOuter;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideCellAccessory; // @dynamic hideCellAccessory;
@property(nonatomic) long long initCreateGroupType; // @dynamic initCreateGroupType;
@property(nonatomic) int initialIndex; // @dynamic initialIndex;
@property(retain, nonatomic) QQTabWithInPageControl *segmentControl; // @dynamic segmentControl;
@property(readonly) Class superclass;

@end
