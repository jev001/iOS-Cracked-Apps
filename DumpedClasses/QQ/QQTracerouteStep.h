//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQTracerouteStep : NSObject
{
    unsigned int _ttl;
    NSString *_recieverHostName;
    NSString *_recieverAddress;
    double _pingDuration;
    long long _sequenceNumber;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(nonatomic) double pingDuration; // @dynamic pingDuration;
@property(retain, nonatomic) NSString *recieverAddress; // @dynamic recieverAddress;
@property(retain, nonatomic) NSString *recieverHostName; // @dynamic recieverHostName;
@property(nonatomic) long long sequenceNumber; // @dynamic sequenceNumber;
@property(nonatomic) unsigned int ttl; // @dynamic ttl;

@end
