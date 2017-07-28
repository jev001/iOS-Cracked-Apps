//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMArtistAlbumRequest : NMBaseRequest
{
    NSString *_artistId;
    unsigned long long _limit;
    unsigned long long _offset;
    unsigned long long _sortType;
}

@property(nonatomic) unsigned long long sortType; // @synthesize sortType=_sortType;
- (void).cxx_destruct;
- (id)initWithArtistId:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 sortType:(unsigned long long)arg4;
- (id)initWithArtistId:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3;

@end

