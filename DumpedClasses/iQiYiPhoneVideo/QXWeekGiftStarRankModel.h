//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QXPluginBaseModel.h"

@class NSArray, NSDictionary, QXWeekStarGiftItem;

@interface QXWeekGiftStarRankModel : QXPluginBaseModel
{
    NSDictionary *_leftAction;
    NSDictionary *_rightAction;
    QXWeekStarGiftItem *_product_info;
    NSArray *_anchor_infos;
    NSArray *_user_infos;
}

@property(retain, nonatomic) NSArray *user_infos; // @synthesize user_infos=_user_infos;
@property(retain, nonatomic) NSArray *anchor_infos; // @synthesize anchor_infos=_anchor_infos;
@property(retain, nonatomic) QXWeekStarGiftItem *product_info; // @synthesize product_info=_product_info;
@property(retain, nonatomic) NSDictionary *rightAction; // @synthesize rightAction=_rightAction;
@property(retain, nonatomic) NSDictionary *leftAction; // @synthesize leftAction=_leftAction;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

