//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSkinCustomColorImageManager.h"

@interface NMSkinCustomImageManager : NMSkinCustomColorImageManager
{
    double _maskOpacity;
    double _blurValue;
}

+ (id)currentPath:(id)arg1;
+ (id)defaultManager;
- (void)deleteAllResources;
- (_Bool)checkAndFix:(id)arg1;
- (id)imageForName:(id)arg1;
- (_Bool)createImagesWithTheme:(id)arg1 forced:(_Bool)arg2 createdCount:(int *)arg3;
- (_Bool)createResources:(id)arg1 forced:(_Bool)arg2;
- (void)setBlurValue:(double)arg1;
- (void)setMaskOpacity:(double)arg1;
- (_Bool)checkSkinThemeOriginalResourceExist:(id)arg1;
- (id)controlImagePath:(id)arg1;
- (id)coverImagePath:(id)arg1;
- (id)appBackgroundImagePath:(id)arg1;
- (id)imagePathForKey:(id)arg1 theme:(id)arg2;
- (id)init;

@end

