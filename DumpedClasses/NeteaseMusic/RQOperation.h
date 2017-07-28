//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSURLConnectionDataDelegate.h"

@class NSMutableData, NSSet, NSURLConnection, NSURLRequest, NSURLResponse;

@interface RQOperation : NSOperation <NSURLConnectionDataDelegate>
{
    _Bool _autoRetry;
    _Bool _executing;
    _Bool _finished;
    _Bool _cancelled;
    NSURLRequest *_request;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _uploadProgressHandler;
    CDUnknownBlockType _downloadProgressHandler;
    CDUnknownBlockType _authenticationChallengeHandler;
    NSSet *_autoRetryErrorCodes;
    double _autoRetryDelay;
    NSURLConnection *_connection;
    NSURLResponse *_responseReceived;
    NSMutableData *_accumulatedData;
}

+ (id)operationWithRequest:(id)arg1;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(retain, nonatomic) NSMutableData *accumulatedData; // @synthesize accumulatedData=_accumulatedData;
@property(retain, nonatomic) NSURLResponse *responseReceived; // @synthesize responseReceived=_responseReceived;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool autoRetry; // @synthesize autoRetry=_autoRetry;
@property(nonatomic) double autoRetryDelay; // @synthesize autoRetryDelay=_autoRetryDelay;
@property(copy, nonatomic) NSSet *autoRetryErrorCodes; // @synthesize autoRetryErrorCodes=_autoRetryErrorCodes;
@property(copy, nonatomic) CDUnknownBlockType authenticationChallengeHandler; // @synthesize authenticationChallengeHandler=_authenticationChallengeHandler;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressHandler; // @synthesize downloadProgressHandler=_downloadProgressHandler;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressHandler; // @synthesize uploadProgressHandler=_uploadProgressHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)finish;
- (void)cancel;
- (void)start;
- (_Bool)isConcurrent;
- (id)initWithRequest:(id)arg1;

@end

