//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMActivityInfoView, NMCommodity;

@protocol NMAcitivityInfoViewDelegate <NSObject>

@optional
- (void)commodityClicked:(NMActivityInfoView *)arg1 commodity:(NMCommodity *)arg2;
- (void)reminderButtonClicked:(NMActivityInfoView *)arg1 remind:(_Bool)arg2;
- (void)moreDesButtonClicked:(NMActivityInfoView *)arg1 buttonClicked:(_Bool)arg2;
@end

