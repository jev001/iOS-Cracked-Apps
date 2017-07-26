//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSString;

@interface CTDiscoverHotelPromotionInfoModel : CTJSONModel
{
    NSString *_StartTime;
    NSString *_EndTime;
    NSString *_ServerTime;
    NSString *_Status;
    NSString *_Name;
    double _Price;
    double _PriceOld;
    NSString *_URL;
    NSString *_ImageUrl;
    NSString *_rating;
    NSString *_ZoneName;
    NSString *_GiftCenterHeadTitle;
    NSString *_GiftCenterTitle;
    NSString *_GiftCenterEnterTitle;
    NSString *_GiftCenterUrl;
}

@property(copy, nonatomic) NSString *GiftCenterUrl; // @synthesize GiftCenterUrl=_GiftCenterUrl;
@property(copy, nonatomic) NSString *GiftCenterEnterTitle; // @synthesize GiftCenterEnterTitle=_GiftCenterEnterTitle;
@property(copy, nonatomic) NSString *GiftCenterTitle; // @synthesize GiftCenterTitle=_GiftCenterTitle;
@property(copy, nonatomic) NSString *GiftCenterHeadTitle; // @synthesize GiftCenterHeadTitle=_GiftCenterHeadTitle;
@property(copy, nonatomic) NSString *ZoneName; // @synthesize ZoneName=_ZoneName;
@property(copy, nonatomic) NSString *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *ImageUrl; // @synthesize ImageUrl=_ImageUrl;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(nonatomic) double PriceOld; // @synthesize PriceOld=_PriceOld;
@property(nonatomic) double Price; // @synthesize Price=_Price;
@property(copy, nonatomic) NSString *Name; // @synthesize Name=_Name;
@property(copy, nonatomic) NSString *Status; // @synthesize Status=_Status;
@property(copy, nonatomic) NSString *ServerTime; // @synthesize ServerTime=_ServerTime;
@property(copy, nonatomic) NSString *EndTime; // @synthesize EndTime=_EndTime;
@property(copy, nonatomic) NSString *StartTime; // @synthesize StartTime=_StartTime;
- (void).cxx_destruct;

@end
