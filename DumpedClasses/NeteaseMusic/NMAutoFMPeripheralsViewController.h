//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSettingTableViewController.h"

@interface NMAutoFMPeripheralsViewController : NMSettingTableViewController
{
    _Bool _appeared;
    _Bool _userChosen;
}

- (void)didSelectRowAtIndexPath:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)viewForHeaderInSection:(long long)arg1;
- (double)heightForHeaderInSection:(long long)arg1;
- (_Bool)hasHeaderInSection:(long long)arg1;
- (double)heightForSeparatorAtSection:(long long)arg1;
- (id)createNormalTableViewCell;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)backAction:(id)arg1;
- (void)tableReloadData;
- (void)receiveAutoFMSetting:(id)arg1;
- (void)receiveConnectState:(id)arg1;
- (void)dealloc;
- (id)init;

@end

