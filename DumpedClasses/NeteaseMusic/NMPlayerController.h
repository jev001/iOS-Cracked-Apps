//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMPlayerDeleagate.h"

@class NMEffector, NMPlayer, NMSong, NSObject<NMPlayUIProtocol>, NSString;

@interface NMPlayerController : NSObject <NMPlayerDeleagate>
{
    NSObject<NMPlayUIProtocol> *_playUIController;
    _Bool _errorAlertShown;
    _Bool _feeAlertShown;
    _Bool _downloadOnlyAlertShown;
    unsigned long long _playFailRetryCount;
    long long _errorStrategy;
    NMPlayer *_player;
    NMPlayer *_nextPlayer;
    long long _currentSongCheckResult;
    NMSong *_currentSong;
    NMEffector *_effector;
    _Bool _active;
    double _playRate;
}

+ (id)playModeNameForMode:(long long)arg1;
@property(nonatomic) unsigned long long playFailRetryCount; // @synthesize playFailRetryCount=_playFailRetryCount;
@property(nonatomic) _Bool downloadOnlyAlertShown; // @synthesize downloadOnlyAlertShown=_downloadOnlyAlertShown;
@property(nonatomic) _Bool feeAlertShown; // @synthesize feeAlertShown=_feeAlertShown;
@property(nonatomic) _Bool errorAlertShown; // @synthesize errorAlertShown=_errorAlertShown;
@property(retain, nonatomic) NMEffector *effector; // @synthesize effector=_effector;
@property(nonatomic) long long errorStrategy; // @synthesize errorStrategy=_errorStrategy;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NMPlayer *nextPlayer; // @synthesize nextPlayer=_nextPlayer;
@property(readonly, nonatomic) NMPlayer *player; // @synthesize player=_player;
@property(nonatomic) long long currentSongCheckResult; // @synthesize currentSongCheckResult=_currentSongCheckResult;
@property(retain, nonatomic) NMSong *currentSong; // @synthesize currentSong=_currentSong;
@property(nonatomic) __weak NSObject<NMPlayUIProtocol> *playUIController; // @synthesize playUIController=_playUIController;
- (void).cxx_destruct;
- (void)alertWANN;
- (void)alertNotValid;
- (void)alertCopyrightRestricted;
- (void)_logError;
- (void)_notifyDownloadOnly:(id)arg1;
- (void)_notifyFee:(id)arg1;
- (void)_notifyErrorTitle:(id)arg1 error:(id)arg2;
- (void)_notifyError:(id)arg1;
- (void)handleCurrentSongError;
- (void)clearCurrentSongUrlInfo;
- (void)clearUrlInfo;
- (void)seekAndAdjustUI:(id)arg1;
- (void)handleCurrentSongFinished;
- (void)clean;
- (void)setupWithContent:(id)arg1 complete:(CDUnknownBlockType)arg2;
@property(nonatomic) double playRate; // @synthesize playRate=_playRate;
- (double)playRate:(id)arg1;
- (_Bool)shouldPlay:(id)arg1;
- (void)playCurrentSong;
- (void)loadCurrentSong:(_Bool)arg1;
- (void)_reachAbilityChanged:(id)arg1;
- (void)_wannStateChanged:(id)arg1;
@property(readonly, nonatomic) _Bool isPlayingState;
@property(readonly, nonatomic) _Bool isWaitingState;
- (void)dealloc;
- (id)initWithPlayUI:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

