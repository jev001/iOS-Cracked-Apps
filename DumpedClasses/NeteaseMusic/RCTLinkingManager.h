//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTEventEmitter.h"

@interface RCTLinkingManager : RCTEventEmitter
{
}

+ (id)__rct_export__730;
+ (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
+ (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
+ (void)load;
+ (id)moduleName;
- (id)methodQueue;
- (void)openURL:(id)arg1 resolve:(CDUnknownBlockType)arg2 reject:(CDUnknownBlockType)arg3;
- (void)handleOpenURLNotification:(id)arg1;
- (id)supportedEvents;
- (void)stopObserving;
- (void)startObserving;

@end

