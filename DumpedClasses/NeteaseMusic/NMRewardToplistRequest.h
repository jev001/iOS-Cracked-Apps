//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@interface NMRewardToplistRequest : NMBaseRequest
{
    _Bool _all;
    unsigned long long _type;
    unsigned long long _limit;
    unsigned long long _offset;
}

@property(readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) _Bool all; // @synthesize all=_all;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 all:(_Bool)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4;

@end

