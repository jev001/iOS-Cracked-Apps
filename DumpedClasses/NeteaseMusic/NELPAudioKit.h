//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NELPAudioKit : NSObject
{
    _Bool _audioSessionInitialized;
}

+ (void)setLogLevel:(int)arg1;
+ (id)sharedInstance;
- (void)handleInterruption:(id)arg1;
- (_Bool)setActive:(_Bool)arg1;
- (void)setupAudioSession;

@end

