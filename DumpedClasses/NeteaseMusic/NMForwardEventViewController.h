//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMAtUserPickViewControllerDelegate.h"
#import "NMEmotionViewDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMShareKeyboardHeaderViewDelegate.h"
#import "NMTopicListDelegate.h"
#import "OTFrameObservingViewDelegate.h"
#import "UITextViewDelegate.h"

@class NMEmotionView, NMEvent, NMForwardEventRequest, NMShareKeyboardHeaderView, NSString, UIPlaceHolderTextView;

@interface NMForwardEventViewController : UIViewController <OTFrameObservingViewDelegate, UITextViewDelegate, NMHttpRequestDelegate, NMShareKeyboardHeaderViewDelegate, NMAtUserPickViewControllerDelegate, NMEmotionViewDelegate, NMTopicListDelegate>
{
    UIPlaceHolderTextView *_textView;
    NMShareKeyboardHeaderView *_keyboardHeaderView;
    NMForwardEventRequest *_forwardRequest;
    NSString *_originText;
    _Bool _shouldAnimteAdjustInputBarFrame;
    _Bool _shouldAdjustInputBar;
    _Bool _shouldHideEmotionBoard;
    NMEvent *_forwardingEvent;
    id <NMForwardEventViewControllerDelegate> _delegate;
    double _currentKeyboardHeight;
    NMEmotionView *_emotionView;
}

@property(retain, nonatomic) NMEmotionView *emotionView; // @synthesize emotionView=_emotionView;
@property(nonatomic) double currentKeyboardHeight; // @synthesize currentKeyboardHeight=_currentKeyboardHeight;
@property(nonatomic) id <NMForwardEventViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMEvent *forwardingEvent; // @synthesize forwardingEvent=_forwardingEvent;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (void)keyboardHide:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (void)postButtonClicked:(id)arg1;
- (void)_doBackAction:(id)arg1;
- (void)backAction:(id)arg1;
- (void)sendButtonTouchedInEmotionView:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)topicListViewController:(id)arg1 didSelectTopic:(id)arg2;
- (void)atUserPickViewControllerCanceledPick:(id)arg1;
- (void)atUserPickViewController:(id)arg1 userPicked:(id)arg2;
- (void)shareKeyboardHeaderView:(id)arg1 hideKeyBoardClicked:(id)arg2;
- (void)shareKeyboardHeaderView:(id)arg1 keyboardButtonClicked:(id)arg2;
- (void)_topicListClicked:(id)arg1;
- (void)shareKeyboardHeaderView:(id)arg1 topicButtonClicked:(id)arg2;
- (void)shareKeyboardHeaderView:(id)arg1 emontionButtonClicked:(id)arg2;
- (void)_atButtonClicked:(id)arg1;
- (void)shareKeyboardHeaderView:(id)arg1 atButtonClicked:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)frameChangedInOTFrameObservingView:(id)arg1;
- (void)adjustSubViewsLayout;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithForwardingEvent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

