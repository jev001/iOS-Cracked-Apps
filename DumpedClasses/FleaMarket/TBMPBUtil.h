//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBMPBUtil : NSObject
{
}

+ (_Bool)bundleLoadDynamicLibWithPath:(id)arg1;
+ (_Bool)loadTBMediaPlayerFramework;
+ (_Bool)loadFramework;
+ (long long)deviceScreenSizeInInches;
+ (CDStruct_4bcfbbae)deviceVersion;
+ (id)rawSystemInfoString;
+ (id)pointNameForAlarmDataType:(int)arg1;
+ (id)pointNameForPerformanceDataType:(int)arg1;
+ (id)moduleNameForMonitorAndLogWithBusinessID:(id)arg1;
+ (double)timeStamp;
+ (id)orangeConfig;
+ (void)logInfo:(id)arg1 withLogLevel:(long long)arg2 forBusiness:(id)arg3;
+ (void)commitAlarmData:(id)arg1 forStatus:(int)arg2 forType:(int)arg3 forBusiness:(id)arg4;
+ (void)commitPerformanceData:(id)arg1 forType:(int)arg2 forBusiness:(id)arg3;

@end
