//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMHttpRequestDelegate.h"
#import "NMScreenShotProtocol.h"

@class NMAnonymousLoginViewController, NMPhoneCaptchaSendRequest, NSDictionary, NSString;

@interface NMThirdPartLoginBindPhoneViewController : UIViewController <NMHttpRequestDelegate, NMScreenShotProtocol>
{
    NMPhoneCaptchaSendRequest *_captchaRequest;
    NSString *_validPhoneNumber;
    NMAnonymousLoginViewController *_anonymousLoginViewController;
}

@property(nonatomic) __weak NMAnonymousLoginViewController *anonymousLoginViewController; // @synthesize anonymousLoginViewController=_anonymousLoginViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool notNeedShowShareMenu;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)backAction:(id)arg1;
- (void)_gotoNicknameViewController;
- (void)skipButtonClicked:(id)arg1;
- (void)thirdPartBindPhoneNumberClicked:(id)arg1;
- (void)loadView;
- (id)bindPhoneView;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *screenShotLogParams;
@property(readonly) Class superclass;

@end

