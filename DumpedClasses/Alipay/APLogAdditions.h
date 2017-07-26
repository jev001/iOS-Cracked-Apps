//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APLogAdditions : NSObject
{
    NSString *_deviceModel;
    NSString *_language;
    NSString *_userID;
    NSString *_clientVersion;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
- (void).cxx_destruct;
- (id)getBrandNewUUID;
- (void)logToFile:(id)arg1;
- (id)defaultUploadLogTypes;
@property(retain, nonatomic) NSString *platformID;
@property(retain, nonatomic) NSString *configServerURL;
@property(retain, nonatomic) NSString *logServerURL;
@property(readonly, nonatomic) NSString *clientID;
@property(readonly, nonatomic) NSString *UTDID;
@property(readonly, nonatomic) NSString *UUID;
- (void)logToFile:(id)arg1;
- (id)defaultUploadLogTypes;

@end
