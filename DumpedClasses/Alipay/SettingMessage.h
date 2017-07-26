//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class IpListSettingMessage, MiscSetting, NSString, NetWorkDetectionSetting, NetworkChannelTimeOutSetting, NetworkFlashSetting, QuickReconnectTimeoutSetting, ReconnIntervalSetting, SceneNetworkChannelHBSetting, ShortFrequencyConnectSetting;

@interface SettingMessage : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasConnectTimeoutSetting;
    _Bool _hasReconnSetting;
    _Bool _hasHbSetting;
    _Bool _hasIpListSetting;
    _Bool _hasNetworkFlash;
    _Bool _hasMisc;
    _Bool _hasNetworkDetectionSetting;
    _Bool _hasQuickReconnectConf;
    _Bool _hasShortFrequencyConnectSetting;
    _Bool _hasSettingVersion;
    int _settingVersion;
    NetworkChannelTimeOutSetting *_connectTimeoutSetting;
    ReconnIntervalSetting *_reconnSetting;
    SceneNetworkChannelHBSetting *_hbSetting;
    IpListSettingMessage *_ipListSetting;
    NetworkFlashSetting *_networkFlash;
    MiscSetting *_misc;
    NetWorkDetectionSetting *_networkDetectionSetting;
    QuickReconnectTimeoutSetting *_quickReconnectConf;
    ShortFrequencyConnectSetting *_shortFrequencyConnectSetting;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) int settingVersion; // @synthesize settingVersion=_settingVersion;
@property(retain, nonatomic) ShortFrequencyConnectSetting *shortFrequencyConnectSetting; // @synthesize shortFrequencyConnectSetting=_shortFrequencyConnectSetting;
@property(retain, nonatomic) QuickReconnectTimeoutSetting *quickReconnectConf; // @synthesize quickReconnectConf=_quickReconnectConf;
@property(retain, nonatomic) NetWorkDetectionSetting *networkDetectionSetting; // @synthesize networkDetectionSetting=_networkDetectionSetting;
@property(retain, nonatomic) MiscSetting *misc; // @synthesize misc=_misc;
@property(retain, nonatomic) NetworkFlashSetting *networkFlash; // @synthesize networkFlash=_networkFlash;
@property(retain, nonatomic) IpListSettingMessage *ipListSetting; // @synthesize ipListSetting=_ipListSetting;
@property(retain, nonatomic) SceneNetworkChannelHBSetting *hbSetting; // @synthesize hbSetting=_hbSetting;
@property(retain, nonatomic) ReconnIntervalSetting *reconnSetting; // @synthesize reconnSetting=_reconnSetting;
@property(retain, nonatomic) NetworkChannelTimeOutSetting *connectTimeoutSetting; // @synthesize connectTimeoutSetting=_connectTimeoutSetting;
@property(readonly) _Bool hasSettingVersion; // @synthesize hasSettingVersion=_hasSettingVersion;
@property(readonly) _Bool hasShortFrequencyConnectSetting; // @synthesize hasShortFrequencyConnectSetting=_hasShortFrequencyConnectSetting;
@property(readonly) _Bool hasQuickReconnectConf; // @synthesize hasQuickReconnectConf=_hasQuickReconnectConf;
@property(readonly) _Bool hasNetworkDetectionSetting; // @synthesize hasNetworkDetectionSetting=_hasNetworkDetectionSetting;
@property(readonly) _Bool hasMisc; // @synthesize hasMisc=_hasMisc;
@property(readonly) _Bool hasNetworkFlash; // @synthesize hasNetworkFlash=_hasNetworkFlash;
@property(readonly) _Bool hasIpListSetting; // @synthesize hasIpListSetting=_hasIpListSetting;
@property(readonly) _Bool hasHbSetting; // @synthesize hasHbSetting=_hasHbSetting;
@property(readonly) _Bool hasReconnSetting; // @synthesize hasReconnSetting=_hasReconnSetting;
@property(readonly) _Bool hasConnectTimeoutSetting; // @synthesize hasConnectTimeoutSetting=_hasConnectTimeoutSetting;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
