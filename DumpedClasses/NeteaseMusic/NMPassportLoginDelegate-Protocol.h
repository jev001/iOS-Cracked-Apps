//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMPassport, NSString;

@protocol NMPassportLoginDelegate <NSObject>
- (void)firstLoginProfileSettingDidFinished:(NMPassport *)arg1;
- (void)passport:(NMPassport *)arg1 didFailToLogInWithError:(NSString *)arg2;
- (void)passportDidLogIn:(NMPassport *)arg1;
- (void)passportDidStartLoggedIn:(NMPassport *)arg1;
@end

