//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@interface NMMyArtistRequest : NMBaseRequest
{
    long long _limit;
    long long _offset;
}

@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
- (id)initWithLimit:(long long)arg1 offset:(long long)arg2;

@end

