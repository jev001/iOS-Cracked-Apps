//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBTakeoutNavBaseItem>, NSArray<TBTakeoutSubNavBaseItem>;

@interface TBTakeoutNavFilterModel : TBJSONModel
{
    NSArray<TBTakeoutSubNavBaseItem> *_result;
    NSArray<TBTakeoutNavBaseItem> *_sortList;
    NSArray<TBTakeoutNavBaseItem> *_activityList;
}

@property(retain, nonatomic) NSArray<TBTakeoutNavBaseItem> *activityList; // @synthesize activityList=_activityList;
@property(retain, nonatomic) NSArray<TBTakeoutNavBaseItem> *sortList; // @synthesize sortList=_sortList;
@property(retain, nonatomic) NSArray<TBTakeoutSubNavBaseItem> *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end
