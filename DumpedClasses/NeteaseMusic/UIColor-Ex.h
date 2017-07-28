//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIColor.h"

@interface UIColor (Ex)
+ (id)hexStringRepresentationForRGBValue:(unsigned long long)arg1;
+ (id)colorWithHexString:(id)arg1 alpha:(double)arg2;
+ (id)colorWithHexString:(id)arg1;
+ (id)blackColorWithAlpha:(double)arg1 switchWhiteInNightMode:(_Bool)arg2;
+ (id)whiteColorWithAlpha:(double)arg1 switchBlackInNightMode:(_Bool)arg2;
- (id)colorWithMinimumSaturation:(double)arg1;
- (_Bool)isDistinct:(id)arg1;
- (_Bool)isNearlyBlackColor;
- (_Bool)isNearlyWhiteColor;
- (id)hexStringRepresentationWithAlpha:(double *)arg1;
- (id)hexStringRepresentation;
@end

