//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightTrainListV3InformationModel : CTBusinessBean
{
    int flag;
    NSString *departStationName;
    NSString *arriveStationName;
}

@property(copy, nonatomic) NSString *arriveStationName; // @synthesize arriveStationName;
@property(copy, nonatomic) NSString *departStationName; // @synthesize departStationName;
@property(nonatomic) int flag; // @synthesize flag;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
