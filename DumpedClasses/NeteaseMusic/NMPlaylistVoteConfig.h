//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMPlaylistVoteConfig : NSObject
{
    NSString *_url;
    NSString *_title;
    NSString *_playlistId;
}

@property(readonly, copy, nonatomic) NSString *playlistId; // @synthesize playlistId=_playlistId;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

