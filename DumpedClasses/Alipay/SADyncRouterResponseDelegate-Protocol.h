//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SADyncRouterResponse;

@protocol SADyncRouterResponseDelegate <NSObject>

@optional
- (void)dyncRouterResponse:(SADyncRouterResponse *)arg1 didFailPerformAction:(NSError *)arg2;
- (void)dyncRouterResponse:(SADyncRouterResponse *)arg1 didFinishPerformAction:(id)arg2;
@end
