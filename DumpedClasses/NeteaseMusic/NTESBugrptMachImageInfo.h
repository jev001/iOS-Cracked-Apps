//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NTESBugrptMachImageInfo : NSObject
{
    int _index;
    unsigned long long _base;
    unsigned long long _size;
    NSString *_name;
    NSString *_sname;
    NSString *_uuid;
    NSString *_cpu;
}

@property(retain, nonatomic) NSString *cpu; // @synthesize cpu=_cpu;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *sname; // @synthesize sname=_sname;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long base; // @synthesize base=_base;
@property(nonatomic) int index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)description;

@end

