//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliDetailBottomBarComponent, AliDetailContractPhoneMainView, AliDetailHintBanner, AliTradeCombinationItemsMainViewController, AliTradeSKUView, TBDetailNavigationBar, TBMoreCustomItem, TBTradeDetailViewController, UIActivityIndicatorView, UIImageView, UIView;

@interface TBTradeDetailViewBuilder : NSObject
{
    _Bool _needResetProductData;
    _Bool _isShowAdNow;
    _Bool _isDeleAd;
    _Bool _needPopSkuView;
    _Bool _mainTableViewChanged;
    TBTradeDetailViewController *_detailVC;
    AliTradeCombinationItemsMainViewController *_combinationItemsMainVC;
    TBDetailNavigationBar *_detailNaviBar;
    AliDetailBottomBarComponent *_detailToolbar;
    AliTradeSKUView *_skuView;
    AliDetailContractPhoneMainView *_contractPhoneView;
    TBMoreCustomItem *_shareItem;
    AliDetailHintBanner *_hintView;
    UIActivityIndicatorView *_loading;
    UIView *_adView;
    UIImageView *_bannerImage;
}

@property(nonatomic) _Bool mainTableViewChanged; // @synthesize mainTableViewChanged=_mainTableViewChanged;
@property(nonatomic) _Bool needPopSkuView; // @synthesize needPopSkuView=_needPopSkuView;
@property(nonatomic) _Bool isDeleAd; // @synthesize isDeleAd=_isDeleAd;
@property(nonatomic) _Bool isShowAdNow; // @synthesize isShowAdNow=_isShowAdNow;
@property(nonatomic) _Bool needResetProductData; // @synthesize needResetProductData=_needResetProductData;
@property(retain, nonatomic) UIImageView *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) UIActivityIndicatorView *loading; // @synthesize loading=_loading;
@property(retain, nonatomic) AliDetailHintBanner *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) TBMoreCustomItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) AliDetailContractPhoneMainView *contractPhoneView; // @synthesize contractPhoneView=_contractPhoneView;
@property(retain, nonatomic) AliTradeSKUView *skuView; // @synthesize skuView=_skuView;
@property(retain, nonatomic) AliDetailBottomBarComponent *detailToolbar; // @synthesize detailToolbar=_detailToolbar;
@property(retain, nonatomic) TBDetailNavigationBar *detailNaviBar; // @synthesize detailNaviBar=_detailNaviBar;
@property(retain, nonatomic) AliTradeCombinationItemsMainViewController *combinationItemsMainVC; // @synthesize combinationItemsMainVC=_combinationItemsMainVC;
@property(nonatomic) __weak TBTradeDetailViewController *detailVC; // @synthesize detailVC=_detailVC;
- (void).cxx_destruct;
- (void)checkIfSubPageViewIsShow;
- (_Bool)resetDataSource:(id)arg1;
- (void)clearDataForCombinationItemsMainVC;
- (void)showCombinationItemsMainView:(unsigned long long)arg1;
- (void)resetContentWhenRotate;
- (void)setEnabledChooseArea:(_Bool)arg1;
- (_Bool)skuViewIsShowed;
- (void)reloadPage:(id)arg1;
- (void)showSkuView:(unsigned long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)detailDataSource;
- (id)view;
- (id)dataSourceModel;
- (id)detailModel;
- (id)dataEngine;
- (void)dealloc;
- (id)init;
- (void)setupTbMoreCustomItems;
- (void)configErrorNaviBar;
- (void)configDetailNavBar;
- (void)configBottomBar;
- (void)confingContentView;
- (void)configNavBar;
- (void)showSkuViewIfNeeded;
- (void)generateBottomLineHint;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)synchronizeMoreState;

@end
