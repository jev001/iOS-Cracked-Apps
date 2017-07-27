//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface TBLiveFeedCardHeaderView : UIView
{
    id <TBLiveFeedCardHeaderViewDelegate> _delegate;
    unsigned long long _type;
    UILabel *_moreLabel;
    UIButton *_rightIconfont;
}

@property(retain, nonatomic) UIButton *rightIconfont; // @synthesize rightIconfont=_rightIconfont;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <TBLiveFeedCardHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickAction:(id)arg1;
- (id)subTitleWithType:(unsigned long long)arg1;
- (id)mainTitleWithType:(unsigned long long)arg1;
- (id)leftIconImageWithType:(unsigned long long)arg1;
- (id)flagViewWithType:(unsigned long long)arg1;
- (void)updateLayoutConstraints;
- (void)disableUserClick;
- (void)updateSubTitile:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(unsigned long long)arg2 delegate:(id)arg3;

@end
