//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXOMTAEventProtocol.h"

@class NSString;

@interface WXOMTAEvent : NSObject <WXOMTAEventProtocol>
{
    _Bool _isRealTime;
    unsigned int _sid;
    unsigned int _ts;
    NSString *_appkey;
    unsigned long long _eventIndex;
}

@property unsigned long long eventIndex; // @synthesize eventIndex=_eventIndex;
@property _Bool isRealTime; // @synthesize isRealTime=_isRealTime;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property unsigned int ts; // @synthesize ts=_ts;
@property unsigned int sid; // @synthesize sid=_sid;
- (id)toJsonString;
- (void)encode:(id)arg1;
- (int)getType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

