//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RTMethod.h"

@class NSString;

@interface _RTComponentsMethod : RTMethod
{
    SEL _sel;
    CDUnknownFunctionPointerType _imp;
    NSString *_sig;
}

- (void)setImplementation:(CDUnknownFunctionPointerType)arg1;
- (id)signature;
- (CDUnknownFunctionPointerType)implementation;
- (SEL)selector;
- (void)dealloc;
- (id)initWithSelector:(SEL)arg1 implementation:(CDUnknownFunctionPointerType)arg2 signature:(id)arg3;

@end

