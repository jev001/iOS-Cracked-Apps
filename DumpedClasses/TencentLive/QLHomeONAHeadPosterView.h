//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLBasePersonInfoCell, QLJCEActorInfo, QLONAMarksLabel, QLONAPosterImageView;

@interface QLHomeONAHeadPosterView : UIView
{
    QLBasePersonInfoCell *_personInfoView;
    QLONAPosterImageView *_posterImgView;
    QLONAMarksLabel *_titleLabel;
    QLJCEActorInfo *_actorInfo;
}

@property(retain, nonatomic) QLJCEActorInfo *actorInfo; // @synthesize actorInfo=_actorInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHeadPoster:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
