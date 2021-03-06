//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class QLLiveTryWatchViewController, UIImageView, UILabel;

@interface QLTryWatchView : UIButton
{
    UIButton *_tryWatchButton;
    UILabel *_tryWacthTimeLable;
    UIImageView *_bottomBackgroundView;
    unsigned long long _tryWatchmode;
    QLLiveTryWatchViewController *_tryWatchViewController;
}

@property(nonatomic) __weak QLLiveTryWatchViewController *tryWatchViewController; // @synthesize tryWatchViewController=_tryWatchViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clickButton:(id)arg1;
- (id)timeFormatFromInteger:(long long)arg1;
- (void)setWatchViewMode:(unsigned long long)arg1;
- (void)setWatchViewMode:(unsigned long long)arg1 withFrame:(struct CGRect)arg2;
- (void)flushViewWithFrame:(struct CGRect)arg1;
- (void)frushView;
- (void)setTryWatchTips:(long long)arg1 playTime:(long long)arg2;
- (void)setTotalPlayTime:(long long)arg1 playTime:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

