//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMPhoneCaptchaViewController.h"

@class NMPhoneBindRequest, UIViewController;

@interface NMPhoneInviteCaptchaController : NMPhoneCaptchaViewController
{
    NMPhoneBindRequest *_bindRequest;
    UIViewController *_finishedGoToController;
}

@property(nonatomic) UIViewController *finishedGoToController; // @synthesize finishedGoToController=_finishedGoToController;
- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)nextButtonClicked:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

