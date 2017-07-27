//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQGrayTipsProcessDelegate.h"

@class NSPointerArray, NSString;

@interface QQGrayTipsAIOModule : NSObject <QQGrayTipsProcessDelegate>
{
    NSPointerArray *_aioVCArr;
}

- (void).cxx_destruct;
- (void)unInstallAIOController:(id)arg1;
- (void)installAIOController:(id)arg1;
- (void)onGetProfileGetSimpleInfo:(id)arg1;
- (void)deleteGrayTipWithTipId:(unsigned int)arg1 tipKey:(id)arg2 uin:(id)arg3 uinTpye:(unsigned long long)arg4;
- (void)processWithGrayTipsParam:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
