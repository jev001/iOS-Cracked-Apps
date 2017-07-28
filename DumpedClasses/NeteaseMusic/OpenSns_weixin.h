//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OpenPlatform_OAuth2.h"

#import "NMHttpRequestDelegate.h"
#import "WXApiDelegate.h"

@class NMAccessToken, NMHttpRequest, NSMutableDictionary, NSString;

@interface OpenSns_weixin : OpenPlatform_OAuth2 <WXApiDelegate, NMHttpRequestDelegate>
{
    NMHttpRequest *_tokenRequest;
    NMHttpRequest *_userInfoRequest;
    _Bool _isLogin;
    _Bool _isBinding;
    _Bool _isUnBinding;
    NSMutableDictionary *_tokenInfo;
    NMAccessToken *_accessTokenObj;
}

+ (id)WechatAppKey;
+ (id)WechatAppID;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)showErrorTipAlert:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)clearAuthInfo;
- (void)OnAccessTokenRet:(id)arg1;
- (id)getAuthorizeUrl;
- (void)sendTokenToServer:(_Bool)arg1;
- (_Bool)GetUserInfo;
- (void)initializeURL;
- (void)finishBindingAuthentication:(_Bool)arg1;
- (void)finishServerAuthentication:(_Bool)arg1;
- (void)finishRequestUserInfo:(_Bool)arg1;
- (void)finishUnbindingAuthentication:(id)arg1;
- (void)finishAuthentication:(_Bool)arg1;
- (_Bool)requestUserInfo:(id)arg1 openID:(id)arg2;
- (_Bool)requestToken:(id)arg1;
- (_Bool)showLoginInController:(id)arg1;
- (_Bool)getUserInfoWithAuthInfo:(id)arg1;
- (id)unionID;
- (id)openID;
- (_Bool)showUnBindingAuthenticationInController:(id)arg1;
- (_Bool)showBindingAuthenticationInController:(id)arg1;
- (_Bool)showLoginAuthenticationInController:(id)arg1;
- (_Bool)showAuthenticationInController:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

