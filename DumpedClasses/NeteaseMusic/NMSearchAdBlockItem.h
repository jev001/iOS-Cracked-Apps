//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSearchBlockItem.h"

@class NMAdvertisement;

@interface NMSearchAdBlockItem : NMSearchBlockItem
{
    NMAdvertisement *_advertisement;
}

+ (id)adItemWithAdvertisement:(id)arg1;
@property(readonly, nonatomic) NMAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (void).cxx_destruct;
- (id)initWithAdvertisement:(id)arg1;

@end

