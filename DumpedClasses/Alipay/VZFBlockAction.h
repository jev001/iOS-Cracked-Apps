//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZFBlockWrapper.h"

@interface VZFBlockAction : VZFBlockWrapper
{
    unsigned long long _controlEvents;
}

+ (id)action:(CDUnknownBlockType)arg1;
+ (id)actionWithControlEvents:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long controlEvents; // @synthesize controlEvents=_controlEvents;
- (id)initWithControlEvents:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;

@end
