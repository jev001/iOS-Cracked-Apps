//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMMV, UIImageView, UILabel;

@interface NMMVCoverView : UIView
{
    UIImageView *_bgView;
    UIImageView *_playCountBgView;
    UIImageView *_playIconView;
    UILabel *_playCountLabel;
    UIImageView *_coverView;
    unsigned long long _viewType;
    NMMV *_mv;
}

+ (struct CGSize)coverViewSize:(unsigned long long)arg1;
@property(retain, nonatomic) NMMV *mv; // @synthesize mv=_mv;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithViewType:(unsigned long long)arg1;

@end

