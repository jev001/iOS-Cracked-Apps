//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface NMEventMultiImageView : UIView
{
    UIView *_bgView;
    NSMutableArray *_imageButtonArray;
    unsigned long long _type;
    NSArray *_imageObjArray;
    id <NMEventMultiImageViewDelegate> _delegate;
}

+ (struct CGSize)cachedTransitionThumbnailSizeWithImageSize:(struct CGSize)arg1;
+ (struct CGSize)cachedThumbnailSizeWithIndex:(unsigned long long)arg1 totalImageCount:(unsigned long long)arg2 imageSize:(struct CGSize)arg3;
+ (struct CGSize)meetingMultiImageSizeForWidth:(double)arg1 imageArray:(id)arg2;
+ (struct CGSize)eventMultiImageSizeForWidth:(double)arg1 imageArray:(id)arg2;
+ (struct CGSize)multiImageSizeForWidth:(double)arg1 imageArray:(id)arg2 type:(unsigned long long)arg3;
+ (struct CGRect)meetingRectForImageAtIndex:(long long)arg1 viewWidth:(double)arg2;
+ (struct CGRect)imageRectAtIndex:(long long)arg1 totalWidth:(double)arg2 totalCount:(long long)arg3;
+ (struct CGRect)eventRectForImageAtIndex:(long long)arg1 imageSize:(struct CGSize)arg2 totalCount:(long long)arg3 viewWidth:(double)arg4;
+ (double)imageSpacingValue;
+ (double)cachedSuperViewWidth;
@property(nonatomic) __weak id <NMEventMultiImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *imageObjArray; // @synthesize imageObjArray=_imageObjArray;
- (void).cxx_destruct;
- (void)layoutWithImageArray:(id)arg1;
- (void)setImageArray:(id)arg1 type:(unsigned long long)arg2;
- (id)transitionImages;
- (void)imageButtonTouched:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

