//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUIDillyNode.h"

#import "TBVRPayNodeProtocol.h"

@class NSString, TBVRUIManager, UIImageView, UILabel, UIView;

@interface TBVRPayPayToolNode : VUIDillyNode <TBVRPayNodeProtocol>
{
    TBVRUIManager *_manager;
    UIView *_textureView;
    UIImageView *_logoView;
    UILabel *_title;
    NSString *_imageUrl;
}

@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIView *textureView; // @synthesize textureView=_textureView;
@property(nonatomic) __weak TBVRUIManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)redrawWithData:(id)arg1;
- (void)dealloc;
- (void)didRecvLogoNotification:(id)arg1;
- (id)initWithParams:(id)arg1 data:(id)arg2 manager:(id)arg3;
@property(readonly, nonatomic) double ptHeight;
@property(readonly, nonatomic) double ptWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
