//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMDjRadioSubscribeRequest : NMBaseRequest
{
    _Bool _isSubscribe;
    NSString *_radioId;
}

@property(retain, nonatomic) NSString *radioId; // @synthesize radioId=_radioId;
@property(nonatomic) _Bool isSubscribe; // @synthesize isSubscribe=_isSubscribe;
- (void).cxx_destruct;
- (void)addBILogForPage:(id)arg1;
- (id)initWithRadioId:(id)arg1 isSubscribe:(_Bool)arg2;

@end

