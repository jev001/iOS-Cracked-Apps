//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SDImageCache, SDWebImageDownloader;

@interface SDWebImageManager : NSObject
{
    id <SDWebImageManagerDelegate> _delegate;
    SDImageCache *_imageCache;
    SDWebImageDownloader *_imageDownloader;
    CDUnknownBlockType _cacheKeyFilter;
    NSMutableArray *_failedURLs;
    NSMutableArray *_runningOperations;
}

+ (id)sharedManager;
+ (id)webManager;
@property(retain, nonatomic) NSMutableArray *runningOperations; // @synthesize runningOperations=_runningOperations;
@property(retain, nonatomic) NSMutableArray *failedURLs; // @synthesize failedURLs=_failedURLs;
@property(copy) CDUnknownBlockType cacheKeyFilter; // @synthesize cacheKeyFilter=_cacheKeyFilter;
@property(retain, nonatomic) SDWebImageDownloader *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SDImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) __weak id <SDWebImageManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isRunning;
- (void)cancelAll;
- (id)downloadWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4 timeoutInterval:(long long)arg5 isEternal:(_Bool)arg6;
- (id)downloadWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4 isEternal:(_Bool)arg5;
- (id)downloadWithURL:(id)arg1 options:(unsigned long long)arg2 timeoutInterval:(long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (id)downloadWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (void)copyImageFileFromPath:(id)arg1 forUrl:(id)arg2 sync:(_Bool)arg3 toMemory:(_Bool)arg4;
- (void)copyImageFileFromPath:(id)arg1 forUrl:(id)arg2 sync:(_Bool)arg3;
- (void)storeImage:(id)arg1 forUrl:(id)arg2 toDisk:(_Bool)arg3;
- (void)storeImage:(id)arg1 forUrl:(id)arg2;
- (void)cleanImageCacheForURL:(id)arg1;
- (id)localImageDataForURL:(id)arg1;
- (id)localImagePathForURL:(id)arg1;
- (id)loadLocalImageForURL:(id)arg1;
- (_Bool)diskImageExistsForURLWithoutGCDQueue:(id)arg1;
- (_Bool)diskImageExistsForURL:(id)arg1;
- (_Bool)checkImageExistInMemoryOrDiskWithoutGCDQueue:(id)arg1;
- (id)getKeyForUrl:(id)arg1;
- (id)cacheKeyForURL:(id)arg1;
- (id)createCache;
- (id)init;

@end

