//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BGRLogMessage, NSString;

@protocol DDLogFormatter <NSObject>
- (NSString *)formatLogMessage:(BGRLogMessage *)arg1;

@optional
- (void)willRemoveFromLogger:(id <NTESBugrptBGRLoggerDelegate>)arg1;
- (void)didAddToLogger:(id <NTESBugrptBGRLoggerDelegate>)arg1;
@end

