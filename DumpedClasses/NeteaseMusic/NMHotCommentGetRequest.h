//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMHotCommentGetRequest : NMBaseRequest
{
    NSString *_threadId;
}

@property(readonly, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
- (void).cxx_destruct;
- (id)initWithThreadId:(id)arg1 limit:(long long)arg2 offset:(long long)arg3 compareUserLocation:(_Bool)arg4;

@end

