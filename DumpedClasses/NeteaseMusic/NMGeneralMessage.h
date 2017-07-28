//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMGeneralMessage : NSObject
{
    _Bool _openUrlIsLegal;
    NSString *_noticContent;
    NSString *_inboxBriefContent;
    NSString *_nativeUrl;
    NSString *_webViewUrl;
    NSString *_coverUrl;
    NSString *_title;
    NSString *_subTitle;
    NSString *_tag;
    NSString *_subTag;
}

@property(nonatomic) _Bool openUrlIsLegal; // @synthesize openUrlIsLegal=_openUrlIsLegal;
@property(retain, nonatomic) NSString *subTag; // @synthesize subTag=_subTag;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *webViewUrl; // @synthesize webViewUrl=_webViewUrl;
@property(retain, nonatomic) NSString *nativeUrl; // @synthesize nativeUrl=_nativeUrl;
@property(retain, nonatomic) NSString *inboxBriefContent; // @synthesize inboxBriefContent=_inboxBriefContent;
@property(retain, nonatomic) NSString *noticContent; // @synthesize noticContent=_noticContent;
- (void).cxx_destruct;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

