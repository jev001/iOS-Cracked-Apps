//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface ZXDataMatrixECBlocks : NSObject
{
    int _ecCodewords;
    NSArray *_ecBlocks;
}

@property(readonly, nonatomic) int ecCodewords; // @synthesize ecCodewords=_ecCodewords;
@property(readonly, nonatomic) NSArray *ecBlocks; // @synthesize ecBlocks=_ecBlocks;
- (void).cxx_destruct;
- (id)initWithCodewords:(int)arg1 ecBlocks1:(id)arg2 ecBlocks2:(id)arg3;
- (id)initWithCodewords:(int)arg1 ecBlocks:(id)arg2;

@end

