//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ZXIntArray;

@interface ZXUPCEANExtension2Support : NSObject
{
    ZXIntArray *_decodeMiddleCounters;
}

@property(readonly, nonatomic) ZXIntArray *decodeMiddleCounters; // @synthesize decodeMiddleCounters=_decodeMiddleCounters;
- (void).cxx_destruct;
- (id)parseExtensionString:(id)arg1;
- (int)decodeMiddle:(id)arg1 startRange:(struct _NSRange)arg2 result:(id)arg3 error:(id *)arg4;
- (id)decodeRow:(int)arg1 row:(id)arg2 extensionStartRange:(struct _NSRange)arg3 error:(id *)arg4;
- (id)init;

@end

