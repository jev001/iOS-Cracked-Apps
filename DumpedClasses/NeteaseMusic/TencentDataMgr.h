//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TencentDataMgr : NSObject
{
    NSMutableDictionary *_dataDic;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *dataDic; // @synthesize dataDic=_dataDic;
- (void).cxx_destruct;
- (id)addObjectInPastboard:(id)arg1;
- (unsigned long long)objSize:(id)arg1;
- (_Bool)removeAllObject;
- (_Bool)removeObjectFromDataMgr:(id)arg1;
- (_Bool)removeKeyFromDataMgr:(id)arg1;
- (id)objByKey:(id)arg1;
- (id)addObjectInDataMgr:(id)arg1;
- (id)init;

@end

