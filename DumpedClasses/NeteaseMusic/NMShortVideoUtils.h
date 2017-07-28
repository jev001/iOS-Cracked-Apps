//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMShortVideoUtils : NSObject
{
}

+ (float)scaleByTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;
+ (CDStruct_1b6d18a9)time:(CDStruct_1b6d18a9)arg1 divideBy:(float)arg2;
+ (CDStruct_1b6d18a9)time:(CDStruct_1b6d18a9)arg1 multiplyBy:(float)arg2;
+ (CDStruct_1b6d18a9)time:(CDStruct_1b6d18a9)arg1 substractBy:(CDStruct_1b6d18a9)arg2;
+ (CDStruct_1b6d18a9)time:(CDStruct_1b6d18a9)arg1 addBy:(CDStruct_1b6d18a9)arg2;
+ (CDStruct_1b6d18a9)time:(CDStruct_1b6d18a9)arg1 convertBy:(int)arg2;
+ (id)formatDuration:(double)arg1;
+ (double)nominalTime:(double)arg1;
+ (void)performOnMainThread:(CDUnknownBlockType)arg1;
+ (float)whRatioForAsset:(id)arg1 defaultRatio:(float)arg2;
+ (void)assetExists:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (long long)videoOrientationFromTranfrom:(id)arg1;
+ (id)minimizeCGImage:(struct CGImage *)arg1 imageOrientation:(long long)arg2 preferredSize:(struct CGSize)arg3;
+ (id)minimizeCGImage:(struct CGImage *)arg1 preferredSize:(struct CGSize)arg2;
+ (id)minimizeImage:(id)arg1 preferredSize:(struct CGSize)arg2;
+ (id)pathToSaveCover:(id)arg1;
+ (id)pathToSaveBgm:(id)arg1;
+ (id)pathToSaveVideo:(id)arg1;
+ (id)pathOutput:(id)arg1;
+ (id)dirOutput:(id)arg1;
+ (id)dateFormatter;

@end

