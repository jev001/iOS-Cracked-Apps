//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMEventRetryRequest : NMBaseRequest
{
    NSString *_eventId;
}

@property(readonly, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)initWithEventId:(id)arg1;

@end

