//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSNumber, NSString;

@interface EMKNewUserHongBao : NVMModel
{
    NSString *_name;
    NSNumber *_amount;
    NSString *_useCondition;
    NSString *_expireDate;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *expireDate; // @synthesize expireDate=_expireDate;
@property(copy, nonatomic) NSString *useCondition; // @synthesize useCondition=_useCondition;
@property(copy, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
