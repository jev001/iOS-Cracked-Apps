//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol NMRefList <NSObject>
- (id)goPrevious;
- (id)getPrevious;
- (id)goNext;
- (id)getNext;
- (id)goTo:(id)arg1;
- (NSArray *)refs;
- (id)current;
- (id)removeRefs:(NSArray *)arg1;
- (NSArray *)addRefAfterCurrentIndex:(NSArray *)arg1;
- (NSArray *)addRef:(NSArray *)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithRefs:(NSArray *)arg1 firstRef:(id)arg2 callBack:(NSString * (^)(id))arg3;
@end

