//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BGRLogMessage, NSObject<OS_dispatch_queue>, NSString;

@protocol NTESBugrptBGRLoggerDelegate <NSObject>
- (void)logMessage:(BGRLogMessage *)arg1;

@optional
@property(readonly, nonatomic) NSString *loggerName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
- (void)flush;
- (void)willRemoveLogger;
- (void)didAddLogger;
@end

