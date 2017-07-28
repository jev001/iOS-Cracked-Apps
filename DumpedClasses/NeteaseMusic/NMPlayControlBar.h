//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMPlayProgressSlider, NMPlaySlider, UIButton, UIImage, UILabel;

@interface NMPlayControlBar : UIView
{
    id _delegate;
    _Bool _isDjStyle;
    _Bool _buffering;
    UIImage *_singleRepeatIcon;
    UIImage *_singleRepeatPressIcon;
    UIImage *_randomIcon;
    UIImage *_randomPressIcon;
    UIImage *_repeatIcon;
    UIImage *_repeatPressIcon;
    UIImage *_orderIcon;
    UIImage *_orderPressIcon;
    UIButton *_playPauseButton;
    UIButton *_previousButton;
    UIButton *_nextButton;
    UIButton *_playModButton;
    UIButton *_sourceButton;
    NMPlaySlider *_progressSilder;
    NMPlayProgressSlider *_progressSilderImmerse;
    UILabel *_durationLabel;
    UILabel *_progressLabel;
    _Bool _isImmerse;
}

@property(nonatomic) _Bool isImmerse; // @synthesize isImmerse=_isImmerse;
@property(readonly, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(readonly, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setPlayModeAccessibility;
- (void)setPlayOrPauseButtonAccessibility:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setProgressViewDelegate:(id)arg1;
- (void)setUIStyle;
- (id)animationViews;
- (void)setAllButtonsStatus:(id)arg1;
@property(nonatomic) long long playRate;
@property(nonatomic) float progress;
- (void)stopBuffering;
- (void)startBuffering;
- (void)seekEnd;
- (void)seekToPercent:(double)arg1;
- (void)seekBegin;
@property(nonatomic) _Bool isPaused;
@property(readonly, nonatomic) _Bool tracking;
- (void)refreshDownloadBar:(_Bool)arg1;
- (void)playSliderSeeking;
- (void)playModeChange:(long long)arg1;
- (void)setPlayModeButtonImage;
- (void)songChange:(id)arg1;
- (double)buttonBottomMargin;
- (double)buttonPadding3;
- (double)buttonPadding2;
- (double)buttonPadding1;
- (double)sliderTopMargin;
- (double)progressSliderPadding;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

