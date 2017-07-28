//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"
#import "OpenPlatformDelegate.h"

@class NMLocalEventInfo, NMShareToAllRequest, NMShortVideoManager, NMUploadImageForEventRequest, NSMutableArray, NSObject<OS_dispatch_queue>, NSOperation, NSString;

@interface NMSendEventManager : NSObject <NMHttpRequestDelegate, OpenPlatformDelegate>
{
    struct NMDownloadQueue *_eventQueue;
    struct NMDownloadQueue *_failedQueue;
    NMUploadImageForEventRequest *_uploadImageRequest;
    NMShareToAllRequest *_shareRequest;
    NSObject<OS_dispatch_queue> *_videoQueue;
    _Bool _isSending;
    NMLocalEventInfo *_currentJob;
    NSMutableArray *_currentJobPictures;
    double _latestTime;
    NSOperation *_uploadOperation;
    NSOperation *_uploadVideoOperation;
    NSOperation *_uploadCoverOperation;
    NMShortVideoManager *_shortVideoManager;
}

+ (void)performBlockOnSendThread:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;
+ (void)executeBlockOnSendThread:(CDUnknownBlockType)arg1;
+ (id)defaultManager;
@property(retain, nonatomic) NMShortVideoManager *shortVideoManager; // @synthesize shortVideoManager=_shortVideoManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)sendInfoFinished:(id)arg1 isSuccess:(_Bool)arg2;
- (void)loadFailedEventsFromLTime:(long long)arg1 toLTime:(long long)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)loadFailedEventsFromTime:(double)arg1 toTime:(double)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)loadFailedEvents:(CDUnknownBlockType)arg1;
- (void)checkHasLocalEventsFromDB:(CDUnknownBlockType)arg1;
- (void)_processPostEvent;
- (void)_logErrorOfShortVideo:(id)arg1;
- (void)_processVideoIfNeeded;
- (void)_uploadFinished:(id)arg1;
- (void)_processImageUploadIfNeeded;
- (void)_processShare:(id)arg1;
- (void)_postNotificationOnMainThread:(id)arg1 object:(id)arg2;
- (id)_getNextJob;
- (void)_resetCurrentJob;
- (void)startSendEvent;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)_continueWithCurrentJobState:(_Bool)arg1 needNotification:(_Bool)arg2;
- (void)_processCleanUp:(id)arg1;
- (void)completeAllJob;
- (void)removeEvent:(id)arg1;
- (void)loadLocalEventForStartUp;
- (void)_resetManager;
- (double)latestEventTime;
- (void)_updateLocalEvent:(id)arg1;
- (void)_addLocalEvent:(id)arg1;
- (void)addEventLocalEvent:(id)arg1;
- (void)addEventWithResource:(id)arg1 type:(unsigned long long)arg2 text:(id)arg3 videoInfo:(id)arg4 shareToThirdPartPlatformArray:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)addEventWithResource:(id)arg1 type:(unsigned long long)arg2 text:(id)arg3 imagePicker:(id)arg4 shareToThirdPartPlatformArray:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)runEventSenderThread;
@property(readonly, nonatomic) _Bool failedEventExistingInStorage;
- (void)reachabilityDidChange:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

