//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABRefInitialization.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSString;

@interface ABMultiValue : NSObject <ABRefInitialization, NSCopying, NSMutableCopying>
{
    void *_ref;
}

@property(readonly, nonatomic, getter=getMultiValueRef) void *multiValueRef; // @synthesize multiValueRef=_ref;
- (unsigned long long)indexOfValue:(id)arg1;
- (int)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForIdentifier:(int)arg1;
- (id)localizedLabelAtIndex:(unsigned long long)arg1;
- (id)labelAtIndex:(unsigned long long)arg1;
- (id)allValues;
- (id)valueAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned int propertyType;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithABRef:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

