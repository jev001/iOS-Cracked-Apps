//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DrawUtils : NSObject
{
}

+ (void)drawRoundedImgWithRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 img:(id)arg3 ovalWidth:(float)arg4 ovalHeight:(float)arg5;
+ (void)addRoundedRectToPathWithRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 ovalWidth:(float)arg3 ovalHeight:(float)arg4;
+ (void)drawRoundRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 fillColor:(id)arg3 strokeColor:(id)arg4 radius:(double)arg5;

@end

