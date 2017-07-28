//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString, TFEUploadRemoteCall;

@interface TFEUploadPolicy : NSObject
{
    _Bool _insertOnly;
    NSString *_space;
    TFEUploadRemoteCall *_remoteCall;
    NSString *_mimeLimit;
    NSString *_fileName;
    NSString *_dir;
    NSDictionary *_customPolicies;
    long long _sizeLimit;
    NSDate *_expiration;
}

+ (id)defaultPolicy;
+ (id)policyWithNamespace:(id)arg1 remoteCall:(id)arg2 mimeLimit:(id)arg3;
+ (id)policyWithANamespace:(id)arg1 fileName:(id)arg2 dir:(id)arg3;
+ (id)policyWithNamespace:(id)arg1;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(nonatomic) long long sizeLimit; // @synthesize sizeLimit=_sizeLimit;
@property(retain, nonatomic) NSDictionary *customPolicies; // @synthesize customPolicies=_customPolicies;
@property(nonatomic) _Bool insertOnly; // @synthesize insertOnly=_insertOnly;
@property(retain, nonatomic) NSString *dir; // @synthesize dir=_dir;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *mimeLimit; // @synthesize mimeLimit=_mimeLimit;
@property(retain, nonatomic) TFEUploadRemoteCall *remoteCall; // @synthesize remoteCall=_remoteCall;
@property(retain, nonatomic) NSString *space; // @synthesize space=_space;
- (void).cxx_destruct;
- (id)toDic;
- (id)initWithANamespace:(id)arg1 fileName:(id)arg2 dir:(id)arg3;
- (id)initWithNamespace:(id)arg1 remoteCall:(id)arg2 mimeLimit:(id)arg3;

@end
