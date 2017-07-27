//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "UIAlertViewDelegate.h"

@class NSString, TXRechargeEngine, TXTelFeeOrFlowHandler, TXTelFeeOrFlowMainView;

@interface TXTelFeeOrFlowViewController : TBViewController <UIAlertViewDelegate>
{
    _Bool _isTabSelected;
    _Bool _firstLoad;
    TXTelFeeOrFlowHandler *_handler;
    TXTelFeeOrFlowMainView *_mainView;
    TXRechargeEngine *_engine;
    long long _defaultSelectedTab;
}

@property(nonatomic) long long defaultSelectedTab; // @synthesize defaultSelectedTab=_defaultSelectedTab;
@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(nonatomic) _Bool isTabSelected; // @synthesize isTabSelected=_isTabSelected;
@property(retain, nonatomic) TXRechargeEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) TXTelFeeOrFlowMainView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) TXTelFeeOrFlowHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (id)pageUserInfo;
- (void)showThfRemindView:(id)arg1;
- (void)specialFlowDetail_PayBtnClicked:(id)arg1;
- (void)showClosedOrderInfo:(id)arg1;
- (void)handleUpUISignal_TXTelFeePayView_ThfDetailBtnClicked:(id)arg1;
- (void)handleUpUISignal_TXTelFeePayView_ActivityDetailBtnClicked:(id)arg1;
- (void)handleUpUISignal_TXFlowView_ChaoRenDetailClicked:(id)arg1;
- (void)handleUpUISignal_TXFlowView_PayBtnClicked:(id)arg1;
- (void)handleUpUISignal_TXPayView_PayBtnClicked:(id)arg1;
- (void)handleUpUISignal_TXTelFeeView_GridItemClicked:(id)arg1;
- (void)startGotoFamilyRecharge:(id)arg1;
- (void)handleUpUISignal_TXOneFamilyView:(id)arg1;
- (void)handleUpUISignal_TXTabView_TabItemClicked:(id)arg1;
- (void)handleUpUISignal_TXTelFeeOrFlowMainView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setSubSource:(id)arg1;
- (void)setClientSource:(id)arg1;
- (void)setFocus:(id)arg1;
- (void)setSceneCode:(id)arg1;
- (void)setDefaultFace:(id)arg1;
- (void)setDefaultPhoneNumber:(id)arg1;
- (void)setSelectedTabType:(long long)arg1;
- (void)messageAction;
- (void)stopLoading;
- (void)fireStartLoadingAfterDelay:(id)arg1;
- (void)showToastWithText:(id)arg1;
- (void)setScrollEnabledInSuperView:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
