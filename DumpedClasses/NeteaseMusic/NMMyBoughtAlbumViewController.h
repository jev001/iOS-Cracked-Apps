//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMDiscoveryAlbumCellDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMMyBoughtAlbumRequest, NSArray, NSString, UIButton, UITableView;

@interface NMMyBoughtAlbumViewController : UIViewController <NMHttpRequestDelegate, UITableViewDelegate, UITableViewDataSource, NMDiscoveryAlbumCellDelegate>
{
    _Bool _isLoading;
    _Bool _neverLoaded;
    _Bool _hasError;
    NMMyBoughtAlbumRequest *_myBoughtRequest;
    NSArray *_myBoughtAlbums;
    UITableView *_tableView;
    UIButton *_bottomButton;
}

@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *myBoughtAlbums; // @synthesize myBoughtAlbums=_myBoughtAlbums;
@property(retain, nonatomic) NMMyBoughtAlbumRequest *myBoughtRequest; // @synthesize myBoughtRequest=_myBoughtRequest;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)requestCancelled:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)albumCell:(id)arg1 albumClicked:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)reachabilityChanged:(id)arg1;
- (void)viewDidLoad;
- (void)doRequest;
- (void)footerClick:(id)arg1;
- (void)handleNightModeChanged:(id)arg1;
- (id)tableFooterView;
- (void)loadView;
- (void)backAction:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

