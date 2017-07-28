//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMSong, NSDate, NSString;

@interface NMPrivateCloud : NSObject
{
    int _bitrate;
    NMSong *_song;
    NSString *_songId;
    NSString *_songName;
    NSString *_coverId;
    NSString *_artistName;
    NSString *_albumName;
    NSString *_fileName;
    long long _version;
    unsigned long long _fileSize;
    NSDate *_addTime;
}

@property(retain, nonatomic) NSDate *addTime; // @synthesize addTime=_addTime;
@property(nonatomic) int bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *coverId; // @synthesize coverId=_coverId;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NMSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (void)fixSongData;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

