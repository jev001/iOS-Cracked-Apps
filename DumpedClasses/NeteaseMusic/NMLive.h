//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMArtist, NMLiveGroup, NMLiveResolution, NMLiveScreen, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface NMLive : NSObject
{
    NSMutableArray *_selectedScreenChangedCallbackArray;
    NSMutableArray *_selectedResolutionChangedCallbackArray;
    _Bool _detailLoadFinished;
    _Bool _voteValid;
    NSDictionary *_groupDictionary;
    NSArray *_groupArray;
    long long _barragePoint;
    long long _endTime;
    NSString *_fillColor;
    NSString *_headPicUrl;
    NSString *_liveId;
    NSString *_liveDesc;
    long long _liveStatus;
    double _voteFreezeTime;
    NSString *_mobileUrl;
    NSString *_mvId;
    NMLiveResolution *_selectedResolution;
    NSArray *_screens;
    NMLiveScreen *_selectedScreen;
    NSString *_sharePicUrl;
    NSString *_shareText;
    long long _startTime;
    NSString *_staticPicUrl;
    NSString *_title;
    long long _webCycle;
    NSString *_webUrl;
    long long _barrageCost;
    NSArray *_latestBarrage;
    double _pollingInterval;
    long long _onLinePeople;
    unsigned long long _whiteTicket;
    unsigned long long _redTicket;
    NSArray *_redTeam;
    NSArray *_whiteTeam;
    long long _voteStatus;
    NMLiveGroup *_supportGroup;
    double _latestCommentTime;
    unsigned long long _remainedVoteCount;
    NSMutableDictionary *_userLocalCommentDic;
}

+ (double)defaultPollingTime;
@property(retain, nonatomic) NSMutableDictionary *userLocalCommentDic; // @synthesize userLocalCommentDic=_userLocalCommentDic;
@property(nonatomic) unsigned long long remainedVoteCount; // @synthesize remainedVoteCount=_remainedVoteCount;
@property(nonatomic) double latestCommentTime; // @synthesize latestCommentTime=_latestCommentTime;
@property(readonly, nonatomic) NMLiveGroup *supportGroup; // @synthesize supportGroup=_supportGroup;
@property(nonatomic) long long voteStatus; // @synthesize voteStatus=_voteStatus;
@property(retain, nonatomic) NSArray *whiteTeam; // @synthesize whiteTeam=_whiteTeam;
@property(retain, nonatomic) NSArray *redTeam; // @synthesize redTeam=_redTeam;
@property(nonatomic) unsigned long long redTicket; // @synthesize redTicket=_redTicket;
@property(nonatomic) unsigned long long whiteTicket; // @synthesize whiteTicket=_whiteTicket;
@property(nonatomic) long long onLinePeople; // @synthesize onLinePeople=_onLinePeople;
@property(nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(retain, nonatomic) NSArray *latestBarrage; // @synthesize latestBarrage=_latestBarrage;
@property(nonatomic) long long barrageCost; // @synthesize barrageCost=_barrageCost;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(nonatomic) long long webCycle; // @synthesize webCycle=_webCycle;
@property(nonatomic) _Bool voteValid; // @synthesize voteValid=_voteValid;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *staticPicUrl; // @synthesize staticPicUrl=_staticPicUrl;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(retain, nonatomic) NSString *sharePicUrl; // @synthesize sharePicUrl=_sharePicUrl;
@property(retain, nonatomic) NMLiveScreen *selectedScreen; // @synthesize selectedScreen=_selectedScreen;
@property(retain, nonatomic) NSArray *screens; // @synthesize screens=_screens;
@property(retain, nonatomic) NMLiveResolution *selectedResolution; // @synthesize selectedResolution=_selectedResolution;
@property(retain, nonatomic) NSString *mvId; // @synthesize mvId=_mvId;
@property(retain, nonatomic) NSString *mobileUrl; // @synthesize mobileUrl=_mobileUrl;
@property(nonatomic) double voteFreezeTime; // @synthesize voteFreezeTime=_voteFreezeTime;
@property(nonatomic) long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) NSString *liveDesc; // @synthesize liveDesc=_liveDesc;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *headPicUrl; // @synthesize headPicUrl=_headPicUrl;
@property(retain, nonatomic) NSString *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long barragePoint; // @synthesize barragePoint=_barragePoint;
@property(retain, nonatomic) NSArray *groupArray; // @synthesize groupArray=_groupArray;
@property(retain, nonatomic) NSDictionary *groupDictionary; // @synthesize groupDictionary=_groupDictionary;
@property(nonatomic) _Bool detailLoadFinished; // @synthesize detailLoadFinished=_detailLoadFinished;
- (void).cxx_destruct;
@property(retain, nonatomic) NMArtist *supportArtist;
- (void)_changeGroupInfoIfNeedForNoTeam:(id)arg1 redTeam:(id)arg2 whiteTeam:(id)arg3;
- (id)_getNewGroupArtistsFromArray:(id)arg1;
- (void)fillSupportedArtist:(id)arg1;
- (void)fillBarragePollingInfo:(id)arg1;
- (void)fillScreensInfo:(id)arg1;
- (void)fillGroupWithInfo:(id)arg1;
- (void)fillBarrageInfo:(id)arg1;
- (void)refreshTicketInfo:(id)arg1;
- (void)fillLiveInfo:(id)arg1;
@property(readonly, nonatomic) NSArray *artistArray;
- (void)addSelectedResolutionChangedCallback:(CDUnknownBlockType)arg1;
- (void)addSelectedScreenChangedCallback:(CDUnknownBlockType)arg1;
- (id)init;

@end

