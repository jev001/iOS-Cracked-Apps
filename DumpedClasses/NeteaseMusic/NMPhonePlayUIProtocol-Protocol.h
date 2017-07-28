//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMPlayUIProtocol.h"

@class NMLyricViewController, NMSong;

@protocol NMPhonePlayUIProtocol <NMPlayUIProtocol>
+ (_Bool)hasShown;
- (_Bool)isUIPlaying;
- (void)commentChanged:(long long)arg1 forSong:(NMSong *)arg2;
- (void)refreshDownloadBar:(_Bool)arg1;
- (void)lyricTimerToggled;
- (void)progressTimerToggled;
- (void)cleanUpWhenLogout;
- (NMLyricViewController *)lyricController;
@end

