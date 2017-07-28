//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CMScrollIndexBarDelegate.h"
#import "NMAddPlayListViewControllerProtocol.h"
#import "NMAddSongToPlayListViewDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMIpodID3MatchDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMBarButtonItem, NMSongValidateRequest, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface NMIpodSongImportViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, NMAddSongToPlayListViewDelegate, NMIpodID3MatchDelegate, NMHttpRequestDelegate, CMScrollIndexBarDelegate, NMAddPlayListViewControllerProtocol>
{
    NSMutableArray *_dataArray;
    NSMutableArray *_selectedDataArray;
    NSMutableArray *_matchedSongArray;
    unsigned long long _songCount;
    NSString *_playlistId;
    _Bool _isScanId3;
    NSMutableDictionary *_sectionIndexDic;
    NSMutableArray *_displayArray;
    _Bool _isStopID3Scan;
    NSObject *_id3Lock;
    NMSongValidateRequest *_songValidateRequest;
    NSMutableDictionary *_songIdPersistIdMap;
    double _progress;
    NMBarButtonItem *_importButton;
    NMBarButtonItem *_pauseButton;
    NMBarButtonItem *_resumeButton;
    unsigned long long _importType;
    id _delegate;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollIndexSelectionDidChange:(id)arg1 index:(int)arg2 title:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)reachabilityChanged:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)id3ScanDidFail;
- (void)id3ScanDidFinished;
- (void)id3Progress:(id)arg1;
- (void)ipodMatchResult:(id)arg1;
- (void)ipodMatchProgress:(id)arg1;
- (void)showImportButton;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onSelectPlaylist:(id)arg1;
- (void)updateHeaderView;
- (void)onCheckBox:(id)arg1;
- (void)onCheckBoxAll:(id)arg1;
- (void)proceedImportIpod;
- (void)confirmIpodImportIn2G3G;
- (void)toggleImport:(id)arg1;
- (void)navigationPopByGesture:(id)arg1;
- (void)backAction:(id)arg1;
- (void)stopMatchWhenBack;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadSectionIndex;
- (void)setupAlphabetOrder;
- (void)startID3ScanInternal;
- (void)startID3Scan;
- (void)updateBarButton;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)indexBar;
- (id)tableView;
- (id)ipodSelectionView;
- (void)loadView;
- (id)initWithImportType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

