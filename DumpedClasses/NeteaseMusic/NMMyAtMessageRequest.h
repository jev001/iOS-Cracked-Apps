//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@interface NMMyAtMessageRequest : NMBaseRequest
{
    double _time;
    long long _limit;
}

@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(nonatomic) double time; // @synthesize time=_time;
- (id)initWithTime:(double)arg1 limit:(long long)arg2;

@end

