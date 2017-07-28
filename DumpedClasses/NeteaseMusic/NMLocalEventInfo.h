//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMEvent.h"

#import "NSCopying.h"

@class NMShortVideoInfo, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface NMLocalEventInfo : NMEvent <NSCopying>
{
    id _resource;
    NSString *_sourcePage;
    float _videoProgress;
    float _videoUploadProgress;
    NSString *_localEventId;
    double _localTime;
    NSString *_text;
    NSMutableArray *_platformArray;
    NSArray *_chosenSnsArray;
    NSArray *_imageFilePathArray;
    NSMutableArray *_tripleIdArray;
    unsigned long long _localEventType;
    unsigned long long _sendingStatus;
    NSString *_coverUrl;
    NSString *_compoundImageURL;
    NSString *_compoundImageId;
    NSMutableDictionary *_extraInfo;
    NMShortVideoInfo *_videoInfo;
}

+ (id)thumbNailImageNameForImage:(id)arg1 size:(struct CGSize)arg2;
+ (_Bool)validLocalEventForSendManager:(unsigned long long)arg1;
@property(nonatomic) float videoUploadProgress; // @synthesize videoUploadProgress=_videoUploadProgress;
@property(nonatomic) float videoProgress; // @synthesize videoProgress=_videoProgress;
@property(retain, nonatomic) NMShortVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) id resource; // @synthesize resource=_resource;
@property(retain, nonatomic) NSString *compoundImageId; // @synthesize compoundImageId=_compoundImageId;
@property(retain, nonatomic) NSString *compoundImageURL; // @synthesize compoundImageURL=_compoundImageURL;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) unsigned long long sendingStatus; // @synthesize sendingStatus=_sendingStatus;
@property(nonatomic) unsigned long long localEventType; // @synthesize localEventType=_localEventType;
@property(retain, nonatomic) NSMutableArray *tripleIdArray; // @synthesize tripleIdArray=_tripleIdArray;
@property(retain, nonatomic) NSArray *imageFilePathArray; // @synthesize imageFilePathArray=_imageFilePathArray;
@property(retain, nonatomic) NSArray *chosenSnsArray; // @synthesize chosenSnsArray=_chosenSnsArray;
@property(retain, nonatomic) NSMutableArray *platformArray; // @synthesize platformArray=_platformArray;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double localTime; // @synthesize localTime=_localTime;
@property(retain, nonatomic) NSString *localEventId; // @synthesize localEventId=_localEventId;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) long long eventInfoSendScene;
@property(readonly, nonatomic) unsigned long long failedCode;
- (_Bool)isTranscodingEvent;
- (_Bool)isReadyEvent;
- (_Bool)isSendingEvent;
- (_Bool)isFailedEvent;
- (id)getSourcePageDes;
- (long long)ltime;
- (id)time;
- (id)getTypeDesc;
- (id)getShareWord;
- (id)getMainObject;
- (id)eventUser;
- (void)addTripleId:(id)arg1;
- (void)clearCachedVideo;
- (void)clearCachedImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResource:(id)arg1 type:(unsigned long long)arg2 text:(id)arg3 imageResult:(id)arg4 videoInfo:(id)arg5 shareToThirdPartPlatformArray:(id)arg6 withSendScene:(long long)arg7;
- (id)initWithShareResource:(id)arg1 type:(unsigned long long)arg2 text:(id)arg3 imageResult:(id)arg4 videoInfo:(id)arg5 shareToThirdPartPlatformArray:(id)arg6;
- (id)initWithResource:(id)arg1 type:(unsigned long long)arg2 text:(id)arg3 imageResult:(id)arg4 videoInfo:(id)arg5 shareToThirdPartPlatformArray:(id)arg6;

@end

