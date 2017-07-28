//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMAddSongToListManagerDelegate.h"
#import "NMLyricMatcherDelegate.h"

@class NMLyricMatcher, NMMyPlaylistSqliteManager, NSMutableArray, NSString;

@interface NMMixedSongAddToPlaylistManager : NSObject <NMLyricMatcherDelegate, NMAddSongToListManagerDelegate>
{
    NSMutableArray *_sourceArray;
    NSMutableArray *_matchedSongArray;
    NSMutableArray *_jobArray;
    NSString *_targetPlaylistId;
    NMLyricMatcher *_lyricMatcher;
    NMMyPlaylistSqliteManager *_playlistRequest;
    _Bool _isWorking;
    id _delegate;
    unsigned long long _state;
    long long _allCount;
}

+ (id)defaultManager;
@property(nonatomic) long long allCount; // @synthesize allCount=_allCount;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isWorking; // @synthesize isWorking=_isWorking;
- (void).cxx_destruct;
- (void)addSongToListDidSuccess:(id)arg1 playlist:(id)arg2 hasPrivateCloudAdded:(_Bool)arg3;
- (void)addSongToListDidFail:(id)arg1;
- (void)lyricMatcher:(id)arg1 lyricMatchFinished:(id)arg2 proceedExtractFP:(_Bool)arg3;
- (void)reset;
- (id)findNextSong;
- (void)executeMatchJob;
- (void)sendProgressNotification;
- (void)addMixedSongs:(id)arg1 targetPlaylistId:(id)arg2;
@property(readonly, nonatomic) long long finishCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

