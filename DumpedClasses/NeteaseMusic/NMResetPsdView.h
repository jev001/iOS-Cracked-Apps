//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIGestureRecognizer, UILabel, UITextField;

@interface NMResetPsdView : UIView <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    double _formWidth;
    UILabel *_hintLabel;
    UIView *_formView;
    UITextField *_passwordText;
    UILabel *_upperLabel;
    UIButton *_submitButton;
    id _delegate;
    UIGestureRecognizer *_cancelGesture;
    NSString *_nickname;
    NSString *_hintText;
}

@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) UITextField *passwordText; // @synthesize passwordText=_passwordText;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (void)_refreshViewForSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

