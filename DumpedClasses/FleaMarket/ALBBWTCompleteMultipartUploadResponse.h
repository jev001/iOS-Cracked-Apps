//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALBBWTUploadResponse.h"

@class NSString;

@interface ALBBWTCompleteMultipartUploadResponse : ALBBWTUploadResponse
{
    NSString *_id;
    NSString *_uploadId;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *fileId;

@end
