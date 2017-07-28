//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIFont, UIImage, UIImageView, UILabel, UIView;

@interface NMShareToPlatformButton : UIButton
{
    UIImageView *_imageView;
    UILabel *_label;
    _Bool _isSelected;
    UIView *_nightMaskView;
    UIImage *_normalImage;
    UIImage *_selectedImage;
    UIImage *_highlightedImage;
    NSString *_title;
    double _labelHeight;
    UIFont *_titleFont;
    unsigned long long _type;
    struct CGSize _imageSize;
}

+ (struct CGSize)defaultImageSize;
+ (struct CGSize)defaultButtonSize;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
- (void).cxx_destruct;
- (void)setButtonFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_refreshViewForSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

