//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AlibcApplication, NSArray, NSString;

@interface AlibcBasePlugin : NSObject
{
    _Bool _isBreak;
    long long _prior;
    unsigned long long _module;
    NSString *_pluginKey;
    NSArray *_routerRules;
}

+ (id)initPluginWithKey:(id)arg1 routeRules:(id)arg2;
+ (id)initPluginWithKey:(id)arg1 routeRule:(id)arg2;
@property(retain, nonatomic) NSArray *routerRules; // @synthesize routerRules=_routerRules;
@property(copy, nonatomic) NSString *pluginKey; // @synthesize pluginKey=_pluginKey;
@property(nonatomic) unsigned long long module; // @synthesize module=_module;
@property(nonatomic) long long prior; // @synthesize prior=_prior;
@property(nonatomic) _Bool isBreak; // @synthesize isBreak=_isBreak;
- (void).cxx_destruct;
- (void)serviceFinishJumpBackWithUrl:(id)arg1 visa:(id)arg2;
@property(copy, nonatomic) NSString *actionRule; // @dynamic actionRule;
@property(retain, nonatomic) AlibcApplication *pluginParam; // @dynamic pluginParam;

@end
