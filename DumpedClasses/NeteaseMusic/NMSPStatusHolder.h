//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"

@class NMProxyAddress, NMSPActiveDetectRequest, NMSPAddressRequest, NMSPStatusRequest, NSArray, NSString;

@interface NMSPStatusHolder : NSObject <NMHttpRequestDelegate>
{
    NMSPStatusRequest *_statusRequest;
    NMSPAddressRequest *_addressRequest;
    NMSPActiveDetectRequest *_activeRequest;
    unsigned long long _status;
    _Bool _needPostNotification;
    long long _retryCount;
    NSString *_telecomProxyHttpHost;
    long long _telecomProxyHttpPort;
    NSArray *_unicomProxyArray;
    NMProxyAddress *_defaultUnicomProxyAddress;
    NMProxyAddress *_currentUnicomProxyAddress;
    NSString *_telecomSPKey;
    NSString *_unicomAppKey;
    NSString *_defaultUnicomAppKey;
    NSString *_aes128Key;
    long long _activeStatus;
    long long _expireTime;
    NSString *_activateUrl;
    _Bool _didTriggerAlertTurnOffTelecomProxy;
    _Bool _didAlertTurnOffTelecomProxy;
    _Bool _needActivation;
    long long _spType;
    NSString *_phoneNumber;
    NSString *_expireNotice;
}

+ (id)unicomProxyDictionary;
+ (void)removeSpServiceExpireObserver:(id)arg1;
+ (void)addSpServiceExpireObserver:(id)arg1 selector:(SEL)arg2;
+ (void)removeSpServiceAvailableButNotActiveObserver:(id)arg1;
+ (void)addSpServiceAvailableButNotActiveObserver:(id)arg1 selector:(SEL)arg2;
+ (void)removeStatusChangedObserver:(id)arg1;
+ (void)addStatusChangedObserver:(id)arg1 selector:(SEL)arg2;
+ (id)spStatusHolder;
@property(readonly, retain, nonatomic) NSString *unicomAppKey; // @synthesize unicomAppKey=_unicomAppKey;
@property(nonatomic) _Bool needActivation; // @synthesize needActivation=_needActivation;
@property(readonly, nonatomic) NSString *expireNotice; // @synthesize expireNotice=_expireNotice;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) long long spType; // @synthesize spType=_spType;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)_addBILogForSource:(id)arg1 isClick:(_Bool)arg2 isFreeFlowClick:(_Bool)arg3;
- (void)addBIClickLogForSource:(id)arg1 isFreeFlowClick:(_Bool)arg2;
- (void)addBIShowNoticeLogForSource:(id)arg1;
- (id)_buildTelecomArguments:(id)arg1;
- (id)_buildTelecomQueryString:(id)arg1;
- (_Bool)isTelecomRequest:(id)arg1;
- (id)parseTelecomRequestSourceUrl:(id)arg1;
- (id)buildTelecomRequestUrl:(id)arg1;
@property(readonly, nonatomic) NSString *telecomHost;
@property(readonly, nonatomic) NSString *telecomUrl;
@property(readonly, nonatomic) long long unicomHttpPort;
@property(readonly, nonatomic) NSString *unicomHttpHost;
- (void)userChangedAndRefreshSPActiceCheck:(id)arg1;
- (void)syncSPAddressAndCheckActiveStatus;
- (void)parseEncryptedUnicomAppKey:(id)arg1;
- (_Bool)parseEncryptedTelecomAddress:(id)arg1;
- (void)triggerTurnOffTelecomProxy;
- (void)switchUnicomProxyAddress;
- (_Bool)parseEncryptedUnicomAddress:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
@property(readonly, nonatomic) NSString *activateUrl;
- (_Bool)capableForNotifyOpenSPAfterLaunch;
@property(readonly, nonatomic) _Bool isPotentialSPUserInWWAN;
@property(readonly, nonatomic) _Bool isPotentialSPUser;
@property(readonly, nonatomic) _Bool shouldUseSPProxy;
@property(readonly, nonatomic) _Bool telecomEnable;
@property(readonly, nonatomic) _Bool unicomEnable;
@property(readonly, nonatomic) _Bool enabled; // @dynamic enabled;
@property(readonly, nonatomic) _Bool is3BigCarrier;
@property(readonly, nonatomic) NSString *carrierName;
@property(readonly, nonatomic) _Bool isUnicomOrTelecom;
@property(readonly, nonatomic) _Bool isMobile;
@property(readonly, nonatomic) _Bool isTelecom;
@property(readonly, nonatomic) _Bool isUnicom; // @dynamic isUnicom;
- (void)postNotificationIfNeeded;
- (void)setNeedPostNotification;
- (void)clearStatus;
- (void)refreshStatusWithoutNotify;
- (void)refreshStatus;
- (void)checkSpServiceActiveInteranl;
- (void)refreshStatusInternal;
- (void)logCarrierCodeChanged;
- (void)carrierChanged;
- (void)reachAbilityChanged;
- (void)updateSPStatus:(unsigned long long)arg1 userManual:(_Bool)arg2;
- (void)fillStatusJson:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

