//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMShortVideoBgm, NMShortVideoBgmManageViewController;

@protocol NMShortVideoBgmManageDelegate <NSObject>
- (void)bgmManageViewController:(NMShortVideoBgmManageViewController *)arg1 didFailSelectBgm:(NMShortVideoBgm *)arg2;
- (void)bgmManageViewController:(NMShortVideoBgmManageViewController *)arg1 didSelectBgm:(NMShortVideoBgm *)arg2;
- (void)bgmManageViewController:(NMShortVideoBgmManageViewController *)arg1 didUpdateMetaData:(NMShortVideoBgm *)arg2;
@end

