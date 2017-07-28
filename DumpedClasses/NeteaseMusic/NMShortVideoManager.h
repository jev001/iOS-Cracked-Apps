//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetExportSession, NSError, SDAVAssetExportSession;

@interface NMShortVideoManager : NSObject
{
    NSError *_error;
    AVAssetExportSession *_exportSession;
    SDAVAssetExportSession *_sdwaterSession;
    AVAssetExportSession *_avwaterSession;
}

+ (float)fileSizeOfAsset:(id)arg1 targetDuration:(double)arg2;
+ (float)_fileSizeOfAsset:(id)arg1 targetDuration:(double)arg2;
+ (float)preferredFrameRateOfVideoTrack:(id)arg1;
+ (float)preferredBitRateOfVideoTrack:(id)arg1 sizeOfVieo:(struct CGSize)arg2;
+ (struct CGSize)preferredSizeOfVideoTrack:(id)arg1;
+ (id)metadata;
+ (id)manager;
+ (id)defaultManager;
@property(retain, nonatomic) AVAssetExportSession *avwaterSession; // @synthesize avwaterSession=_avwaterSession;
@property(retain, nonatomic) SDAVAssetExportSession *sdwaterSession; // @synthesize sdwaterSession=_sdwaterSession;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)_waterPrintOfAsset:(id)arg1 sizeOfVideo:(struct CGSize)arg2 transformOfVideo:(struct CGAffineTransform)arg3;
- (id)_audioMixInputOfAsset:(id)arg1 startAt:(CDStruct_1b6d18a9)arg2 timeRange:(CDStruct_e83c9415)arg3 volume:(float)arg4 fadeAtStart:(_Bool)arg5 fadeAtEnd:(_Bool)arg6 composition:(id)arg7;
- (void)cancelExport;
- (void)_avwaterPrintAsset:(id)arg1 exportPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4;
- (void)_sdwaterPrintAsset:(id)arg1 exportPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4;
- (void)exportAsset:(id)arg1 audioMix:(id)arg2 exportPath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 progressHandler:(CDUnknownBlockType)arg5;
- (void)exportShortVideo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)muxShortVideo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

