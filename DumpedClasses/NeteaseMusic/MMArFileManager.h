//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMArFileManager : NSObject
{
    NSString *_appKey;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)filePathWithFileName:(id)arg1;
- (_Bool)saveOriginProducts:(id)arg1;
- (id)readOriginProducts;
- (_Bool)deleteItemAtPath:(id)arg1;
- (_Bool)existObjectAtPath:(id)arg1;
- (_Bool)saveItem:(id)arg1 type:(unsigned long long)arg2;
- (id)readItem:(unsigned long long)arg1 userName:(id)arg2;
- (id)readItem:(unsigned long long)arg1;
- (id)init;

@end

