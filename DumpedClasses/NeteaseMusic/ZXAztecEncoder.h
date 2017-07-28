//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ZXAztecEncoder : NSObject
{
}

+ (int)totalBitsInLayer:(int)arg1 compact:(_Bool)arg2;
+ (id)stuffBits:(id)arg1 wordSize:(int)arg2;
+ (id)getGF:(int)arg1;
+ (id)bitsToWords:(id)arg1 wordSize:(int)arg2 totalWords:(int)arg3;
+ (id)generateCheckWords:(id)arg1 totalBits:(int)arg2 wordSize:(int)arg3;
+ (void)drawModeMessage:(id)arg1 compact:(_Bool)arg2 matrixSize:(int)arg3 modeMessage:(id)arg4;
+ (id)generateModeMessageCompact:(_Bool)arg1 layers:(int)arg2 messageSizeInWords:(int)arg3;
+ (void)drawBullsEye:(id)arg1 center:(int)arg2 size:(int)arg3;
+ (id)encode:(id)arg1 minECCPercent:(int)arg2 userSpecifiedLayers:(int)arg3;
+ (id)encode:(id)arg1;

@end

