//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString, TBSDKMTOPServer;

@interface TBSearchNXPreloadDataService : NSObject
{
    _Bool _preparedDataWithFinished;
    NSString *_nxtype;
    NSString *_urlString;
    NSDictionary *_nxPreloadCfg;
    NSDictionary *_queryJSON;
    NSMutableDictionary *_queryConfig;
    NSDictionary *_preparedData;
    CDUnknownBlockType _preparedCallback;
    TBSDKMTOPServer *_mtopServer;
}

+ (id)instanceWithNxConfigModel:(id)arg1 urlString:(id)arg2;
@property(retain, nonatomic) TBSDKMTOPServer *mtopServer; // @synthesize mtopServer=_mtopServer;
@property(copy, nonatomic) CDUnknownBlockType preparedCallback; // @synthesize preparedCallback=_preparedCallback;
@property(nonatomic) _Bool preparedDataWithFinished; // @synthesize preparedDataWithFinished=_preparedDataWithFinished;
@property(retain, nonatomic) NSDictionary *preparedData; // @synthesize preparedData=_preparedData;
@property(retain, nonatomic) NSMutableDictionary *queryConfig; // @synthesize queryConfig=_queryConfig;
@property(retain, nonatomic) NSDictionary *queryJSON; // @synthesize queryJSON=_queryJSON;
@property(retain, nonatomic) NSDictionary *nxPreloadCfg; // @synthesize nxPreloadCfg=_nxPreloadCfg;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) NSString *nxtype; // @synthesize nxtype=_nxtype;
- (void).cxx_destruct;
- (void)prepareData:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)startPreloadData;
- (id)decodeParams:(id)arg1;

@end

