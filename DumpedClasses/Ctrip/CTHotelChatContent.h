//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTHotelChatVoiceModel, NSArray, NSDictionary, NSString;

@interface CTHotelChatContent : NSObject
{
    NSArray *_imgList;
    NSString *_content;
    NSString *_actionCode;
    NSString *_additionalContent;
    NSDictionary *_dictExt;
    id _data;
    long long _sessionId;
    CTHotelChatVoiceModel *_voiceModel;
}

@property(retain, nonatomic) CTHotelChatVoiceModel *voiceModel; // @synthesize voiceModel=_voiceModel;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *dictExt; // @synthesize dictExt=_dictExt;
@property(copy, nonatomic) NSString *additionalContent; // @synthesize additionalContent=_additionalContent;
@property(copy, nonatomic) NSString *actionCode; // @synthesize actionCode=_actionCode;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *imgList; // @synthesize imgList=_imgList;
- (void).cxx_destruct;
@property(readonly, nonatomic) int contentType;
- (id)init;

@end
