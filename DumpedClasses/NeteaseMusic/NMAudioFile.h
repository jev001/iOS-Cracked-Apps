//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTESAudioSource.h"

@class CloundMusicAudioFile, NSDictionary, NSString, UIImage;

@interface NMAudioFile : NSObject <NTESAudioSource>
{
    CloundMusicAudioFile *_file;
    NSDictionary *_info;
    _Bool _imageReaded;
    UIImage *_image;
    _Bool _typeReaded;
    unsigned long long _type;
    _Bool _extReaded;
    NSString *_ext;
    id <NTESAudioSourceDelegate> _delegate;
}

+ (id)fileWithFilePath:(id)arg1;
@property(nonatomic) __weak id <NTESAudioSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)readOffset;
- (void)seekToEnd;
- (void)seekToPosition:(unsigned long long)arg1;
- (id)readDataWithLength:(unsigned long long)arg1;
- (id)dataAtPosition:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (struct _NTESAudioCacheRange)rangeForPosition:(unsigned long long)arg1 length:(unsigned int)arg2;
- (_Bool)isEof;
- (_Bool)isCompeleted;
- (unsigned long long)fileLength;
- (_Bool)isRemoteSource;
- (void)dealloc;
- (void)close;
@property(readonly, nonatomic) UIImage *image; // @dynamic image;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *ext;
@property(readonly, nonatomic) NSDictionary *info; // @dynamic info;
@property(readonly, nonatomic) NSString *filePath; // @dynamic filePath;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

