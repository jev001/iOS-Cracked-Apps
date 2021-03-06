//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXRDMARManagerProtocol.h"

@class NSMutableArray, NSString, TBARMarkerRecognitionManager;

@interface WXRDMARManager : NSObject <WXRDMARManagerProtocol>
{
    struct _opaque_pthread_mutex_t lock;
    _Bool _markerRecognitionRunning;
    TBARMarkerRecognitionManager *_markerRecognitionManager;
    unsigned long long _arType;
    NSMutableArray *_markers;
}

@property(nonatomic) _Bool markerRecognitionRunning; // @synthesize markerRecognitionRunning=_markerRecognitionRunning;
@property(retain, nonatomic) NSMutableArray *markers; // @synthesize markers=_markers;
@property(nonatomic) unsigned long long arType; // @synthesize arType=_arType;
@property(retain, nonatomic) TBARMarkerRecognitionManager *markerRecognitionManager; // @synthesize markerRecognitionManager=_markerRecognitionManager;
- (void).cxx_destruct;
- (void)inputVideo:(char **)arg1 width:(int)arg2 height:(int)arg3;
- (void)stopMarkerTracking;
- (void)destory;
- (void)internalAddMarkers;
- (void)removeMarkers:(id)arg1;
- (void)addMarkers:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

