//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NMEvent, NSString;

@interface NMPraiseRequest : NMBaseRequest
{
    NSString *_threadId;
    NMEvent *_event;
    CDUnknownBlockType _extraCompleteBlock;
    CDUnknownBlockType _realCompleteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType realCompleteBlock; // @synthesize realCompleteBlock=_realCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType extraCompleteBlock; // @synthesize extraCompleteBlock=_extraCompleteBlock;
- (void).cxx_destruct;
- (void)combineCompleteBlock;
- (void)setCompleteBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NMEvent *event;
@property(readonly, nonatomic) NSString *threadId;
- (id)initWithEvent:(id)arg1;
- (id)initWithThreadId:(id)arg1;

@end

