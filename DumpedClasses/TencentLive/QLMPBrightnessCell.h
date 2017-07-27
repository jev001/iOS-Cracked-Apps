//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "QLBrightnessSliderViewDelegate.h"
#import "QLSliderViewDelegate.h"

@class NSString, QLBrightnessSliderView;

@interface QLMPBrightnessCell : UITableViewCell <QLBrightnessSliderViewDelegate, QLSliderViewDelegate>
{
    float _beginRate;
    id <QLMPBrightnessCellDelegate> _delegate;
    QLBrightnessSliderView *_brightnessSlider;
}

+ (double)cellHeight;
@property(nonatomic) float beginRate; // @synthesize beginRate=_beginRate;
@property(retain, nonatomic) QLBrightnessSliderView *brightnessSlider; // @synthesize brightnessSlider=_brightnessSlider;
@property(nonatomic) __weak id <QLMPBrightnessCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)playerDirection:(long long)arg1;
- (long long)getPlayerViewStyle;
- (id)tableViewOfMine;
- (void)didSlideEnd;
- (void)didSlideBegin;
- (void)didBrightnessSliderChanged;
- (void)resetBrightness;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
