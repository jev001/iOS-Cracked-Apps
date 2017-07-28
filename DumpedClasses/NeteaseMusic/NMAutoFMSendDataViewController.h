//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NMAutoFMSendDataFailView, NMAutoFMSendDataFinishView, NMAutoFMSendDataLoadView;

@interface NMAutoFMSendDataViewController : UIViewController
{
    NMAutoFMSendDataLoadView *_sendingView;
    NMAutoFMSendDataFinishView *_finishedView;
    NMAutoFMSendDataFailView *_failedView;
    _Bool _keepBLEConnection;
    _Bool _pushedByFMPeripheralsViewController;
    long long _currentViewType;
    long long _fmFreqToSetAfterLoading;
}

@property(nonatomic) long long fmFreqToSetAfterLoading; // @synthesize fmFreqToSetAfterLoading=_fmFreqToSetAfterLoading;
@property(nonatomic) long long currentViewType; // @synthesize currentViewType=_currentViewType;
@property(nonatomic) _Bool pushedByFMPeripheralsViewController; // @synthesize pushedByFMPeripheralsViewController=_pushedByFMPeripheralsViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)receiveAutoFMSetting:(id)arg1;
- (void)receiveConnectState:(id)arg1;
- (void)sysSuccessFinish:(id)arg1;
- (void)gotoHelp;
- (void)retryConnect:(id)arg1;
- (void)backAction:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewType:(long long)arg1 fmFreqToSetAfterLoading:(long long)arg2;
- (id)initWithViewType:(long long)arg1;

@end

