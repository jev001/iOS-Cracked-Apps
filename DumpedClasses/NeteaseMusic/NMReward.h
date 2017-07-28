//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"

@class NMRewardGift, NMRewardGiftRequest, NSString, UIImage;

@interface NMReward : NSObject <NMHttpRequestDelegate>
{
    NMRewardGiftRequest *_giftRequest;
    unsigned long long _retryCount;
    NMRewardGift *_gift;
    id <SDWebImageOperation> _downloadOperation;
    id <SDWebImageOperation> _avatarDownloadOperation;
    UIImage *_image;
    UIImage *_avatar;
}

+ (void)createVideoGiftShareImageForGift:(id)arg1 finised:(CDUnknownBlockType)arg2;
+ (double)giftCoverOffset;
+ (double)giftCoverScale;
+ (id)giftCoverImage;
+ (void)rewardSuccess:(id)arg1 ownerId:(id)arg2 giftType:(unsigned long long)arg3;
+ (void)rewardObject:(id)arg1 inViewController:(id)arg2;
+ (id)_reward;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)showGift:(id)arg1;
- (id)_generateImageWithGift:(id)arg1 image:(id)arg2 avatar:(id)arg3;
- (void)_doCreateVideoGiftShareImageForGift:(id)arg1 image:(id)arg2 avatar:(id)arg3 finised:(CDUnknownBlockType)arg4;
- (void)_imageLoaded:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)createImageFinished;
- (void)_createVideoGiftShareImageForGift:(id)arg1 finised:(CDUnknownBlockType)arg2;
- (struct CGSize)imageSize;
- (void)_rewardSuccess:(id)arg1 ownerId:(id)arg2 giftType:(unsigned long long)arg3;
- (void)_resetGiftRetryCount;
- (void)_rewardObject:(id)arg1 inViewController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

