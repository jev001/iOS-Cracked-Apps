//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAssetResourceLoaderDelegate.h"
#import "TBResourceLoaderRequestDelegate.h"

@class AVAssetResourceLoadingRequest, NSString, NSURL, TBResourceLoaderRequest;

@interface TBResourceLoader : NSObject <TBResourceLoaderRequestDelegate, AVAssetResourceLoaderDelegate>
{
    id <TBResourceLoaderDelegate> _delegate;
    NSString *_contentType;
    AVAssetResourceLoadingRequest *_loadingRequest;
    TBResourceLoaderRequest *_requestTask;
    NSURL *_requestURL;
}

+ (id)backgroundQueue;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain, nonatomic) TBResourceLoaderRequest *requestTask; // @synthesize requestTask=_requestTask;
@property(retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) __weak id <TBResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)finishLoadingWithLoadingRequest:(id)arg1;
- (void)processLoadingRequest;
- (void)removeLoadingRequest:(id)arg1;
- (void)newTaskWithURL:(id)arg1 offset:(long long)arg2;
- (void)addLoadingRequest:(id)arg1;
- (void)resourceLoaderDidFailWithError:(id)arg1;
- (void)resourceLoaderDidUpdateCache;
- (void)resourceLoaderDidReceiveResponse:(id)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)stopLoading;
- (void)dealloc;
- (id)init;
- (id)initWithRequestURL:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

