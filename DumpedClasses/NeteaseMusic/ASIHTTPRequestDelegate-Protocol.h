//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest, NSData, NSDictionary, NSURL;

@protocol ASIHTTPRequestDelegate <NSObject>

@optional
- (_Bool)shouldEvaluateTrust:(ASIHTTPRequest *)arg1;
- (void)proxyAuthenticationNeededForRequest:(ASIHTTPRequest *)arg1;
- (void)authenticationNeededForRequest:(ASIHTTPRequest *)arg1;
- (void)request:(ASIHTTPRequest *)arg1 didReceiveData:(NSData *)arg2;
- (void)requestRedirected:(ASIHTTPRequest *)arg1;
- (void)requestFailed:(ASIHTTPRequest *)arg1;
- (void)requestFinished:(ASIHTTPRequest *)arg1;
- (void)request:(ASIHTTPRequest *)arg1 willRedirectToURL:(NSURL *)arg2;
- (void)request:(ASIHTTPRequest *)arg1 didReceiveResponseHeaders:(NSDictionary *)arg2;
- (void)requestStarted:(ASIHTTPRequest *)arg1;
@end

