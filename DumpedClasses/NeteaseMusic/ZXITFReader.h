//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZXOneDReader.h"

@interface ZXITFReader : ZXOneDReader
{
    int _narrowLineWidth;
}

@property(nonatomic) int narrowLineWidth; // @synthesize narrowLineWidth=_narrowLineWidth;
- (int)decodeDigit:(id)arg1;
- (id)findGuardPattern:(id)arg1 rowOffset:(int)arg2 pattern:(const int *)arg3 patternLen:(int)arg4;
- (id)decodeEnd:(id)arg1;
- (int)skipWhiteSpace:(id)arg1;
- (_Bool)validateQuietZone:(id)arg1 startPattern:(int)arg2;
- (id)decodeStart:(id)arg1;
- (_Bool)decodeMiddle:(id)arg1 payloadStart:(int)arg2 payloadEnd:(int)arg3 resultString:(id)arg4;
- (id)decodeRow:(int)arg1 row:(id)arg2 hints:(id)arg3 error:(id *)arg4;
- (id)init;

@end

