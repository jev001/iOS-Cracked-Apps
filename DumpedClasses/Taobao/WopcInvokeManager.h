//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, UIViewController, WopcAPIuserConfirm, WopcAuthManager, WopcBasicApiService;

@interface WopcInvokeManager : NSObject
{
    WopcAuthManager *_authManager;
    CDUnknownBlockType _completeBlock;
    UIView *_view;
    UIViewController *_viewController;
    WopcBasicApiService *_apiService;
    id <WopcInvokeDelegate> _delegate;
    WopcAPIuserConfirm *_userConfirm;
}

@property(retain, nonatomic) WopcAPIuserConfirm *userConfirm; // @synthesize userConfirm=_userConfirm;
@property(nonatomic) __weak id <WopcInvokeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WopcBasicApiService *apiService; // @synthesize apiService=_apiService;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) WopcAuthManager *authManager; // @synthesize authManager=_authManager;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)checkDomain:(id)arg1;
- (void)userTrackWithInvokeBasicParam:(id)arg1 methodName:(id)arg2;
- (void)callServiceWithTidaApi:(id)arg1 paramModel:(id)arg2;
- (void)checkAuthWithParam:(id)arg1;
- (id)transferAPItoNewWithTidaApi:(id)arg1 params:(id)arg2;
- (_Bool)checkIsAPIneedTransfer:(id)arg1 params:(id)arg2;
- (void)devideGroupApiToSingleWithParams:(id)arg1;
- (void)executeWithParam:(id)arg1;
- (id)checkParamsModel:(id)arg1;
- (void)invokeWithParam:(id)arg1 view:(id)arg2 viewController:(id)arg3 delgate:(id)arg4;
- (void)invokeWithParam:(id)arg1 view:(id)arg2 viewController:(id)arg3 complete:(CDUnknownBlockType)arg4;

@end
