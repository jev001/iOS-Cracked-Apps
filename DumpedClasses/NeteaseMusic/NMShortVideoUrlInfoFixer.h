//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface NMShortVideoUrlInfoFixer : NSObject
{
    NSArray *_timeoutArray;
}

+ (void)batchFixShortVideoPlayUrlInfo:(id)arg1 creatorId:(id)arg2 urlType:(unsigned long long)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)fixShortVideoPlayUrlInfo:(id)arg1 creatorId:(id)arg2 urlType:(unsigned long long)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (id)_sharedInstance;
- (void).cxx_destruct;
- (void)_batchFixShortVideoPlayUrlInfo:(id)arg1 creatorId:(id)arg2 urlType:(unsigned long long)arg3 completeBlock:(CDUnknownBlockType)arg4 retryCount:(long long)arg5;
- (void)_fixShortVideoPlayUrlInfo:(id)arg1 creatorId:(id)arg2 urlType:(unsigned long long)arg3 completeBlock:(CDUnknownBlockType)arg4 retryCount:(long long)arg5;
- (id)init;

@end

