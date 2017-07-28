//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMSkinThemeInfo, NSArray, NSDecimalNumber, NSMutableDictionary, NSNumber, NSString, UIImage;

@interface NMSkinTheme : NSObject
{
    NSMutableDictionary *_oldSkinUpdateImageExistDic;
    _Bool _isNew;
    _Bool _removedByServer;
    _Bool _hasPaid;
    _Bool _isForVip;
    _Bool _isDigitalAlbum;
    NSString *_contentId;
    NSString *_categoryId;
    NSString *_url;
    NSString *_name;
    NSString *_cover;
    NSString *_controlImagePath;
    NSString *_relativeFilePath;
    NSNumber *_createTime;
    unsigned long long _downCount;
    unsigned long long _state;
    long long _feePoint;
    NSDecimalNumber *_feeRMB;
    long long _fileSize;
    long long _downloadedFileSize;
    NSString *_leastVersion;
    NSArray *_skinThemePreviewArray;
    NSArray *_skinImageThemePreviewArray;
    double _downloadProgress;
    NSString *_themeDescription;
    UIImage *_cachedCoverImage;
    NMSkinThemeInfo *_themeInfo;
    NSString *_goodID;
    NSString *_skuId;
    NSString *_snapShotId;
    NSString *_iapId;
    NSString *_digitalAlbumId;
    unsigned long long _skinAlbumState;
    double _contentHeight;
    double _nameHeight;
}

+ (id)customImageSkinThemeWithImagePath:(id)arg1 coverImagePath:(id)arg2 controlImagePath:(id)arg3 colorHexString:(id)arg4 actionSheetBgColorHexString:(id)arg5;
+ (id)customImageSkinThemeWithColorHexString:(id)arg1 actionSheetBgColorHexString:(id)arg2;
+ (id)appBackgroundMaskColor;
+ (id)controlImageMaskColor:(_Bool)arg1;
+ (int)controlImageBlur;
+ (double)controlImageAlpha;
+ (id)palletSkinThemeWithColorHexString:(id)arg1;
+ (id)nightSkinTheme;
+ (id)whiteSkinTheme;
+ (id)defaultSkinTheme;
@property(nonatomic) double nameHeight; // @synthesize nameHeight=_nameHeight;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) unsigned long long skinAlbumState; // @synthesize skinAlbumState=_skinAlbumState;
@property(retain, nonatomic) NSString *digitalAlbumId; // @synthesize digitalAlbumId=_digitalAlbumId;
@property(readonly, nonatomic) _Bool isDigitalAlbum; // @synthesize isDigitalAlbum=_isDigitalAlbum;
@property(nonatomic) _Bool isForVip; // @synthesize isForVip=_isForVip;
@property(retain, nonatomic) NSString *iapId; // @synthesize iapId=_iapId;
@property(retain, nonatomic) NSString *snapShotId; // @synthesize snapShotId=_snapShotId;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(retain, nonatomic) NSString *goodID; // @synthesize goodID=_goodID;
@property(nonatomic) _Bool hasPaid; // @synthesize hasPaid=_hasPaid;
@property(nonatomic) _Bool removedByServer; // @synthesize removedByServer=_removedByServer;
@property(retain, nonatomic) NMSkinThemeInfo *themeInfo; // @synthesize themeInfo=_themeInfo;
@property(retain, nonatomic) UIImage *cachedCoverImage; // @synthesize cachedCoverImage=_cachedCoverImage;
@property(retain, nonatomic) NSString *themeDescription; // @synthesize themeDescription=_themeDescription;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) NSArray *skinImageThemePreviewArray; // @synthesize skinImageThemePreviewArray=_skinImageThemePreviewArray;
@property(retain, nonatomic) NSArray *skinThemePreviewArray; // @synthesize skinThemePreviewArray=_skinThemePreviewArray;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) NSString *leastVersion; // @synthesize leastVersion=_leastVersion;
@property(nonatomic) long long downloadedFileSize; // @synthesize downloadedFileSize=_downloadedFileSize;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSDecimalNumber *feeRMB; // @synthesize feeRMB=_feeRMB;
@property(nonatomic) long long feePoint; // @synthesize feePoint=_feePoint;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long downCount; // @synthesize downCount=_downCount;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *relativeFilePath; // @synthesize relativeFilePath=_relativeFilePath;
@property(retain, nonatomic) NSString *controlImagePath; // @synthesize controlImagePath=_controlImagePath;
@property(retain, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sizeText;
- (id)proxyForJson;
- (_Bool)oldSkinImageUpdateExistForKey:(id)arg1;
- (id)commentColorForKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long themeType;
@property(readonly, nonatomic) _Bool isImageBackground;
- (_Bool)isNightModeEqualToSkin:(id)arg1;
@property(readonly, nonatomic) _Bool isNightMode;
@property(readonly, nonatomic) _Bool isClientSide;
@property(readonly, nonatomic) _Bool isBuildIn;
- (_Bool)isEqualToSkin:(id)arg1;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSString *absoluteFilePath;
- (id)init;

@end

