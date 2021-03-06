//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSArray, NSDate, NSInputStream, NSMutableArray, NSMutableData, NSMutableSet, NSOperationQueue, NSOutputStream, NSString, NSTimer, NSURL, NSURLRequest, NlsIOConsumerPool;

@interface NlsWebSocket : NSObject <NSStreamDelegate>
{
    long long _webSocketVersion;
    NSOperationQueue *_delegateOperationQueue;
    struct dispatch_queue_s *_delegateDispatchQueue;
    struct dispatch_queue_s *_workQueue;
    NSMutableArray *_consumers;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSMutableData *_readBuffer;
    unsigned long long _readBufferOffset;
    NSMutableData *_outputBuffer;
    unsigned long long _outputBufferOffset;
    unsigned char _currentFrameOpcode;
    unsigned long long _currentFrameCount;
    unsigned long long _readOpCount;
    unsigned int _currentStringScanPosition;
    NSMutableData *_currentFrameData;
    NSString *_closeReason;
    NSString *_secKey;
    _Bool _pinnedCertFound;
    unsigned char _currentReadMaskKey[4];
    unsigned long long _currentReadMaskOffset;
    _Bool _consumerStopped;
    _Bool _closeWhenFinishedWriting;
    _Bool _failed;
    _Bool _secure;
    NSURLRequest *_urlRequest;
    struct __CFHTTPMessage *_receivedHTTPHeaders;
    _Bool _sentClose;
    _Bool _didFail;
    int _closeCode;
    _Bool _isPumping;
    NSMutableSet *_scheduledRunloops;
    NlsWebSocket *_selfRetain;
    NSArray *_requestedProtocols;
    NlsIOConsumerPool *_consumerPool;
    NSTimer *_statusTimer;
    NSDate *_lastActivityDate;
    int _readyState;
    id <NlsWebSocketDelegate> _delegate;
    NSURL *_url;
    NSString *_protocol;
}

+ (void)initialize;
@property(nonatomic) struct dispatch_queue_s *delegateDispatchQueue; // @synthesize delegateDispatchQueue=_delegateDispatchQueue;
@property(retain, nonatomic) NSOperationQueue *delegateOperationQueue; // @synthesize delegateOperationQueue=_delegateOperationQueue;
@property(readonly, copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(nonatomic) int readyState; // @synthesize readyState=_readyState;
@property(readonly, retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) id <NlsWebSocketDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_sendFrameWithOpcode:(int)arg1 data:(id)arg2;
- (void)_pumpScanner;
- (_Bool)_innerPumpScanner;
- (void)_readUntilBytes:(const void *)arg1 length:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_readUntilHeaderCompleteWithCallback:(CDUnknownBlockType)arg1;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2 dataLength:(unsigned long long)arg3;
- (void)_addConsumerWithDataLength:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2 readToCurrentFrame:(_Bool)arg3 unmaskBytes:(_Bool)arg4;
- (void)_addConsumerWithScanner:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_pumpWriting;
- (void)_readFrameNew;
- (void)_readFrameContinue;
- (void)_handleFrameHeader:(CDStruct_6a6a01a4)arg1 curData:(id)arg2;
- (void)_handleFrameWithData:(id)arg1 opCode:(long long)arg2;
- (void)_disconnect;
- (void)handleCloseWithData:(id)arg1;
- (void)updateStatus:(id)arg1;
- (void)_handleMessage:(id)arg1;
- (void)handlePong;
- (void)handlePing:(id)arg1;
- (void)send:(id)arg1;
- (void)_writeData:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)_closeWithProtocolError:(id)arg1;
- (void)closeWithCode:(long long)arg1 reason:(id)arg2;
- (void)close;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_connect;
- (void)_initializeStreams;
- (void)didConnect;
- (void)_readHTTPHeader;
- (void)_HTTPHeadersDidFinish;
- (_Bool)_checkHandshake:(struct __CFHTTPMessage *)arg1;
- (void)_performDelegateBlock:(CDUnknownBlockType)arg1;
- (void)open;
- (void)dealloc;
- (void)assertOnWorkQueue;
- (void)_SR_commonInit;
- (id)initWithURL:(id)arg1 protocols:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURLRequest:(id)arg1 protocols:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

