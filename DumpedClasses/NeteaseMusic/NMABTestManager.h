//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"

@class NMABTestRequest, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString;

@interface NMABTestManager : NSObject <NMHttpRequestDelegate>
{
    NSMutableArray *_testConfigureArray;
    NSMutableDictionary *_testConfigureDic;
    NSMutableArray *_noCacheTestArray;
    NMABTestRequest *_testConfigureRequest;
    double _lastRefreshTime;
    NSObject<OS_dispatch_semaphore> *_testConfigureLock;
    NSString *_testUserId;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)postNotification;
- (void)handleRequestFailed:(long long)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)startTest:(id)arg1 testGroup:(unsigned long long)arg2;
- (_Bool)isInTestGroupForTestAndAddlog:(id)arg1;
- (unsigned long long)testGroupForTest:(id)arg1;
- (void)loadTestConfigure;
- (void)userChanged:(id)arg1;
- (_Bool)shouldRefrsh;
- (void)refresh;
- (void)saveTestConfigurationToLocal;
- (void)loadNoCacheTestConfiguration;
- (void)loadTestConfigurationFromLocal;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

