//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@class SSThemedImageView, SSThemedLabel;

@interface TTCertificationInReviewViewController : SSViewControllerBase
{
    SSThemedImageView *_iconView;
    SSThemedLabel *_descLabel;
    SSThemedLabel *_timeLabel;
}

@property(retain, nonatomic) SSThemedLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) SSThemedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) SSThemedImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)themedChange;
- (void)setupSubview;
- (void)viewDidLoad;

@end

