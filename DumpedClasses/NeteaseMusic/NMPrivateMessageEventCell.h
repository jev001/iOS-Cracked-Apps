//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMPrivateMessageBaseCell.h"

#import "AttributedLableDelegate.h"
#import "NMMenuViewControllerDelegate.h"

@class AttributedLabel, NMPrivateMessageEventButton, NSString, UIImageView, UILongPressGestureRecognizer;

@interface NMPrivateMessageEventCell : NMPrivateMessageBaseCell <NMMenuViewControllerDelegate, AttributedLableDelegate>
{
    double _contentWidth;
    NMPrivateMessageEventButton *_button;
    AttributedLabel *_messageLabel;
    UIImageView *_bubbleImageView;
    UIImageView *_bubbleHighlightImageView;
    UILongPressGestureRecognizer *_longPressRecognizer;
}

+ (id)getMsgBodyObj:(id)arg1;
+ (struct CGSize)textSize:(id)arg1;
+ (double)contentWidth;
+ (double)cellHeight:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)attributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (void)menuWillHide:(id)arg1;
- (void)longPressed:(id)arg1;
- (void)deleteMenuItemPressed:(id)arg1;
- (void)copyMenuItemPressed:(id)arg1;
- (SEL)getMsgBodyAction:(id)arg1;
- (void)contentButtonClicked:(id)arg1;
- (void)configureMessageLabel;
- (void)setDelegate:(id)arg1;
- (void)setPrivateMsg:(id)arg1;
- (void)layoutSubviews;
- (void)handleChangeSkin:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

