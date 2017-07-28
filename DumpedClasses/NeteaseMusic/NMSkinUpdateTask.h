//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "OTHTTPDownloadRequestDelegate.h"

@class NMSkinTheme, NSString, OldOTHTTPDownloadRequest;

@interface NMSkinUpdateTask : NSOperation <OTHTTPDownloadRequestDelegate>
{
    CDUnknownBlockType _finishBlock;
    OldOTHTTPDownloadRequest *_request;
    struct __CFRunLoop *_runloop;
    _Bool _downloadSuccess;
    _Bool _moveSuccess;
    _Bool _executing;
    _Bool _finished;
    NMSkinTheme *_skin;
}

@property(readonly, nonatomic) NMSkinTheme *skin; // @synthesize skin=_skin;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)downloadRequestWriteFileFailed:(id)arg1;
- (void)downloadRequestFailed:(id)arg1 error:(id)arg2;
- (void)downloadRequestFinished:(id)arg1;
- (void)startDownload;
- (void)updateUIIfNeeded;
- (_Bool)moveFile;
- (void)stopRunLoop;
- (void)startRunLoop;
- (void)cancel;
- (void)main;
- (void)handleFinished;
- (void)dealloc;
- (id)initWithSkin:(id)arg1 finished:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

