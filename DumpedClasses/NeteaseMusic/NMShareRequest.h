//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NMUser, NSDate, NSString;

@interface NMShareRequest : NMBaseRequest
{
    unsigned long long _shareType;
    NSString *_content;
    NSString *_toUids;
    NSString *_resourceId;
    long long _lastTime;
    NMUser *_textMessageToUser;
    NSDate *_textMessageSendTime;
    NSString *_threadId;
}

@property(retain, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) NSDate *textMessageSendTime; // @synthesize textMessageSendTime=_textMessageSendTime;
@property(retain, nonatomic) NMUser *textMessageToUser; // @synthesize textMessageToUser=_textMessageToUser;
@property(nonatomic) long long lastTime; // @synthesize lastTime=_lastTime;
@property(readonly, retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(readonly, retain, nonatomic) NSString *toUids; // @synthesize toUids=_toUids;
@property(readonly, retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, nonatomic) unsigned long long shareType; // @synthesize shareType=_shareType;
- (void).cxx_destruct;
- (id)failedTextMessage;
- (id)typeStringForShareType:(unsigned long long)arg1;
- (id)initWithPicInfo:(id)arg1 toUids:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 content:(id)arg2 toUids:(id)arg3 resourceId:(id)arg4 threadId:(id)arg5;
- (id)initWithType:(unsigned long long)arg1 content:(id)arg2 toUids:(id)arg3 resourceId:(id)arg4;
- (id)initWithType:(unsigned long long)arg1 content:(id)arg2 toUids:(id)arg3 resourceId:(id)arg4 threadId:(id)arg5 PicInfo:(id)arg6;

@end
