//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSettingTableViewController.h"

#import "NMHttpRequestDelegate.h"

@class NMPrivacy, NMPrivacySettingRequest, NSString;

@interface NMWhoCanSettingViewController : NMSettingTableViewController <NMHttpRequestDelegate>
{
    unsigned long long _settingType;
    NMPrivacy *_privacy;
    NMPrivacySettingRequest *_setRequest;
}

- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)logPrivacySetting:(unsigned long long)arg1;
- (void)updatePrivacy:(unsigned long long)arg1;
- (void)didSelectRowAtIndexPath:(id)arg1;
- (_Bool)cellIsChecked:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (id)createNormalTableViewCell;
- (long long)numberOfRowsInSection:(long long)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (void)backAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithWhoCanSettingType:(unsigned long long)arg1 privacy:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

