//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class HotelImageDetailBaseInformationModel, NSString;

@interface HotelCommentImageViewModel : CTBusinessBean
{
    NSString *_imageTitle;
    NSString *_imageCatogory;
    HotelImageDetailBaseInformationModel *_smallImage;
    HotelImageDetailBaseInformationModel *_largeImage;
}

+ (id)changeModel:(id)arg1 configGetter:(id)arg2;
@property(retain, nonatomic) HotelImageDetailBaseInformationModel *largeImage; // @synthesize largeImage=_largeImage;
@property(retain, nonatomic) HotelImageDetailBaseInformationModel *smallImage; // @synthesize smallImage=_smallImage;
@property(retain, nonatomic) NSString *imageCatogory; // @synthesize imageCatogory=_imageCatogory;
@property(retain, nonatomic) NSString *imageTitle; // @synthesize imageTitle=_imageTitle;
- (void).cxx_destruct;
- (id)init;

@end
