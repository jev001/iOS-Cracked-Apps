//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMCommentAddRequest : NMBaseRequest
{
    NSString *_threadId;
    NSString *_content;
    NSString *_commentId;
}

@property(readonly, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
- (void).cxx_destruct;
- (id)initWithThreadId:(id)arg1 content:(id)arg2 commentId:(id)arg3;

@end

