//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMComingDjProgramStage : NSObject
{
    unsigned long long _expectedVote;
    NSString *_voteDescription;
    long long _status;
    NSString *_picUrl;
}

@property(readonly, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *voteDescription; // @synthesize voteDescription=_voteDescription;
@property(readonly, nonatomic) unsigned long long expectedVote; // @synthesize expectedVote=_expectedVote;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

