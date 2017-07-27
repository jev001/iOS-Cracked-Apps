//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSArray, NSString, UIColor;

@interface NVMOrderRating : NVMModel
{
    _Bool _isAnonymous;
    _Bool _isUserFavor;
    _Bool _isRiderRateable;
    _Bool _isTimeSpentRateable;
    _Bool _isEditable;
    _Bool _isAllRated;
    _Bool _isOrderRateable;
    _Bool _withinRateTime;
    _Bool _isMandatoryFieldsRated;
    _Bool _isNewRestaurant;
    _Bool _hasRatedTime;
    _Bool _hasRatedService;
    _Bool _hasRatedRider;
    _Bool _timeRatedBefore;
    _Bool _serviceRatedBefore;
    _Bool _riderRatedBefore;
    _Bool _failedToGetPointBecauseOfSensitiveWords;
    NSString *_timeSpentText;
    long long _orderRating;
    NSString *_orderRatingText;
    NSString *_orderRatingCreateAt;
    NSString *_orderRatingReplyText;
    NSString *_orderRatingReplyTime;
    long long _orderRatingRecord;
    NSString *_orderRatingTextRecord;
    NSString *_orderRatingRecordCreateAt;
    NSString *_orderRatingReplyTextRecord;
    NSString *_orderRatingReplyTimeRecord;
    long long _riderRating;
    NSString *_riderRatingText;
    long long _ratedPoint;
    long long _totalRatingPoint;
    NSString *_riderIconText;
    UIColor *_riderIconColor;
    NSString *_deliveryTypeDesc;
    NSString *_createdAtDesc;
    NSString *_pointExplainURL;
    NSString *_restaurantID;
    NSString *_restaurantName;
    long long _timeSpent;
    NSArray *_orderItems;
    NSArray *_riderRatingLabels;
    NSArray *_serviceRatingLabels;
    NSArray *_riderLabelsToRate;
    NSArray *_serviceLabelsToRate;
    NSArray *_deliverTimes;
    NSArray *_photos;
    NSArray *_riderLabelsOne;
    NSArray *_riderLabelsTwo;
    NSArray *_riderLabelsThree;
    NSArray *_riderLabelsFour;
    NSArray *_riderLabelsFive;
    NSArray *_riderLabels;
    NSArray *_serviceLabelsOne;
    NSArray *_serviceLabelsTwo;
    NSArray *_serviceLabelsThree;
    NSArray *_serviceLabelsFour;
    NSArray *_serviceLabelsFive;
    NSArray *_serviceLabels;
    NSString *_restaurantImageURL;
    NSString *_riderImageURL;
}

+ (id)deliverTimesJSONTransformer;
+ (id)riderLabelsFiveJSONTransformer;
+ (id)riderLabelsFourJSONTransformer;
+ (id)riderLabelsThreeJSONTransformer;
+ (id)riderLabelsTwoJSONTransformer;
+ (id)riderLabelsOneJSONTransformer;
+ (id)orderItemsJSONTransformer;
+ (id)riderIconColorJSONTransformer;
+ (id)photosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *riderImageURL; // @synthesize riderImageURL=_riderImageURL;
@property(copy, nonatomic) NSString *restaurantImageURL; // @synthesize restaurantImageURL=_restaurantImageURL;
@property(copy, nonatomic) NSArray *serviceLabels; // @synthesize serviceLabels=_serviceLabels;
@property(copy, nonatomic) NSArray *serviceLabelsFive; // @synthesize serviceLabelsFive=_serviceLabelsFive;
@property(copy, nonatomic) NSArray *serviceLabelsFour; // @synthesize serviceLabelsFour=_serviceLabelsFour;
@property(copy, nonatomic) NSArray *serviceLabelsThree; // @synthesize serviceLabelsThree=_serviceLabelsThree;
@property(copy, nonatomic) NSArray *serviceLabelsTwo; // @synthesize serviceLabelsTwo=_serviceLabelsTwo;
@property(copy, nonatomic) NSArray *serviceLabelsOne; // @synthesize serviceLabelsOne=_serviceLabelsOne;
@property(copy, nonatomic) NSArray *riderLabels; // @synthesize riderLabels=_riderLabels;
@property(copy, nonatomic) NSArray *riderLabelsFive; // @synthesize riderLabelsFive=_riderLabelsFive;
@property(copy, nonatomic) NSArray *riderLabelsFour; // @synthesize riderLabelsFour=_riderLabelsFour;
@property(copy, nonatomic) NSArray *riderLabelsThree; // @synthesize riderLabelsThree=_riderLabelsThree;
@property(copy, nonatomic) NSArray *riderLabelsTwo; // @synthesize riderLabelsTwo=_riderLabelsTwo;
@property(copy, nonatomic) NSArray *riderLabelsOne; // @synthesize riderLabelsOne=_riderLabelsOne;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(readonly, nonatomic) _Bool failedToGetPointBecauseOfSensitiveWords; // @synthesize failedToGetPointBecauseOfSensitiveWords=_failedToGetPointBecauseOfSensitiveWords;
@property(nonatomic) _Bool riderRatedBefore; // @synthesize riderRatedBefore=_riderRatedBefore;
@property(nonatomic) _Bool serviceRatedBefore; // @synthesize serviceRatedBefore=_serviceRatedBefore;
@property(nonatomic) _Bool timeRatedBefore; // @synthesize timeRatedBefore=_timeRatedBefore;
@property(nonatomic) _Bool hasRatedRider; // @synthesize hasRatedRider=_hasRatedRider;
@property(nonatomic) _Bool hasRatedService; // @synthesize hasRatedService=_hasRatedService;
@property(nonatomic) _Bool hasRatedTime; // @synthesize hasRatedTime=_hasRatedTime;
@property(copy, nonatomic) NSArray *deliverTimes; // @synthesize deliverTimes=_deliverTimes;
@property(copy, nonatomic) NSArray *serviceLabelsToRate; // @synthesize serviceLabelsToRate=_serviceLabelsToRate;
@property(copy, nonatomic) NSArray *riderLabelsToRate; // @synthesize riderLabelsToRate=_riderLabelsToRate;
@property(copy, nonatomic) NSArray *serviceRatingLabels; // @synthesize serviceRatingLabels=_serviceRatingLabels;
@property(copy, nonatomic) NSArray *riderRatingLabels; // @synthesize riderRatingLabels=_riderRatingLabels;
@property(copy, nonatomic) NSArray *orderItems; // @synthesize orderItems=_orderItems;
@property(nonatomic) long long timeSpent; // @synthesize timeSpent=_timeSpent;
@property(nonatomic) _Bool isNewRestaurant; // @synthesize isNewRestaurant=_isNewRestaurant;
@property(copy, nonatomic) NSString *restaurantName; // @synthesize restaurantName=_restaurantName;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(nonatomic) _Bool isMandatoryFieldsRated; // @synthesize isMandatoryFieldsRated=_isMandatoryFieldsRated;
@property(copy, nonatomic) NSString *pointExplainURL; // @synthesize pointExplainURL=_pointExplainURL;
@property(copy, nonatomic) NSString *createdAtDesc; // @synthesize createdAtDesc=_createdAtDesc;
@property(copy, nonatomic) NSString *deliveryTypeDesc; // @synthesize deliveryTypeDesc=_deliveryTypeDesc;
@property(copy, nonatomic) UIColor *riderIconColor; // @synthesize riderIconColor=_riderIconColor;
@property(copy, nonatomic) NSString *riderIconText; // @synthesize riderIconText=_riderIconText;
@property(nonatomic) long long totalRatingPoint; // @synthesize totalRatingPoint=_totalRatingPoint;
@property(nonatomic) long long ratedPoint; // @synthesize ratedPoint=_ratedPoint;
@property(nonatomic) _Bool withinRateTime; // @synthesize withinRateTime=_withinRateTime;
@property(nonatomic) _Bool isOrderRateable; // @synthesize isOrderRateable=_isOrderRateable;
@property(nonatomic) _Bool isAllRated; // @synthesize isAllRated=_isAllRated;
@property(copy, nonatomic) NSString *riderRatingText; // @synthesize riderRatingText=_riderRatingText;
@property(nonatomic) long long riderRating; // @synthesize riderRating=_riderRating;
@property(nonatomic) _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) _Bool isTimeSpentRateable; // @synthesize isTimeSpentRateable=_isTimeSpentRateable;
@property(nonatomic) _Bool isRiderRateable; // @synthesize isRiderRateable=_isRiderRateable;
@property(nonatomic) _Bool isUserFavor; // @synthesize isUserFavor=_isUserFavor;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
@property(copy, nonatomic) NSString *orderRatingReplyTimeRecord; // @synthesize orderRatingReplyTimeRecord=_orderRatingReplyTimeRecord;
@property(copy, nonatomic) NSString *orderRatingReplyTextRecord; // @synthesize orderRatingReplyTextRecord=_orderRatingReplyTextRecord;
@property(copy, nonatomic) NSString *orderRatingRecordCreateAt; // @synthesize orderRatingRecordCreateAt=_orderRatingRecordCreateAt;
@property(copy, nonatomic) NSString *orderRatingTextRecord; // @synthesize orderRatingTextRecord=_orderRatingTextRecord;
@property(nonatomic) long long orderRatingRecord; // @synthesize orderRatingRecord=_orderRatingRecord;
@property(copy, nonatomic) NSString *orderRatingReplyTime; // @synthesize orderRatingReplyTime=_orderRatingReplyTime;
@property(copy, nonatomic) NSString *orderRatingReplyText; // @synthesize orderRatingReplyText=_orderRatingReplyText;
@property(copy, nonatomic) NSString *orderRatingCreateAt; // @synthesize orderRatingCreateAt=_orderRatingCreateAt;
@property(copy, nonatomic) NSString *orderRatingText; // @synthesize orderRatingText=_orderRatingText;
@property(nonatomic) long long orderRating; // @synthesize orderRating=_orderRating;
@property(copy, nonatomic) NSString *timeSpentText; // @synthesize timeSpentText=_timeSpentText;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canUploadPhoto;
- (_Bool)isFiveStar;
- (id)defaultRiderImageURL;
- (id)defaultRestaurantImageURL;
- (id)ratingPointsDescription;
- (_Bool)validateItemsText;
- (_Bool)validateServiceText:(id *)arg1;
- (_Bool)validateRateStatus:(id *)arg1;
- (_Bool)validateForNegativeComment:(id *)arg1;
- (id)remindLabelText;
- (_Bool)stillNeedsToRateRider;
- (id)serviceLabelsForRank:(long long)arg1;
- (id)riderLabelsForRank:(long long)arg1;
- (id)riderLabelModelToRate;
- (id)ratingOrderItems;
- (id)ratedOrderItems;
- (id)unratedOrderItems;
- (id)rateableOrderItems;
- (id)defaultDeliverTime;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
