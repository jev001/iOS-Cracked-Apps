//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPDeleteFriendRequestPacket : AMPNetPacket
{
    NSString *_msgId;
}

@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithRequestId:(id)arg1;

@end
