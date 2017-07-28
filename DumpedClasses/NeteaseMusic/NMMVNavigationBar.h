//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MCMarqueeLabel, NMAirplayButton, NMMV, NSString, UIButton, UIImage;

@interface NMMVNavigationBar : UIView
{
    UIButton *_backBarButton;
    MCMarqueeLabel *_titleLabel;
    UIButton *_subButton;
    UIButton *_downloadButton;
    UIButton *_shareButton;
    UIImage *_mvFavImage;
    UIImage *_mvFavImagePrs;
    UIImage *_mvFavedImage;
    UIImage *_mvFavedImagePrs;
    UIImage *_mvDownloadImage;
    UIImage *_mvDownloadImagePrs;
    UIImage *_mvDownloadedImage;
    UIImage *_mvDownloadedImagePrs;
    NMAirplayButton *_airPlayButton;
    id <NMMVNavigationBarDelegate> _delegate;
    NMMV *_mv;
    NSString *_title;
}

+ (double)height;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NMMV *mv; // @synthesize mv=_mv;
@property(nonatomic) __weak id <NMMVNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloadButtonClicked;
- (void)shareButtonClicked;
- (void)subButtonClicked;
- (void)backButtonClicked;
- (void)updateSubscribeState:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

