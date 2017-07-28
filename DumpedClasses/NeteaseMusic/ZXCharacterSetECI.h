//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ZXCharacterSetECI : NSObject
{
    int _value;
    unsigned long long _encoding;
}

+ (id)characterSetECIByEncoding:(unsigned long long)arg1;
+ (id)characterSetECIByValue:(int)arg1;
+ (void)addCharacterSet:(int)arg1 encoding:(unsigned long long)arg2;
+ (void)initialize;
@property(readonly, nonatomic) int value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
- (id)initWithValue:(int)arg1 encoding:(unsigned long long)arg2;

@end

