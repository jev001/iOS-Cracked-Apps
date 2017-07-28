//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMDjProgramBase.h"
#import "NSCopying.h"

@class NMDj, NMDjRadio, NMSong, NMSongFile, NSArray, NSMutableDictionary, NSNumber, NSString;

@interface NMDjProgram : NSObject <NSCopying, NMDjProgramBase>
{
    _Bool _subscribed;
    _Bool _praised;
    _Bool _canReward;
    _Bool _isBought;
    NMDj *_dj;
    NSString *_name;
    NSString *_djProgramId;
    long long _createTime;
    NSString *_introduction;
    long long _serial;
    long long _listenCount;
    long long _duration;
    NSString *_coverImgUrl;
    NSString *_threadId;
    NSNumber *_commentCount;
    NSNumber *_shareCount;
    NSString *_mainSongId;
    NSNumber *_subscribeCount;
    NSArray *_sidelights;
    NSArray *_contentSongArray;
    long long _trackCount;
    unsigned long long _state;
    NMSongFile *_songFile;
    NMSong *_djMainSong;
    long long _praiseCount;
    NMDjRadio *_djRadio;
    double _lastPlayTime;
    NSString *_alg;
    NSString *_recommendReason;
    long long _rewardCount;
    NSMutableDictionary *_extraInfo;
    long long _feeType;
    NSArray *_h5Infos;
    NSArray *_programDesc;
    long long _localUpdateTime;
    long long _downloadFailCode;
    NSString *_initial;
    NSString *_radioInitial;
    NSString *_pinYin;
    NSString *_shuangPin;
}

@property(retain, nonatomic) NSString *shuangPin; // @synthesize shuangPin=_shuangPin;
@property(retain, nonatomic) NSString *pinYin; // @synthesize pinYin=_pinYin;
@property(retain, nonatomic) NSString *radioInitial; // @synthesize radioInitial=_radioInitial;
@property(retain, nonatomic) NSString *initial; // @synthesize initial=_initial;
@property(nonatomic) long long downloadFailCode; // @synthesize downloadFailCode=_downloadFailCode;
@property(nonatomic) long long localUpdateTime; // @synthesize localUpdateTime=_localUpdateTime;
@property(retain, nonatomic) NSArray *programDesc; // @synthesize programDesc=_programDesc;
@property(retain, nonatomic) NSArray *h5Infos; // @synthesize h5Infos=_h5Infos;
@property(nonatomic) _Bool isBought; // @synthesize isBought=_isBought;
@property(nonatomic) long long feeType; // @synthesize feeType=_feeType;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) long long rewardCount; // @synthesize rewardCount=_rewardCount;
@property(nonatomic) _Bool canReward; // @synthesize canReward=_canReward;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSString *alg; // @synthesize alg=_alg;
@property(nonatomic) double lastPlayTime; // @synthesize lastPlayTime=_lastPlayTime;
@property(retain, nonatomic) NMDjRadio *djRadio; // @synthesize djRadio=_djRadio;
@property(nonatomic) _Bool praised; // @synthesize praised=_praised;
@property(nonatomic) long long praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain, nonatomic) NMSong *djMainSong; // @synthesize djMainSong=_djMainSong;
@property(retain, nonatomic) NMSongFile *songFile; // @synthesize songFile=_songFile;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(nonatomic) long long trackCount; // @synthesize trackCount=_trackCount;
@property(retain, nonatomic) NSArray *contentSongArray; // @synthesize contentSongArray=_contentSongArray;
@property(retain, nonatomic) NSArray *sidelights; // @synthesize sidelights=_sidelights;
@property(retain, nonatomic) NSNumber *subscribeCount; // @synthesize subscribeCount=_subscribeCount;
@property(retain, nonatomic) NSString *mainSongId; // @synthesize mainSongId=_mainSongId;
@property(retain, nonatomic) NSNumber *shareCount; // @synthesize shareCount=_shareCount;
@property(retain, nonatomic) NSNumber *commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long listenCount; // @synthesize listenCount=_listenCount;
@property(nonatomic) long long serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *djProgramId; // @synthesize djProgramId=_djProgramId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NMDj *dj; // @synthesize dj=_dj;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isFeeProgram;
@property(readonly, nonatomic) NSString *link; // @dynamic link;
- (id)proxyForJson;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithID3TagDict:(id)arg1 filesize:(unsigned long long)arg2;
- (void)fillWithExtraInfo:(id)arg1;
- (void)parseExtraRelatedInfo:(id)arg1;
- (void)fillWithDictionary:(id)arg1;
- (id)init;
- (void)parseRadioInitial:(id)arg1;
- (void)parseProgramInitial:(id)arg1;
- (long long)compareAsRadio:(id)arg1;
- (long long)compareAsProgram:(id)arg1;
- (id)toRewardResource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

