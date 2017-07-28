//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NELPDeviceModel : NSObject
{
    NSString *_platform;
    NSString *_name;
    long long _rank;
}

+ (id)currentModel;
+ (id)currentModelName;
+ (id)modelWithName:(id)arg1;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (id)initWithPlatform:(id)arg1 withName:(id)arg2 withRank:(long long)arg3;

@end

