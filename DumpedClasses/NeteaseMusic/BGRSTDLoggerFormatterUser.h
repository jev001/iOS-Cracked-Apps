//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DDLogFormatter.h"

@class NSString;

@interface BGRSTDLoggerFormatterUser : NSObject <DDLogFormatter>
{
    long long _calendarUnitFlags;
    NSString *_appName;
    NSString *_processId;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)formatLogMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

