//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTEventEmitter.h"

@interface NMRCTNetworkReachabilityEmitter : RCTEventEmitter
{
}

+ (id)__rct_export__660;
+ (void)load;
+ (id)moduleName;
- (void)getCurrentNetworkState:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (id)networkStatus;
- (void)networStatusChanged:(id)arg1;
- (void)stopObserving;
- (void)startObserving;
- (id)supportedEvents;
- (id)constantsToExport;
- (id)methodQueue;

@end

