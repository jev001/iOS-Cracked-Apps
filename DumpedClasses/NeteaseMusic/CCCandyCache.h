//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCAppUpdateProtocol.h"
#import "CCWebViewProtocolDelegate.h"

@class CCCacheManager, CCCandyCacheConfig, HTResourceVersionChecker, NSMutableArray, NSString, NSTimer;

@interface CCCandyCache : NSObject <CCWebViewProtocolDelegate, CCAppUpdateProtocol>
{
    _Bool _inited;
    _Bool _enable;
    _Bool _diffEnable;
    CCCacheManager *_cacheManager;
    CCCandyCacheConfig *_config;
    long long _status;
    HTResourceVersionChecker *_versionChecker;
    NSMutableArray *_observers;
    NSTimer *_checkTimer;
}

+ (id)defaultCache;
@property(retain, nonatomic) NSTimer *checkTimer; // @synthesize checkTimer=_checkTimer;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) HTResourceVersionChecker *versionChecker; // @synthesize versionChecker=_versionChecker;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool diffEnable; // @synthesize diffEnable=_diffEnable;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(readonly, nonatomic) CCCandyCacheConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) CCCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(nonatomic) _Bool inited; // @synthesize inited=_inited;
- (void).cxx_destruct;
- (id)dataForWebViewProtocolWithURL:(id)arg1;
- (_Bool)canWebViewProtocolResponseURL:(id)arg1;
- (void)CCCacheManager:(id)arg1 failedUpdateAppOfURL:(id)arg2 withInfo:(id)arg3 error:(long long)arg4;
- (void)CCCacheManager:(id)arg1 didUpdateAppOfURL:(id)arg2 withInfo:(id)arg3;
- (void)CCCacheManager:(id)arg1 didFinishDownloadAppOfURL:(id)arg2 withInfo:(id)arg3;
- (void)CCCacheManager:(id)arg1 updatingAppOfURL:(id)arg2 withInfo:(id)arg3;
- (void)CCCacheManager:(id)arg1 didStartDownloadAppOfURL:(id)arg2 withInfo:(id)arg3;
- (void)CCCacheManager:(id)arg1 willStartDownloadAppOfURL:(id)arg2 withInfo:(id)arg3;
- (_Bool)CCCacheManager:(id)arg1 shouldUpdateAppOfURL:(id)arg2 withInfo:(id)arg3;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)checkAndUpdateResourceType:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)checkAndUpdateResource;
- (void)initCache;
- (id)initWithCacheConfig:(id)arg1;
- (id)initWithCacheConfig:(id)arg1 cacheManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

