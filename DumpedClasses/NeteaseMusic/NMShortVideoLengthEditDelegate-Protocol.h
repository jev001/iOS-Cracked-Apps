//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMShortVideoDataProtocol.h"
#import "NSObject.h"

@class NMShortVideoLengthEditViewController;

@protocol NMShortVideoLengthEditDelegate <NSObject, NMShortVideoDataProtocol>
- (void)lengthEditViewController:(NMShortVideoLengthEditViewController *)arg1 didSelectRange:(CDStruct_e83c9415)arg2 currentTime:(CDStruct_1b6d18a9)arg3;
- (void)lengthEditViewController:(NMShortVideoLengthEditViewController *)arg1 willSelectRange:(CDStruct_e83c9415)arg2 currentTime:(CDStruct_1b6d18a9)arg3;
- (void)lengthEditViewController:(NMShortVideoLengthEditViewController *)arg1 beginSelectRange:(CDStruct_e83c9415)arg2 currentTime:(CDStruct_1b6d18a9)arg3;
@end

