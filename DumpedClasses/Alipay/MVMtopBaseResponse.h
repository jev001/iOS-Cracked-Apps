//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MVMtopBaseResponse : NSObject
{
    id _returnModel;
    NSArray *_returnArray;
    unsigned long long _returnCount;
}

@property(nonatomic) unsigned long long returnCount; // @synthesize returnCount=_returnCount;
@property(retain, nonatomic) NSArray *returnArray; // @synthesize returnArray=_returnArray;
@property(retain, nonatomic) id returnModel; // @synthesize returnModel=_returnModel;
- (void).cxx_destruct;

@end
