//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface YXImageObject : NSObject
{
    NSData *_imageData;
    NSString *_imageUrl;
}

+ (id)object;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (_Bool)isValid;
- (id)stringifyToJSONString;
- (void)decodeFromNSDict:(id)arg1;
- (id)encodeToNSDict;
- (void)dealloc;
- (id)init;

@end

