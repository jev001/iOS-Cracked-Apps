//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@interface NMSportFmLoadSongRequest : NMBaseRequest
{
    unsigned long long _limit;
    unsigned long long _bpm;
}

@property(readonly, nonatomic) unsigned long long bpm; // @synthesize bpm=_bpm;
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)initWithLimit:(unsigned long long)arg1 bpm:(unsigned long long)arg2;

@end

