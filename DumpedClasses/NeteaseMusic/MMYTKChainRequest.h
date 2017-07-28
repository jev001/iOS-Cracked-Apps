//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMYTKRequestDelegate.h"

@class NSMutableArray, NSString;

@interface MMYTKChainRequest : NSObject <MMYTKRequestDelegate>
{
    id <MMYTKChainRequestDelegate> _delegate;
    NSMutableArray *_requestAccessories;
    NSMutableArray *_requestArray;
    NSMutableArray *_requestCallbackArray;
    unsigned long long _nextRequestIndex;
    CDUnknownBlockType _emptyCallback;
}

@property(copy, nonatomic) CDUnknownBlockType emptyCallback; // @synthesize emptyCallback=_emptyCallback;
@property(nonatomic) unsigned long long nextRequestIndex; // @synthesize nextRequestIndex=_nextRequestIndex;
@property(retain, nonatomic) NSMutableArray *requestCallbackArray; // @synthesize requestCallbackArray=_requestCallbackArray;
@property(retain, nonatomic) NSMutableArray *requestArray; // @synthesize requestArray=_requestArray;
@property(retain, nonatomic) NSMutableArray *requestAccessories; // @synthesize requestAccessories=_requestAccessories;
@property(nonatomic) __weak id <MMYTKChainRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addAccessory:(id)arg1;
- (void)clearRequest;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (_Bool)startNextRequest;
- (void)addRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)start;
- (id)init;
- (void)toggleAccessoriesDidStopCallBack;
- (void)toggleAccessoriesWillStopCallBack;
- (void)toggleAccessoriesWillStartCallBack;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

