//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface CommentItemModel : CTBusinessBean
{
    int _groupType;
    int _dataType;
    int _flagBitMap;
    int _pageIndex;
    int _pageTotal;
    int _recordCount;
    NSString *_groupTitle;
    NSString *_pageUrl;
    NSMutableArray *_commentDetailList;
}

@property(retain, nonatomic) NSMutableArray *commentDetailList; // @synthesize commentDetailList=_commentDetailList;
@property(nonatomic) int recordCount; // @synthesize recordCount=_recordCount;
@property(nonatomic) int pageTotal; // @synthesize pageTotal=_pageTotal;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) int flagBitMap; // @synthesize flagBitMap=_flagBitMap;
@property(copy, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
