//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIGestureRecognizer, UILabel, UITextField;

@interface NMCustomInputPopView : UIView <UITextFieldDelegate>
{
    UIView *_bgBlurView;
    UIView *_bgView;
    UILabel *_titleLabel;
    UILabel *_noticeLabel;
    UITextField *_inputView;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UIGestureRecognizer *_tapGesture;
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _cancelBlock;
}

+ (struct CGSize)viewSize;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)_bgViewTapped:(id)arg1;
- (void)_cancelBtnClicked:(id)arg1;
- (void)_confirmBtnClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 noticeText:(id)arg2 placeHolderText:(id)arg3 comfirmBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

