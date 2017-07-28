//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class OTCircleProgressView, UIButton, UIImageView, UILabel;

@interface NMRunFMOfflinePackagePanelView : UIView
{
    UIView *_topLine;
    UIImageView *_progressBgView;
    OTCircleProgressView *_progressView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_progressLabel;
    UIButton *_infoButton;
    UIImageView *_animatedIconView;
    id <NMRunFMOfflinePackagePanelViewDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) __weak id <NMRunFMOfflinePackagePanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateProgressWithDoneCount:(long long)arg1 totalCount:(long long)arg2;
- (void)_doStartAnimationIfNeeded;
- (void)refreshState;
- (void)refreshAniationIfNeeded;
- (void)infoButtonClicked:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)init;

@end

