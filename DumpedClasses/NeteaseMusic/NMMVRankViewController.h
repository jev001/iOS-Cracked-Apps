//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMHttpRequestDelegate.h"
#import "NMMVRankUpdateTimeCellDelegate.h"
#import "NMMVRankViewCellDelegate.h"
#import "NMScrollableTableControllerProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMMVTopListRequest, NMScrollTableController, NMScrollableTabItem, NSMutableArray, NSString, UITableView, UIView;

@interface NMMVRankViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NMHttpRequestDelegate, NMMVRankUpdateTimeCellDelegate, NMMVRankViewCellDelegate, NMScrollableTableControllerProtocol>
{
    _Bool _neverLoaded;
    NSMutableArray *_mvArray;
    UITableView *_tableView;
    UIView *_headerView;
    NMMVTopListRequest *_request;
    long long _lastUpdateTime;
    _Bool _isLoading;
    NSString *_type;
    NMScrollableTabItem *_scrollableItem;
    NMScrollTableController *_scrollTableController;
    id <NMMVRankViewControllerDelegate> _delegate;
}

+ (id)showDiscoveryTopArtistScoreHint:(struct CGRect)arg1;
@property(nonatomic) __weak id <NMMVRankViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NMScrollTableController *scrollTableController; // @synthesize scrollTableController=_scrollTableController;
@property(retain, nonatomic) NMScrollableTabItem *scrollableItem; // @synthesize scrollableItem=_scrollableItem;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)showFailedWarning;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)rankUpdateTimeCellIntroductionButtonTouched:(id)arg1 infoButtonFrame:(struct CGRect)arg2;
- (void)mvRankViewCellMVImageTouched:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)cleanData;
- (void)loadDataIfNeeded;
- (void)presented;
- (void)loadMV;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMVRankType:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

