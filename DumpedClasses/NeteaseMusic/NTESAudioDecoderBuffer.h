//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTESAudioBuffer.h"

@interface NTESAudioDecoderBuffer : NTESAudioBuffer
{
}

- (void)cleanBuffer;
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2 packetDescription:(struct AudioStreamPacketDescription)arg3;
- (_Bool)readBytes:(void *)arg1 length:(unsigned long long *)arg2 packetDescription:(struct AudioStreamPacketDescription *)arg3;

@end

