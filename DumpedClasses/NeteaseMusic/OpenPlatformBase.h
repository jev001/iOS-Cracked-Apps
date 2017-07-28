//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"

@class MyUrlConnection, NMAccessTokenRequest, NMSsoBindingRequest, NSMutableDictionary, NSMutableURLRequest, NSString, PlatformAccountInfo, PlatformAppInfo;

@interface OpenPlatformBase : NSObject <NMHttpRequestDelegate>
{
    int authStatus;
    NSString *requestUrl;
    NSString *content;
    MyUrlConnection *urlConnection;
    NSMutableURLRequest *urlRequest;
    NMAccessTokenRequest *accessTokenRequest;
    NMSsoBindingRequest *ssoBindingRequest;
    id <OpenPlatformObserver> _observer;
    PlatformAccountInfo *_accountInfo;
    PlatformAppInfo *_appInfo;
    NSMutableDictionary *_platformURLDict;
    long long _platformType;
    id <OpenPlatformDelegate> _delegate;
    id _thirdPlatHolder;
}

+ (_Bool)isPlatform:(id)arg1 supportsLinkCardFor:(unsigned long long)arg2;
+ (void)clearCookie;
@property(nonatomic) __weak id thirdPlatHolder; // @synthesize thirdPlatHolder=_thirdPlatHolder;
@property(nonatomic) __weak id <OpenPlatformDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
@property(retain, nonatomic) NSMutableDictionary *platformURLDict; // @synthesize platformURLDict=_platformURLDict;
@property(retain, nonatomic) PlatformAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) PlatformAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(nonatomic) __weak id <OpenPlatformObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)sendTextMessage:(id)arg1 withImage:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)packagePostPicRequest:(id)arg1 jpegUrl:(id)arg2 content:(id)arg3;
- (void)packagePostPicRequest:(id)arg1 jpeg:(id)arg2 content:(id)arg3;
- (id)packagePostBodyData:(id)arg1;
- (id)getAuthorizeUrl;
- (id)getAuthorizedUrlParam;
- (void)getFollowers:(id)arg1 limit:(long long)arg2 offset:(long long)arg3;
- (void)getFriends:(id)arg1 limit:(long long)arg2 offset:(long long)arg3;
- (void)PostContent:(id)arg1 Title:(id)arg2 TitleUrl:(id)arg3 picUrl:(id)arg4;
- (void)isFollowExistWithUid:(id)arg1;
- (void)CreateFollowWithScreenName:(id)arg1;
- (void)GetContentListSince:(id)arg1 count:(int)arg2;
- (void)GetContentListBefore:(id)arg1 count:(int)arg2;
- (void)GetContentList;
- (void)PostContent:(id)arg1 TitleDesc:(id)arg2;
- (void)PostContent:(id)arg1 TitleDesc:(id)arg2 fileData:(id)arg3 sourceUrl:(id)arg4;
- (id)onGetFollowerRet:(id)arg1;
- (id)onGetFriendRet:(id)arg1;
- (_Bool)OnUserInfoRet:(id)arg1;
- (_Bool)OnIsFollowExistRet:(id)arg1;
- (_Bool)OnCreateFollowRet:(id)arg1;
- (_Bool)OnUploadRet:(id)arg1;
- (_Bool)OnListRet:(id)arg1;
- (_Bool)OnCustomProc:(id)arg1;
- (void)sendTokenToServer:(id)arg1 token:(id)arg2 isSSO:(_Bool)arg3;
- (void)setAccessToken:(id)arg1;
- (void)clearAuthInfo;
- (_Bool)GetUserInfo;
- (void)postMessageForRegisterOrBinding;
- (void)PostContentWithMultiPics:(id)arg1 multiPicPaths:(id)arg2;
- (void)PostContent:(id)arg1;
- (void)PostContentWithPic:(id)arg1 UIImage:(id)arg2;
- (void)PostContentWithPic:(id)arg1 PicFilePath:(id)arg2;
- (void)PostContentWithPic:(id)arg1 PicUri:(id)arg2;
- (void)PostContentWithPic:(id)arg1 title:(id)arg2 PicUri:(id)arg3;
- (void)PostContentWithPic:(id)arg1 title:(id)arg2 PicUri:(id)arg3 url:(id)arg4;
- (void)PostContent:(id)arg1 WithPicData:(id)arg2;
- (void)OnAuthoriztionRet:(id)arg1;
- (void)authLogin;
- (void)checkResponse:(id)arg1 statusCode:(long long)arg2 errCode:(long long *)arg3 errDes:(id)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)handleReponseWithReponseString:(id)arg1 statusCode:(long long)arg2 errorCode:(long long)arg3 connectionFlag:(int)arg4 connection:(id)arg5;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)OnPostPicContentRet:(id)arg1;
- (_Bool)OnPostContentRet:(id)arg1;
- (void)updateAccessToken;
- (id)onSsoTokenRet:(id)arg1 isBind:(_Bool)arg2;
- (_Bool)onRefreshTokenRet:(id)arg1;
- (void)OnAccessTokenRet:(id)arg1;
- (void)ReleaseConnectionAndRequest;
- (_Bool)picShare;
- (_Bool)isCallbackUrl:(id)arg1;
- (int)maxPostLength;
- (void)notifyObserver:(unsigned long long)arg1 Result:(long long)arg2 Des:(id)arg3;
- (_Bool)isAvailable;
- (_Bool)authorized;
- (void)dealloc;
- (void)initialize:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

