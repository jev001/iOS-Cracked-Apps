//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RCTDevMenu : NSObject
{
    _Bool _liveReloadEnabled;
    _Bool _hotLoadingEnabled;
}

@property(nonatomic) _Bool hotLoadingEnabled; // @synthesize hotLoadingEnabled=_hotLoadingEnabled;
@property(nonatomic) _Bool liveReloadEnabled; // @synthesize liveReloadEnabled=_liveReloadEnabled;
- (void)addItem:(id)arg1;
- (void)addItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)reload;
- (void)show;

@end

