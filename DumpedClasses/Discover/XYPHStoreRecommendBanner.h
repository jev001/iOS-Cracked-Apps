//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSArray, NSString;

@interface XYPHStoreRecommendBanner : XYRKModel
{
    NSString *_title;
    NSString *_desc;
    NSString *_link;
    NSString *_bannerId;
    NSArray *_images;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSString *bannerId; // @synthesize bannerId=_bannerId;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
