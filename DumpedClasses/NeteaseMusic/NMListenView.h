//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, OTCircleProgressView, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface NMListenView : UIView
{
    UIButton *_songNameButton;
    UILabel *_songNameLabel;
    _Bool _isShowingSongName;
    _Bool _dismissing;
    UIButton *_playButton;
    OTCircleProgressView *_progressView;
    UIImageView *_playIcon;
    UILabel *_timerLabel;
    UIActivityIndicatorView *_loadingView;
    UIButton *_locationButton;
    UIButton *_closeButton;
    UIButton *_backgroundButton;
    _Bool _isLoading;
    _Bool _isButtonsShowing;
    _Bool _isDelayClosing;
    _Bool _isDelayHidingSongName;
    _Bool _isHidingSongName;
    id <NMListenViewDelegate> _delegate;
    NSString *_songName;
    double _currentTime;
    double _totalTime;
}

@property(nonatomic) _Bool isHidingSongName; // @synthesize isHidingSongName=_isHidingSongName;
@property(nonatomic) _Bool isDelayHidingSongName; // @synthesize isDelayHidingSongName=_isDelayHidingSongName;
@property(nonatomic) _Bool isDelayClosing; // @synthesize isDelayClosing=_isDelayClosing;
@property(nonatomic) _Bool isButtonsShowing; // @synthesize isButtonsShowing=_isButtonsShowing;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(nonatomic) __weak id <NMListenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didCloseCallback;
- (void)hideButtonsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideButtonsAnimated:(_Bool)arg1;
- (void)showButtons;
- (void)setButton:(id)arg1 originY:(double)arg2;
- (void)closeButtonTouched;
- (void)locationButtonTouched;
- (void)songNameButtonTouched;
- (void)backgroundTouched;
- (void)playButtonTouched;
@property(readonly, nonatomic) _Bool isShowingSongName;
@property(readonly, nonatomic) _Bool isShowingSatellites;
- (void)setSingleSongProgress:(double)arg1 animated:(_Bool)arg2 animationDuration:(double)arg3;
@property(nonatomic) double singleSongProgress;
- (void)setSongNameWidth:(double)arg1 animated:(_Bool)arg2;
- (void)cancelDelayHideSongName;
- (void)delayHideSongName;
- (void)hideSongNameAnimated:(_Bool)arg1;
- (void)hideSongName;
- (void)showSongNameAnimated:(_Bool)arg1;
- (void)showSongName;
- (void)cancelDelayFoldUpAndClose;
- (void)delayFoldUpAndClose;
- (void)foldUpAndClose;
- (void)showInView:(id)arg1 atSubViewIndex:(long long)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

