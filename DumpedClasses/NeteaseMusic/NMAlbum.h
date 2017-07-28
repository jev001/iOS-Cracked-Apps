//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NMArtist, NMSong, NSArray, NSDictionary, NSNumber, NSString;

@interface NMAlbum : NSObject <NSCopying>
{
    long long _type;
    NSString *_albumId;
    NSString *_name;
    NSString *_language;
    NSString *_coverUrl;
    NSString *_backUrl;
    NSString *_pubTime;
    long long _publishTime;
    NSString *_company;
    unsigned long long _songCount;
    NSString *_img80x80;
    _Bool _exclusive;
    _Bool _canBeCommented;
    _Bool _hasFeeIssue;
    _Bool _isOnSaleDigitalAlbum;
    _Bool _isDigitalAlbumPaid;
    _Bool _locked;
    _Bool _isSubscribed;
    _Bool _isMerged;
    _Bool _containPreSellSongs;
    NMArtist *_artist;
    long long _shareCount;
    NSString *_threadId;
    long long _commentCount;
    NSString *_category;
    NSString *_coverid;
    NSString *_introduction;
    NSString *_initial;
    NSString *_shuangPin;
    NSString *_pinYin;
    NSArray *_alias;
    NSArray *_transNames;
    NSArray *_addtionNames;
    NSString *_nameWithAddtion;
    NSString *_addtionName;
    NSString *_addtionNamePinyin;
    NSString *_addtionNameShuangpin;
    NMSong *_feeSong;
    NSArray *_artists;
    long long _saleNumber;
    NSString *_productTitle;
    NSString *_productSubTitle;
    NSString *_productUrl;
    NSDictionary *_artistUserIdDict;
    long long _subscribedCount;
    long long _subscribedTime;
    unsigned long long _offlineSuccCount;
    unsigned long long _boughtCount;
    NSString *_fromUser;
    NSString *_alg;
    long long _displayType;
    NSNumber *_validNumber;
}

@property(retain, nonatomic) NSNumber *validNumber; // @synthesize validNumber=_validNumber;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) _Bool containPreSellSongs; // @synthesize containPreSellSongs=_containPreSellSongs;
@property(copy, nonatomic) NSString *alg; // @synthesize alg=_alg;
@property(nonatomic) _Bool isMerged; // @synthesize isMerged=_isMerged;
@property(copy, nonatomic) NSString *fromUser; // @synthesize fromUser=_fromUser;
@property(nonatomic) unsigned long long boughtCount; // @synthesize boughtCount=_boughtCount;
@property(nonatomic) unsigned long long offlineSuccCount; // @synthesize offlineSuccCount=_offlineSuccCount;
@property(nonatomic) long long subscribedTime; // @synthesize subscribedTime=_subscribedTime;
@property(nonatomic) long long subscribedCount; // @synthesize subscribedCount=_subscribedCount;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(copy, nonatomic) NSDictionary *artistUserIdDict; // @synthesize artistUserIdDict=_artistUserIdDict;
@property(retain, nonatomic) NSString *productUrl; // @synthesize productUrl=_productUrl;
@property(retain, nonatomic) NSString *productSubTitle; // @synthesize productSubTitle=_productSubTitle;
@property(retain, nonatomic) NSString *productTitle; // @synthesize productTitle=_productTitle;
@property(nonatomic) long long saleNumber; // @synthesize saleNumber=_saleNumber;
@property(nonatomic) _Bool isDigitalAlbumPaid; // @synthesize isDigitalAlbumPaid=_isDigitalAlbumPaid;
@property(nonatomic) _Bool isOnSaleDigitalAlbum; // @synthesize isOnSaleDigitalAlbum=_isOnSaleDigitalAlbum;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(retain, nonatomic) NMSong *feeSong; // @synthesize feeSong=_feeSong;
@property(nonatomic) _Bool hasFeeIssue; // @synthesize hasFeeIssue=_hasFeeIssue;
@property(nonatomic) _Bool canBeCommented; // @synthesize canBeCommented=_canBeCommented;
@property(retain, nonatomic) NSString *addtionNameShuangpin; // @synthesize addtionNameShuangpin=_addtionNameShuangpin;
@property(retain, nonatomic) NSString *addtionNamePinyin; // @synthesize addtionNamePinyin=_addtionNamePinyin;
@property(retain, nonatomic) NSString *addtionName; // @synthesize addtionName=_addtionName;
@property(retain, nonatomic) NSString *nameWithAddtion; // @synthesize nameWithAddtion=_nameWithAddtion;
@property(retain, nonatomic) NSArray *addtionNames; // @synthesize addtionNames=_addtionNames;
@property(retain, nonatomic) NSArray *transNames; // @synthesize transNames=_transNames;
@property(retain, nonatomic) NSArray *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *pinYin; // @synthesize pinYin=_pinYin;
@property(retain, nonatomic) NSString *shuangPin; // @synthesize shuangPin=_shuangPin;
@property(retain, nonatomic) NSString *initial; // @synthesize initial=_initial;
@property(retain, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(retain, nonatomic) NSString *coverid; // @synthesize coverid=_coverid;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) _Bool exclusive; // @synthesize exclusive=_exclusive;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(retain, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(retain, nonatomic) NSString *img80x80; // @synthesize img80x80=_img80x80;
@property(retain, nonatomic) NMArtist *artist; // @synthesize artist=_artist;
@property(nonatomic) unsigned long long songCount; // @synthesize songCount=_songCount;
@property(retain, nonatomic) NSString *company; // @synthesize company=_company;
@property(nonatomic) long long publishTime; // @synthesize publishTime=_publishTime;
@property(retain, nonatomic) NSString *backUrl; // @synthesize backUrl=_backUrl;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool valid;
@property(readonly, nonatomic) NSString *allArtistsNames;
@property(readonly, nonatomic) NSString *nameWithCategory;
@property(readonly, nonatomic) NSString *nameWithTransOrAlias;
- (id)aliasOrTrans;
@property(readonly, nonatomic) NSString *transOrAlias;
@property(readonly, nonatomic) NSString *pubTime2; // @dynamic pubTime2;
@property(readonly, nonatomic) NSString *pubTime; // @dynamic pubTime;
@property(readonly, nonatomic) NSString *link; // @dynamic link;
@property(readonly, nonatomic) _Bool needShowDigitalSaleInfo;
- (id)initWithDictionary:(id)arg1;
- (void)fillWithDynamicResult:(id)arg1;
@property(readonly, nonatomic) NSString *displaySaleUnit;
@property(readonly, nonatomic) _Bool needShowProductInfo;
- (void)fillWithDerivedProductResult:(id)arg1;
- (void)fillWithDigitalCheckResult:(id)arg1;
- (void)fillWithDictionary:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)proxyForJson;
- (id)userAlbumDictionary;
- (id)albumDictionary;
- (void)parseAlbumInitial:(id)arg1;
- (long long)compare:(id)arg1;
- (id)bestMatchAdditionNameForKeywords:(id)arg1;
- (id)bestMatchAdditionNameForKeyword:(id)arg1;
- (void)fillWithBoughtAlbum:(id)arg1;

@end

