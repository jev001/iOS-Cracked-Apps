//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTESBugrptWCSessionManager : NSObject
{
}

+ (id)sharedInstance;
- (void)saveAndUpload:(id)arg1;
- (_Bool)saveExceptionData:(id)arg1;
- (void)Bugrpt_session:(id)arg1 didReceiveApplicationContext:(id)arg2;
- (void)Bugrpt_session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (int)updateApplicationContext:(id)arg1 error:(id *)arg2;
- (void)setTarget:(id)arg1;

@end

