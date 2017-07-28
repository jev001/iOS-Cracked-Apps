//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"
#import "NMPlayListGetManagerDelegate.h"

@class NMDjRadioProgramRequest, NMGetBatchRequest, NMMyAlbumRequest, NMMyDjRadioRequest, NMMyPlaylistSqliteManager, NMPlaylist, NMPlaylistDetailRequest, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface NMCarPlayCacheHandler : NSObject <NMHttpRequestDelegate, NMPlayListGetManagerDelegate>
{
    _Bool _isFirstRequestMyPlaylist;
    _Bool _hasLoadedData;
    _Bool _hasRegisterNotification;
    NMMyPlaylistSqliteManager *_myPlaylistSqliteManager;
    NMMyDjRadioRequest *_subedRadioRequest;
    NMDjRadioProgramRequest *_programRequest;
    NMPlaylistDetailRequest *_detailRequest;
    NMMyAlbumRequest *_myAlbumRequest;
    NMGetBatchRequest *_batchRequest;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSObject<OS_dispatch_queue> *_carPlayCacheQueue;
    NMPlaylist *_myLikePlaylist;
}

@property(retain, nonatomic) NMPlaylist *myLikePlaylist; // @synthesize myLikePlaylist=_myLikePlaylist;
- (void).cxx_destruct;
- (void)unregisterAllNotification;
- (void)registerAllNotification;
- (void)_removeDataChangedNotification;
- (void)_addDataChangedNotifications;
- (void)dealloc;
- (void)clearData;
- (void)clearCacheDataByType:(long long)arg1 withResourceId:(id)arg2;
- (void)setCacheDate:(id)arg1 byType:(long long)arg2 withResourceId:(id)arg3;
- (id)getCacheDateByType:(long long)arg1 withResourceId:(id)arg2;
- (id)getKeyStr:(long long)arg1 withResourceId:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)parseSubedDjRadio:(id)arg1;
- (void)parseBoughtDjRadio:(id)arg1;
- (void)finishRequestMyAlbums:(id)arg1;
- (void)parseMyAlbums:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)loadMyAlbumLists;
- (id)parsePrivilegesDic:(id)arg1;
- (void)loadPlaylistOnlineWithPlaylist:(id)arg1 withSongArray:(id)arg2;
- (void)loadFromLocalDidFinish:(id)arg1;
- (void)loadPlayListDetailById:(id)arg1;
- (void)getPlayListDidFail:(id)arg1;
- (void)getPlayListDidSuccess:(id)arg1;
- (void)handleMyPlaylist:(id)arg1;
- (void)loadMyPlaylists:(id)arg1;
- (void)loadMyAllPlaylists;
- (void)loadSubedRadio;
- (void)loadSubedAndBoughtRadio;
- (void)loadDownloadedDjProgram;
- (void)loadDownloadedSongs;
- (void)loadData;
- (void)_albumChanged:(id)arg1;
- (void)_refreshDataForUMG;
- (void)_myAlbumlistChanged:(id)arg1;
- (void)_radioSubChanged:(id)arg1;
- (void)_updatePlaylistByStar:(id)arg1;
- (void)_playlistChangedNeedUpdate:(id)arg1;
- (void)_playlistAdd:(id)arg1;
- (void)_playlistSubscribed:(id)arg1;
- (void)_playlistDeleted:(id)arg1;
- (void)_downloadStateChanged:(id)arg1;
- (void)_loginStateChanged:(id)arg1;
- (_Bool)_carPlayConnectState;
- (_Bool)_isConnectedCarplay;
- (void)_outputDeviceChanged:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

