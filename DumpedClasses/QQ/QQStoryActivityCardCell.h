//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QQStoryActivityModel, QQStoryUrlImageView, UIImageView, UILabel, UIView;

@interface QQStoryActivityCardCell : UICollectionViewCell
{
    UIView *_bottomView;
    UILabel *_activityIconLabel;
    UIImageView *_activityIcon;
    UILabel *_activityLabel;
    UILabel *_joinCountLabel;
    QQStoryUrlImageView *_coverView;
    QQStoryActivityModel *_cellModel;
}

- (void)onActionActivityInfoUpdate:(id)arg1;
- (void)setModel:(id)arg1;
- (void)doInitBottomView;
- (void)doInitCover;
- (void)doInitNotification;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
