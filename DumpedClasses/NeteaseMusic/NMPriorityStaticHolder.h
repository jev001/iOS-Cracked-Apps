//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface NMPriorityStaticHolder : NSObject
{
    NSArray *_timeoutSettings;
    long long _maxPriority;
    long long _minPriority;
    long long _minBackupPriority;
    unsigned long long _oldestAge;
    unsigned long long _defaultTimeoutIndex;
}

+ (id)defaultHolder;
@property(readonly, nonatomic) unsigned long long defaultTimeoutIndex; // @synthesize defaultTimeoutIndex=_defaultTimeoutIndex;
@property(readonly, nonatomic) unsigned long long oldestAge; // @synthesize oldestAge=_oldestAge;
@property(readonly, nonatomic) long long minBackupPriority; // @synthesize minBackupPriority=_minBackupPriority;
@property(readonly, nonatomic) long long minPriority; // @synthesize minPriority=_minPriority;
@property(readonly, nonatomic) long long maxPriority; // @synthesize maxPriority=_maxPriority;
@property(readonly, nonatomic) NSArray *timeoutSettings; // @synthesize timeoutSettings=_timeoutSettings;
- (void).cxx_destruct;
- (id)init;

@end

