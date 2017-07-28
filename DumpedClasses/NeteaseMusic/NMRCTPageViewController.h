//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSDictionary, NSString, NSURL, RCTBridge, RCTRootView, UIView;

@interface NMRCTPageViewController : UIViewController
{
    NSURL *_pageURL;
    NSDictionary *_initialProperties;
    RCTBridge *_bridge;
    UIView *_loadingView;
    NSString *_componentName;
    NSString *_pageTitle;
    RCTRootView *_rootView;
}

@property(retain, nonatomic) RCTRootView *rootView; // @synthesize rootView=_rootView;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
@property(readonly, nonatomic) RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(readonly, copy, nonatomic) NSDictionary *initialProperties; // @synthesize initialProperties=_initialProperties;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
@property(readonly, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
- (void)backAction:(id)arg1;
- (void)_setupNavigationBar;
@property(readonly, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
- (void)_setupRootView;
- (void)controllerDidLogin:(id)arg1;
- (void)controllerDidFallback:(id)arg1;
- (void)controllerDidLoad:(id)arg1;
- (void)_setupNotification;
- (void)viewDidLoad;
- (void)_initializeProps;
- (id)initWithBridge:(id)arg1 componentName:(id)arg2 initialProperties:(id)arg3;
- (id)initWithPageURL:(id)arg1 componentName:(id)arg2 initialProperties:(id)arg3;
- (void)dealloc;

@end

