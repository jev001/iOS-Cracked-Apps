//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMPasswordButton, UIButton, UIImageView, UILabel;

@interface NMBindPhoneView : UIView
{
    id _delegate;
    _Bool _isBind;
    _Bool _isMain;
    double _iconWidth;
    double _iconHeight;
    double _buttonWidth;
    double _titleWidth;
    UIImageView *_iconImage;
    UILabel *_titleLabel;
    UILabel *_phoneNumberLabel;
    UIButton *_bindButton;
    UIButton *_resetPhonePasswordButton;
    NMPasswordButton *_unBindButton;
    UIButton *_setPsdButton;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshAppearence;
- (void)setBind:(_Bool)arg1 main:(_Bool)arg2;
- (void)_refreshViewForSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

