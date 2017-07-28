//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTESBugrptBGRLog : NSObject
{
}

+ (_Bool)initByUser;
+ (void)printLog:(id)arg1;
+ (void)queueLogMessage:(id)arg1 asynchronously:(_Bool)arg2;
+ (void)log:(_Bool)arg1 message:(id)arg2 printLevel:(unsigned long long)arg3 logLevel:(unsigned long long)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(unsigned long long)arg7 tag:(id)arg8 byUser:(_Bool)arg9;
+ (void)log:(_Bool)arg1 printLevel:(unsigned long long)arg2 logLevel:(unsigned long long)arg3 file:(const char *)arg4 function:(const char *)arg5 line:(unsigned long long)arg6 tag:(id)arg7 format:(id)arg8;
+ (void)log:(_Bool)arg1 logLevel:(unsigned long long)arg2 format:(id)arg3;
+ (void)log:(id)arg1 logLevel:(unsigned long long)arg2 file:(const char *)arg3 function:(const char *)arg4 line:(long long)arg5 tag:(id)arg6 byUser:(_Bool)arg7;
+ (void)cleanAllLoggers;
+ (void)addLoggerToQueue:(id)arg1;
+ (void)removeLoggerFromQueue:(id)arg1;
+ (id)getAllLogger;
+ (id)allLoggers;
+ (void)addLogger:(id)arg1;
+ (void)removeLogger:(id)arg1;
+ (void)removeAllLoggers;
+ (id)loggingQueue;
+ (void)initialize;

@end

