//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMYTKBaseRequest.h"

@interface MMArBaseRequest : MMYTKBaseRequest
{
    double _savedTimestamps;
}

@property(nonatomic) double savedTimestamps; // @synthesize savedTimestamps=_savedTimestamps;
- (long long)requestSerializerType;
- (id)urlQueryParamString;
- (id)timestamps;
- (id)networkVersion;
- (void)converContentTypeConfig;
- (id)init;

@end

