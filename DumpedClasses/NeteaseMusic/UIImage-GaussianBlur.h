//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (GaussianBlur)
+ (void)applyStackBlurToBuffer:(char *)arg1 width:(int)arg2 height:(int)arg3 withRadius:(int)arg4;
- (id)normalize;
- (id)stackBlurArea:(CDStruct_1586d5e9 *)arg1 count:(int)arg2;
- (id)stackBlur:(int)arg1;
- (id)boxblurImageWithBlur:(double)arg1;
- (id)gaussianBlurByGPU:(double)arg1;
- (id)gaussianBlurByCPU:(double)arg1;
@end

