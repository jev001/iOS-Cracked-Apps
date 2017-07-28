//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"

@class NMAnonymousLoginRequest, NMLogInRequest, NMPhoneLoginRequest, NMPhoneRegisterRequest, NMSnsLoginRequest, NSString;

@interface NMPassport : NSObject <NMHttpRequestDelegate>
{
    NMLogInRequest *_ursLoginRequest;
    NMSnsLoginRequest *_snsLoginRequest;
    NMPhoneLoginRequest *_phoneLoginRequest;
    NMPhoneRegisterRequest *_phoneRegisterRequest;
    NMAnonymousLoginRequest *_anonymousLoginRequest;
    _Bool _isPhoneRegister;
    id _delegate;
}

+ (id)passport;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (_Bool)resendRequestForHttps:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)_processLogout:(_Bool)arg1;
- (void)logOutFromThirdPartRegister;
- (void)logOut;
- (void)loginByAnonymous;
- (void)registerWithPhoneNumber:(id)arg1 password:(id)arg2 capthca:(id)arg3 nickname:(id)arg4;
- (void)loginWithPhoneNumber:(id)arg1 password:(id)arg2;
- (void)loginWithSnsType:(id)arg1 token:(id)arg2;
- (void)logInWithUsername:(id)arg1 password:(id)arg2;
@property(readonly, nonatomic) _Bool isURSLogin;
@property(readonly, nonatomic, getter=isLoggedIn) _Bool loggedIn;
- (void)startLogInWithUsername:(id)arg1 password:(id)arg2;
- (void)didLogOutAndCleanOnlyData:(_Bool)arg1;
- (void)failToLogInWithError:(id)arg1;
- (void)didRegister;
- (void)didLogin;
- (void)clearInfo;
- (void)fillInfo:(id)arg1;
- (void)callbackDelegateAfterFillPassport;
- (void)fillPassportWithCookie:(id)arg1 account:(id)arg2 profile:(id)arg3 tokens:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

