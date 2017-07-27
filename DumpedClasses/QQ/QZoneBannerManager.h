//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QZoneBannerManager : NSObject
{
    NSMutableDictionary *_bannerInfoQueue;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)removeBannerWithBannerSort:(long long)arg1;
- (void)removeAllBannerWithType:(long long)arg1;
- (void)removeBannerTipsWithBannerType:(long long)arg1 bannerInfo:(id)arg2 update:(_Bool)arg3;
- (void)removeBannerTipsWithBannerType:(long long)arg1 update:(_Bool)arg2;
- (void)removeBannerTipsWithBannerType:(long long)arg1;
- (void)addBannerTipsWithBannerType:(long long)arg1 bannerInfo:(id)arg2 update:(_Bool)arg3;
- (void)addBannerTipsWithBannerType:(long long)arg1 bannerInfo:(id)arg2;
- (_Bool)isBannerInfoExist:(long long)arg1;
- (_Bool)isBannerEnable:(_Bool)arg1 isActiveRefreshing:(_Bool)arg2;
- (long long)bannerSortWithType:(long long)arg1;
- (_Bool)compareBannerInfo:(id)arg1 to:(id)arg2;
- (id)getHeadBannerInfo:(long long *)arg1;
- (long long)bannerCount;
- (id)init;

@end
