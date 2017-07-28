//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTImageURLLoader.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTRemoteImageLoader : NSObject <RCTImageURLLoader>
{
}

+ (void)load;
+ (id)moduleName;
- (float)loaderPriority;
- (CDUnknownBlockType)loadImageForURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)_imageURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (_Bool)requiresScheduling;
- (_Bool)canLoadImageURL:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

