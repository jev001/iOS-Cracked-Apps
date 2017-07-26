//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class FlightCityModelForCityList, NSString;

@interface CTFlightMultiSearchViewModel : CTViewModel
{
    long long _tripIndex;
    FlightCityModelForCityList *_departCity;
    FlightCityModelForCityList *_arriveCity;
    NSString *_departDate;
}

@property(copy, nonatomic) NSString *departDate; // @synthesize departDate=_departDate;
@property(retain, nonatomic) FlightCityModelForCityList *arriveCity; // @synthesize arriveCity=_arriveCity;
@property(retain, nonatomic) FlightCityModelForCityList *departCity; // @synthesize departCity=_departCity;
@property(nonatomic) long long tripIndex; // @synthesize tripIndex=_tripIndex;
- (void).cxx_destruct;
- (_Bool)isInlandFlight;
- (void)initData;
- (id)init;

@end
