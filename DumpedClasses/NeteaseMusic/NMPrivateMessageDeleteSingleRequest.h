//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@interface NMPrivateMessageDeleteSingleRequest : NMBaseRequest
{
    long long _privateMessageID;
}

- (id)initWithPrivateMessageID:(long long)arg1;
@property(readonly, nonatomic) long long privateMessageID;

@end

