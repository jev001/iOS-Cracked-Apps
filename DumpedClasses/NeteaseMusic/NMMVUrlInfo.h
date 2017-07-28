//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface NMMVUrlInfo : NSObject
{
    NSString *_mvId;
    NSString *_md5;
    long long _resolution;
    unsigned long long _filesize;
    NSString *_url;
    long long _urlcode;
    NSDate *_expireTime;
    long long _fee;
}

@property(nonatomic) long long fee; // @synthesize fee=_fee;
@property(retain, nonatomic) NSDate *expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) long long urlcode; // @synthesize urlcode=_urlcode;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long filesize; // @synthesize filesize=_filesize;
@property(nonatomic) long long resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *mvId; // @synthesize mvId=_mvId;
- (void).cxx_destruct;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

