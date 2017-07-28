//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMLiveHorizontalSuperControlViewDataSource.h"
#import "NMLiveHorizontalSuperControlViewDelegate.h"
#import "NMLivePlayViewDelegate.h"
#import "NMLiveVerticalSuperControlViewDelegate.h"

@class NMLiveHorizontalSuperControlView, NMLivePlayFailedView, NMLivePlayFinishedView, NMLivePlayNoticeView, NMLivePlayView, NMLiveVerticalSuperControlView, NSString;

@interface NMLiveView : UIView <NMLiveVerticalSuperControlViewDelegate, NMLiveHorizontalSuperControlViewDelegate, NMLiveHorizontalSuperControlViewDataSource, NMLivePlayViewDelegate>
{
    NMLivePlayView *_playView;
    NMLiveHorizontalSuperControlView *_horizontalSuperView;
    NMLiveVerticalSuperControlView *_verticalSuperView;
    NMLivePlayNoticeView *_livePlayNoticeView;
    NMLivePlayFailedView *_livePlayFailedView;
    NMLivePlayFinishedView *_livePlayFinishedView;
    NSString *_reservedCommentString;
    id <NMLiveViewDelegate> _delegate;
    id <NMLIveViewDataSource> _dataSource;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <NMLIveViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <NMLiveViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)currentTimestamp;
@property(readonly, nonatomic) _Bool isNetworkNoticeShowing;
- (void)showNetworkNoticeWithTitle:(id)arg1 comfirmCallback:(CDUnknownBlockType)arg2;
- (void)reload;
- (void)stop;
- (void)pause;
- (void)play;
- (void)updateLiveChannel;
- (void)hideVoteButton:(_Bool)arg1;
- (void)setViewWithLiveScreen:(id)arg1;
- (void)showLiveComment:(id)arg1;
- (void)updateLiveConfigure;
- (void)updateParitipantCount;
- (void)updatePropsCount;
- (void)updateLiveComments;
- (void)updateLiveInfo:(id)arg1;
- (long long)voteStatus;
- (id)selectedChannel;
- (id)selectedPerspective;
- (long long)danmakusCost;
- (double)propFreezeTime;
- (id)supportedArtist;
- (id)liveCommentsArray;
- (double)currentTime;
- (long long)propCount;
- (id)factionsArray;
- (id)channelList;
- (id)perspectiveList;
- (long long)participantCount;
- (id)liveTitle;
- (void)horizontalViewNeedToLogin:(id)arg1;
- (void)horizontalView:(id)arg1 sendDanmakusItem:(id)arg2;
- (void)horizontalView:(id)arg1 didPickResolution:(id)arg2;
- (void)horizontalView:(id)arg1 didPickScreen:(id)arg2;
- (void)horizontalViewVoteClicked:(id)arg1;
- (void)horizontalViewChangedFaction:(id)arg1 controlView:(id)arg2;
- (void)horizontalViewShareLiveInfo:(id)arg1;
- (void)horizontalViewExitFullScreen:(id)arg1;
- (void)horizontalViewGoBack:(id)arg1;
- (void)liveVerticalSuperControlViewTapped:(id)arg1;
- (void)liveVerticalSuperControlViewSwitchScreenButtonTouched:(id)arg1;
- (void)liveVerticalSuperControlViewBackButtonTouched:(id)arg1;
- (void)liveVerticalSuperControlViewSwitchFullScreenButtonTouched:(id)arg1;
- (void)livePlayViewPlayFailed:(id)arg1;
@property(copy, nonatomic) NSString *reservedCommentString; // @synthesize reservedCommentString=_reservedCommentString;
- (void)layoutSubviews;
- (void)showVerticalView;
- (void)showHorizontalView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

