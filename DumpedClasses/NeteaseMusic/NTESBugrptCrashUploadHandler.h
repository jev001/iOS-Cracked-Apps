//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NTESBugrptNetRequest;

@interface NTESBugrptCrashUploadHandler : NSObject
{
    _Bool _upLoading;
    _Bool _upLoadFailed;
    _Bool _uploadByUser;
    NTESBugrptNetRequest *_request;
}

@property(retain, nonatomic) NTESBugrptNetRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)isUploading;
- (void)doUploadPostProcess:(id)arg1;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (id)getCrashesToUpload;
- (void)uploadCrashData;
- (_Bool)doUpLoadHistory;
- (_Bool)uploadHistoryCrashs;
- (void)uploadWhenCrashed:(id)arg1 isManual:(_Bool)arg2 delegate:(id)arg3;
- (void)checkAndUploadWhenCrashed:(id)arg1;
- (void)onCrashHappened:(id)arg1;

@end

