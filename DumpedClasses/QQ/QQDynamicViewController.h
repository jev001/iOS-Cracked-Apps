//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APTableViewController.h"

#import "QQRedPointTableViewControllerDelegate.h"

@class NSMutableArray, NSString, QQDYPluginDisplayDispatch, QQDYPluginModel, QQDYPluginReportDispatch, QQDYPluginTitleClickedDispatch, UIImageView, UISearchBar, UIView;

@interface QQDynamicViewController : APTableViewController <QQRedPointTableViewControllerDelegate>
{
    QQDYPluginTitleClickedDispatch *_titleClickedDispath;
    QQDYPluginDisplayDispatch *_displayDispatch;
    QQDYPluginReportDispatch *_reportDispath;
    UIImageView *_placeHolderView;
    _Bool _isScrolling;
    int _stayBeginTime;
    UISearchBar *_dynamicSearchBar;
    UIView *_searchBarBgView;
    UIView *_section0headView;
    UIView *_section1headView;
    _Bool _isAppearing;
    NSMutableArray *_lastExposePlugins;
    _Bool _isProvideForRecommendVC;
    QQDYPluginModel *_uiPluginModel;
}

@property(retain, nonatomic) QQDYPluginModel *uiPluginModel; // @synthesize uiPluginModel=_uiPluginModel;
- (void).cxx_destruct;
- (void)setThemeBackground;
- (id)foundPluginPreFeeds:(id)arg1 fromModel:(id)arg2;
- (int)foundPluginTypeInModel:(id)arg1 fromModel:(id)arg2;
- (void)loadPersonalTheme;
- (void)reloadAppearance;
- (id)tableView:(id)arg1 redPointPathForIndex:(id)arg2;
- (id)redPointTableView;
- (void)checkLeaveTimeForFresh;
- (_Bool)onRefresh;
- (double)heightForTemplate:(id)arg1;
- (double)maxHeightForRow:(id)arg1;
- (id)getRichPluginSafeByIndexPath:(id)arg1;
- (id)getSimplePluginSafeByIndexPath:(id)arg1;
- (id)getPluginByIndexPath:(id)arg1;
- (_Bool)hasRichPlugins;
- (long long)numberOfSections;
- (void)setupTableViewContentInset;
- (void)refreshPluginNotification:(id)arg1;
- (void)refreshListNotification:(id)arg1;
- (void)reallyReloadData;
- (void)reloadData;
- (void)exposeVisibleCells:(_Bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateSearchBarText;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)getPluginSimpleCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)stopRecordStayTime;
- (void)startRecordStayTime;
- (void)vcWillDisappear:(_Bool)arg1;
- (void)vcWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)filterUIPluginModel:(id)arg1;
- (void)viewDidLoad;
- (void)changeAccountNotification;
- (void)logoutNotification;
- (void)dealloc;
- (void)removeObserverAndCancelPreviousPerform;
- (id)initWithProvide:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
