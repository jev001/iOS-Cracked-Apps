//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface NMSongEquazlierGetter : NSObject
{
    NSMutableArray *_requestArray;
}

+ (void)cancel;
+ (void)requestEqualizerSongs:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)requestEqualizerSongs:(id)arg1 timeoutSeconds:(long long)arg2 complete:(CDUnknownBlockType)arg3;
+ (id)_sharedGetter;
@property(readonly, nonatomic) NSMutableArray *requestArray; // @synthesize requestArray=_requestArray;
- (void).cxx_destruct;
- (void)_requestEqualizerSongs:(id)arg1 timeoutSeconds:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)_complete:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_cancel;
- (void)dealloc;
- (id)init;

@end

