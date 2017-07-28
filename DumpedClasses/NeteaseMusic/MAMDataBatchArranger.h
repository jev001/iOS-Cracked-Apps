//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface MAMDataBatchArranger : NSObject
{
    _Bool _isBatching;
    int _batchSize;
    int _batchMinInterval;
    int _batchMaxInterval;
    int _currentIndex;
    int _type;
    NSMutableArray *_indexSet;
    NSMutableArray *_batchArray;
    CDUnknownBlockType _batchResultHandler;
    NSArray *_lastBatchResultIndexSet;
}

+ (id)arrangerWithType:(int)arg1 batchResultHandler:(CDUnknownBlockType)arg2;
@property(retain) NSArray *lastBatchResultIndexSet; // @synthesize lastBatchResultIndexSet=_lastBatchResultIndexSet;
@property(copy, nonatomic) CDUnknownBlockType batchResultHandler; // @synthesize batchResultHandler=_batchResultHandler;
@property(retain, nonatomic) NSMutableArray *batchArray; // @synthesize batchArray=_batchArray;
@property(retain, nonatomic) NSMutableArray *indexSet; // @synthesize indexSet=_indexSet;
@property(nonatomic) _Bool isBatching; // @synthesize isBatching=_isBatching;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) int batchMaxInterval; // @synthesize batchMaxInterval=_batchMaxInterval;
@property(nonatomic) int batchMinInterval; // @synthesize batchMinInterval=_batchMinInterval;
@property(nonatomic) int batchSize; // @synthesize batchSize=_batchSize;
- (void).cxx_destruct;
- (void)resetLastBatchResultIndexSet;
- (void)resetIndex;
- (void)stableBatchEnd;
- (void)batchMore;
- (void)delayCheck;
- (void)scheduleType:(int)arg1 pickID:(int)arg2 data:(id)arg3;
@property(readonly, nonatomic) _Bool isAllowNextPick;
- (id)init;

@end

