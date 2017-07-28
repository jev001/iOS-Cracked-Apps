//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSTimer, UIButton, UIImage, UIImageView, UILabel;

@interface NMRecognizeWaveView : UIView
{
    UIView *_waveContainerView;
    UIButton *_recognizeButton;
    UIImageView *_iconImageView;
    UIView *_scale1;
    UIView *_scale2;
    UIView *_scale3;
    UILabel *_textLabel;
    UILabel *_hintLabel;
    UIImage *_qMarkImage;
    UIImage *_startMarkImage;
    _Bool _scaled;
    NSTimer *_timer;
    unsigned long long _state;
    NSMutableArray *_waves;
}

@property(retain, nonatomic) NSMutableArray *waves; // @synthesize waves=_waves;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) UIButton *recognizeButton; // @synthesize recognizeButton=_recognizeButton;
- (void).cxx_destruct;
- (void)toggleButtonSpringAnimation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopWave;
- (id)createWave;
- (void)wave;
- (void)startWave;
- (double)buttonTopMargin;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)recognizeButtonSide;
- (double)scale3Side;
- (double)scale2Side;
- (double)scale1Side;

@end

