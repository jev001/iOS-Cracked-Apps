//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol RPTakePhotoControllerDelegate <NSObject>
- (void)noCameraPermission;
- (void)cancelTakePhoto:(long long)arg1;
- (void)didTakePhoto:(NSData *)arg1:(long long)arg2 extendParam:(NSString *)arg3;
@end
