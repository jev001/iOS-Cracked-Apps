//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "NMDiscoveryToplistHeaderCellDelegate.h"
#import "NMHttpRequestDelegate.h"

@class NMTopUserlistRequest, NSMutableArray, NSString;

@interface NMTopTalentUserViewController : UITableViewController <NMHttpRequestDelegate, NMDiscoveryToplistHeaderCellDelegate>
{
    _Bool _isLoading;
    NMTopUserlistRequest *_talentUserRequest;
    NSMutableArray *_talentUserArray;
    NSString *_updateTime;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)toplistHeaderCellInfoButtonClicked:(id)arg1;
- (void)loadTalentUser;
- (void)doLoadTalentUser;
- (void)finishLoadTalentUser;
- (void)viewDidLoad;
- (void)loadView;
- (void)backAction:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

