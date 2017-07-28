//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableData, NSString;

@interface SDKExceptionLogger : NSObject
{
    long long feedBackStatus;
    NSMutableData *feedBackRespData;
    long long lastLogTimestamp;
    _Bool isFromWap;
    NSString *_feedBackMsg;
    NSData *_feedBackFile;
    NSString *_cid;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSData *feedBackFile; // @synthesize feedBackFile=_feedBackFile;
@property(retain, nonatomic) NSString *feedBackMsg; // @synthesize feedBackMsg=_feedBackMsg;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)uploadFeedBackFile;
- (void)updateFeedBackFileId:(id)arg1;
- (void)feedBackContent:(id)arg1 delegate:(id)arg2;
- (void)feedBack:(id)arg1 file:(id)arg2;
- (void)send:(id)arg1 relatedObject:(id)arg2 appID:(id)arg3 fromWap:(_Bool)arg4;
- (void)dealloc;
- (id)init;

@end

