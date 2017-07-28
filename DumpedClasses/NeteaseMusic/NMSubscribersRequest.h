//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMSubscribersRequest : NMBaseRequest
{
    unsigned long long _offset;
    unsigned long long _limit;
    NSString *_playlistId;
}

@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSString *playlistId; // @synthesize playlistId=_playlistId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPlaylistId:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3;

@end

