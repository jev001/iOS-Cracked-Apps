//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMContact, NMInviteContactViewController, NSString;

@protocol NMInviteContactViewControllerDelegate <NSObject>
- (void)backButtonTouchedInInviteContactViewController:(NMInviteContactViewController *)arg1;
- (void)inviteContactViewController:(NMInviteContactViewController *)arg1 didSuccessedSendToContract:(NMContact *)arg2 phoneNumber:(NSString *)arg3;

@optional
- (void)inviteContactViewController:(NMInviteContactViewController *)arg1 didSelectContract:(NMContact *)arg2 phoneNumber:(NSString *)arg3;
@end

