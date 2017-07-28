//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMAssetItem.h"

@class NSDate, NSString, UIImage;

@interface NMAssetTempItem : NMAssetItem
{
    UIImage *_image;
    UIImage *_thumbImage;
    struct CGSize _thumbSize;
    NSString *_identifier;
    NSDate *_date;
}

- (void).cxx_destruct;
- (id)date;
- (void)makeInvalid;
- (_Bool)valid;
- (id)identifier;
- (long long)fileLength;
- (id)originalImageData;
- (id)originalImage;
- (id)fullScreenImage;
- (struct CGSize)dimensions;
- (id)thumbnail;
- (id)initWithImage:(id)arg1 thumbSize:(struct CGSize)arg2;

@end

