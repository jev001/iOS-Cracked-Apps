//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMDjRadio, NMDjRadioBuyButton, NMDjRadioDetailOwnSublistButton, NMDjRadioLastPlayView, NMScrollableTabView, UIActivityIndicatorView, UIButton, UIImage, UILabel;

@interface NMDjRadioDetailHeadView : UIView
{
    UILabel *_nameLabel;
    NMDjRadioBuyButton *_buyButton;
    UIButton *_subButton;
    UILabel *_countLabel;
    UIButton *_orderButton;
    NMDjRadioDetailOwnSublistButton *_subscriberListButton;
    UIButton *_videoButton;
    UIActivityIndicatorView *_waitingView;
    NMScrollableTabView *_tabView;
    UIImage *_subedIcon;
    UIImage *_unsubIcon;
    UIImage *_waitingIcon;
    NMDjRadio *_djRadio;
    id _delegate;
    NMDjRadioLastPlayView *_lastPlayView;
}

+ (double)constCoverHeight;
+ (double)constHeight;
+ (double)subButtonWidth:(id)arg1;
@property(retain, nonatomic) NMDjRadioLastPlayView *lastPlayView; // @synthesize lastPlayView=_lastPlayView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMDjRadio *djRadio; // @synthesize djRadio=_djRadio;
- (void).cxx_destruct;
- (double)currentViewHeight;
- (double)leastViewHeight;
- (void)refreshSubscribe;
- (void)startSubscribeActivity:(_Bool)arg1;
- (void)setIsEditing:(_Bool)arg1;
- (void)setLastPlayProgram:(id)arg1;
- (void)layoutSubviews;
- (void)_refreshViewForSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

