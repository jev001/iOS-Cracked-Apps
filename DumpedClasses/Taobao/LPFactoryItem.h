//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LPFactoryItem : NSObject
{
    int _priority;
    id <LPFactoryProtocol> _factory;
}

@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) id <LPFactoryProtocol> factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (id)initWithFactory:(id)arg1 priority:(int)arg2;

@end
