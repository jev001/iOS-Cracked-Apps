//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTESAudioSource.h"

@class NSFileHandle, NSString;

@interface NTESAudioFile : NSObject <NTESAudioSource>
{
    id <NTESAudioCacheEncryptor> _encryptor;
    NSString *_filePath;
    unsigned long long _fileLength;
    unsigned long long _offset;
    NSFileHandle *_readFileHandle;
    id <NTESAudioSourceDelegate> _delegate;
}

+ (id)fileWithFilePath:(id)arg1 encryptor:(id)arg2;
+ (id)fileWithFilePath:(id)arg1;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) id <NTESAudioCacheEncryptor> encryptor; // @synthesize encryptor=_encryptor;
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
- (id)initWithFilePath:(id)arg1 encryptor:(id)arg2;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

