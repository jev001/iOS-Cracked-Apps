//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YXBaseReq.h"

@class NSString;

@interface SendOAuthToYXReq : YXBaseReq
{
    NSString *_scope;
    NSString *_state;
}

@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
- (void)dealloc;
- (_Bool)isValid;
- (id)encodeToNSDict;
- (void)decodeFromNSDict:(id)arg1;
- (id)init;

@end

