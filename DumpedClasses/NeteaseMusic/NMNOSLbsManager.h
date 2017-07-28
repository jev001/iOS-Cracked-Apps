//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface NMNOSLbsManager : NSObject
{
    NSMutableArray *_nosURLs;
    NSString *_libsIpHost;
}

+ (id)sharedManager;
+ (void)load;
- (void).cxx_destruct;
- (void)reportNOSError:(id)arg1;
- (_Bool)isNOSURL:(id)arg1;
- (void)updateLBS:(id)arg1;
- (id)nosURL;
- (void)requestLBSSynchronous;
- (void)requestLBS:(_Bool)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

