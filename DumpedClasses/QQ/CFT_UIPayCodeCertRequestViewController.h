//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseCertPswViewController.h"

#import "TPPayCodeManagerDelegate.h"

@class NSString, UIImage;

@interface CFT_UIPayCodeCertRequestViewController : CFT_UIBaseCertPswViewController <TPPayCodeManagerDelegate>
{
    UIImage *_navBarImg;
}

- (void)dealloc;
- (void)nextStepDisable;
- (void)nextStepEnable;
- (void)generatePayCodeFinish:(id)arg1;
- (void)openPayCodeFinish:(id)arg1;
- (void)requestFailed;
- (void)requestCodeGenerate:(id)arg1;
- (void)nextStep;
- (void)leftButtonClick:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initBgView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
