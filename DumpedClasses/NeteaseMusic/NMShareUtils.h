//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMShareUtils : NSObject
{
}

+ (id)shareScreenShotLinkForResource:(id)arg1;
+ (id)shareScreenShotWordsForResource:(id)arg1;
+ (id)_description:(id)arg1;
+ (id)eventDescription:(id)arg1;
+ (id)_coverUrlByEventData:(id)arg1;
+ (id)truncateNickName:(id)arg1 withShareScene:(unsigned long long)arg2;
+ (id)truncateShareWords:(id)arg1;
+ (id)eventCoverUrl:(id)arg1;
+ (id)_shareTitleWithEvent:(id)arg1 shareToAll:(_Bool)arg2 withShareScene:(unsigned long long)arg3;
+ (id)shareTitleToAll:(id)arg1 withShareScene:(unsigned long long)arg2;
+ (id)shareTitleToOne:(id)arg1 withShareScene:(unsigned long long)arg2;
+ (id)BILogKeyTypeStringForResource:(id)arg1;
+ (void)checkNeedShowFavEncourage:(id)arg1 fromPlay:(_Bool)arg2;
+ (id)shareTextForResource:(id)arg1 prefilledText:(id)arg2;
+ (id)fixSharingUrl:(id)arg1;
+ (id)fixeSharingUrlIfNeeded:(id)arg1 resource:(id)arg2;
+ (id)outerLinkForSong:(id)arg1;
+ (id)shareLogTypeStringForShareType:(unsigned long long)arg1;
+ (unsigned long long)shareTypeForResource:(id)arg1;
+ (double)heightForCommentImage:(id)arg1;
+ (void)imageForShareComment:(id)arg1 resource:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
+ (double)heightForCommentImageLayout:(id)arg1 resource:(id)arg2;
+ (id)truncateMessageString:(id)arg1 url:(id)arg2 message:(id)arg3 official:(id)arg4;
+ (id)replaceSnsNickname:(id)arg1 sns:(id)arg2 type:(id)arg3;
+ (id)commentResourceLink:(id)arg1;
+ (id)composeCommentShareMessage:(id)arg1;
+ (id)genMessageFromResource:(id)arg1 resource:(id)arg2 shareType:(unsigned long long)arg3 url:(id)arg4 openPlatform:(long long)arg5 snsInfo:(id)arg6;
+ (id)artistNameOfResource:(id)arg1;
+ (id)ownerIdsOfResource:(id)arg1;
+ (id)nameOfResource:(id)arg1;
+ (id)coverImageUrlForResource:(id)arg1;
+ (id)resourceIdForResource:(id)arg1;
+ (void)dealWithSuccessWithPointRequestType:(unsigned long long)arg1 successWithNotice:(_Bool)arg2;
+ (void)shareWXQQSuccessNotification:(id)arg1 successObject:(id)arg2 pointRequestType:(unsigned long long)arg3 postNotification:(_Bool)arg4;
+ (void)shareSuccessNotification:(id)arg1 pointRequestType:(unsigned long long)arg2 successWithNotice:(_Bool)arg3;
+ (void)shareSuccessNotification:(id)arg1 pointRequestType:(unsigned long long)arg2;

@end

