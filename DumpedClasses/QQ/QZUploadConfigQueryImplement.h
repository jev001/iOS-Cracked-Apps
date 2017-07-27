//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QZUploadConfigQueryDelegate.h"

@class NSString;

@interface QZUploadConfigQueryImplement : NSObject <QZUploadConfigQueryDelegate>
{
}

+ (long long)getISP;
+ (id)fetchWifiBSSID;
- (_Bool)updatePacketEXIF:(id)arg1;
- (_Bool)waitFileProcessing:(id)arg1;
- (long long)checkFileStatus:(id)arg1;
- (id)buildUploadRspPacket:(long long)arg1;
- (id)getTestIp;
- (_Bool)isTestEnv;
- (_Bool)shouldReadBackupIpWithClientInfo;
- (id)getDeviceInfo;
- (id)getQua;
- (long long)getCurUserId;
- (unsigned long long)getPhotoFileRetryCount;
- (long long)getNoRouteToHostTimeoutSeconds;
- (long long)getNoRouteToHostIPRetryCount;
- (_Bool)shouldNoRouteToHostAlwaysRetry;
- (unsigned long long)getTimeoutRetryCnt;
- (unsigned long long)getDataTimeOut;
- (unsigned long long)getConnectTimeOut;
- (id)getCarrierNameWWAN;
- (long long)getCarrierTypeWWAN;
- (long long)getQZDetailNetworkStatus;
- (long long)getWifiCarrierType;
- (int)getNetworkType;
- (id)getBackUpIpOtherV2;
- (id)getBackUpIpVideoV2;
- (id)getBackUpIpPicV2;
- (id)getOtherV2DomainName;
- (id)getVideoV2DomainName;
- (id)getPicV2DomainName;
- (id)getOptimumIpOtherV2;
- (id)getOptimumIpVideoV2;
- (id)getOptimumIpPicV2;
- (id)getBackUpIpReport;
- (id)getBackUpIp2;
- (id)getBackUpIp1;
- (id)getOptimumIpReport;
- (id)getOptimumIp2;
- (id)getOptimumIp1;
- (id)getUploadPorts;
- (id)getReportURL;
- (id)getPhotoURL2;
- (id)getPhotoURL1;
- (long long)uploadV2NetTimeout;
- (long long)uploadV2ConnRetryMaxCount;
- (long long)uploadV2PacketRetryMaxCount;
- (long long)uploadV2SocketTimeout;
- (long long)uploadV2ConnectTimeout;
- (long long)batchControlCount;
- (long long)multiSocketCount;
- (long long)concurrentFileCount;
- (_Bool)useSDKV2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
