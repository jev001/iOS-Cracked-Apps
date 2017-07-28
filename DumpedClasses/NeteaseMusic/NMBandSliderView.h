//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMPopoverSlider, UIImage, UILabel;

@interface NMBandSliderView : UIView
{
    id <NMBandSliderViewDelegate> _delegate;
    UIImage *_defaultScaleViewImage;
    UIImage *_defaultScaleViewNightImage;
    UILabel *_freqLabel;
    NMPopoverSlider *_slider;
    UIView *_scaleView;
    long long _value;
    long long _bandFrequency;
    _Bool _highlighted;
    _Bool _enabled;
}

+ (double)width;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long bandFrequency; // @synthesize bandFrequency=_bandFrequency;
@property(nonatomic) __weak id <NMBandSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sliderValueChanged:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)_refreshViewForSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

