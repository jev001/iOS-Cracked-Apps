//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTTourIMHttpRequestManager : NSObject
{
}

+ (void)vtmImIsShowCustomerServiceWithGid:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (void)vtmImHomeApplyExitGroupWithGid:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (void)getAdvisorEventRequestTypeWithParamModel:(id)arg1 isOnlyManual:(_Bool)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (void)queryIMAutomaticMenuWithProductLine:(long long)arg1 scene:(long long)arg2 destinations:(id)arg3 pageIndex:(long long)arg4 pageSize:(long long)arg5 completeBlock:(CDUnknownBlockType)arg6;
+ (void)rewardLeaderIntegralWithUid:(id)arg1 rewardToUid:(id)arg2 count:(long long)arg3 rankingIndex:(long long)arg4 groupId:(id)arg5 completeBlock:(CDUnknownBlockType)arg6;
+ (void)getLeaderInfoWithUid:(id)arg1 groupId:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (void)getUserIntegralWithUid:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (void)getUserIdentityWithFromUid:(id)arg1 partnerUid:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (void)getGroupDetailInfoWithGroupId:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (void)getAdvisorInfoWithUserToken:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
+ (void)getLoginUserAdvisorInfoWithCompleteBlock:(CDUnknownBlockType)arg1;
+ (void)encryUserTokenWithUid:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;

@end
