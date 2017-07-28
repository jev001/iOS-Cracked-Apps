//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMRewardResource : NSObject
{
    long long _type;
    NSString *_resourceId;
    NSString *_ownerId;
    NSString *_radioId;
}

@property(readonly, copy, nonatomic) NSString *radioId; // @synthesize radioId=_radioId;
@property(readonly, copy, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(readonly, copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithProgramId:(id)arg1 ownerId:(id)arg2 radioId:(id)arg3;
- (id)initWithResourceType:(long long)arg1 resourceId:(id)arg2 ownerId:(id)arg3;

@end

