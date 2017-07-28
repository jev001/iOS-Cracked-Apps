//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMCheckBoxPanelViewProtocal.h"

@class NMCheckBoxPanelView, NMNicknameView, NSString, OHAttributedLabel, UIButton, UIImageView, UILabel, UIScrollView, UITextField;

@interface NMFirstLoginView : UIView <NMCheckBoxPanelViewProtocal>
{
    UIScrollView *_bgScrollView;
    UIImageView *_logoView;
    UILabel *_noticeLabel;
    NMCheckBoxPanelView *_confirmNoticePanel;
    OHAttributedLabel *_statementLabel;
    id _delegate;
    NMNicknameView *_nicknameView;
    UIButton *_submitButton;
}

@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(readonly, nonatomic) NMNicknameView *nicknameView; // @synthesize nicknameView=_nicknameView;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITextField *nicknameTxt; // @dynamic nicknameTxt;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)setNickname:(id)arg1;
- (id)getNickname;
- (id)checkNicknameValid;
- (void)checkBoxViewStateChanged:(id)arg1;
- (void)_layoutSubmitButton;
- (void)layoutSubviews;
- (_Bool)nicknameViewShouldReceiveTouchForView:(id)arg1;
- (void)shakeNoticeView;
- (void)viewNeedHideNotice;
- (void)viewNeedShowNotice;
- (void)_refreshSubmitButtonState;
- (void)nicknameDidChange;
- (void)keyboardWillHide:(id)arg1;
- (double)maxHeightForView;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)_refreshViewForSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

