//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PECollectSettingViewController;

@protocol PECollectSettingViewControllerDelegate <NSObject>
- (void)settingViewController:(PECollectSettingViewController *)arg1 finishWithAmount:(NSString *)arg2 memo:(NSString *)arg3 codeId:(NSString *)arg4 qrCodeUrl:(NSString *)arg5 offlineQrCodeUrl:(NSString *)arg6;
- (void)backFromSettingViewController:(PECollectSettingViewController *)arg1;
@end
