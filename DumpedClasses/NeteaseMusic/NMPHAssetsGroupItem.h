//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMAssetsGroupItem.h"

@class PHAssetCollection, PHFetchResult;

@interface NMPHAssetsGroupItem : NMAssetsGroupItem
{
    PHAssetCollection *_assetCollection;
    PHFetchResult *_assets;
}

+ (id)assetGroupItemWithAssetsGroup:(id)arg1;
- (void).cxx_destruct;
- (void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)isSavedPhotos;
- (_Bool)valid;
- (id)identifier;
- (id)name;
- (unsigned long long)assetsCount;
- (id)posterWithSize:(struct CGSize)arg1;
- (id)poster;
- (id)initAssetGroupItemWithAssetsGroup:(id)arg1;

@end

