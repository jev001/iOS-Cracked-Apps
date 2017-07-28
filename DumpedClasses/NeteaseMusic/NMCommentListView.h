//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMEmotionViewDelegate.h"
#import "NMGrowingInputViewDelegate.h"

@class MCLoadMoreTableView, NMEmotionView, NMGrowingInputView, NMTableViewContainer, NSString;

@interface NMCommentListView : UIView <NMGrowingInputViewDelegate, NMEmotionViewDelegate>
{
    struct CGRect _moveToCellFrame;
    NMGrowingInputView *_inputView;
    UIView *_headerView;
    UIView *_footerView;
    NMTableViewContainer *_tableViewContainer;
    _Bool _layoutUseAnimation;
    double _duration;
    _Bool _shouldHideEmotionBoard;
    double _tableViewBottomInset;
    _Bool _hideInputAreaForCollapsing;
    _Bool _needResumeInputComment;
    _Bool _disableAt;
    MCLoadMoreTableView *_tableView;
    id <NMCommentListViewDelegate><UITableViewDataSource><UITableViewDelegate><MCLoadMoreTableFooterViewDelegate> _delegate;
    unsigned long long _lastKeyboardAnimationCurve;
    double _currentKeyboardHeight;
    NMEmotionView *_emotionView;
}

@property(retain, nonatomic) NMEmotionView *emotionView; // @synthesize emotionView=_emotionView;
@property(nonatomic) double currentKeyboardHeight; // @synthesize currentKeyboardHeight=_currentKeyboardHeight;
@property(nonatomic) unsigned long long lastKeyboardAnimationCurve; // @synthesize lastKeyboardAnimationCurve=_lastKeyboardAnimationCurve;
@property(nonatomic) _Bool disableAt; // @synthesize disableAt=_disableAt;
@property(nonatomic) _Bool needResumeInputComment; // @synthesize needResumeInputComment=_needResumeInputComment;
@property(nonatomic) _Bool hideInputAreaForCollapsing; // @synthesize hideInputAreaForCollapsing=_hideInputAreaForCollapsing;
@property(retain, nonatomic) NMGrowingInputView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) id <NMCommentListViewDelegate><UITableViewDataSource><UITableViewDelegate><MCLoadMoreTableFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MCLoadMoreTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reachabilityChanged:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)sendButtonTouchedInEmotionView:(id)arg1;
- (void)inputViewPraiseButtonTouched:(id)arg1;
- (void)inputViewShareButtonTouched:(id)arg1;
- (_Bool)isEmotionBoardShowing;
- (void)inputView:(id)arg1 emotionStateChangedTo:(unsigned long long)arg2;
- (_Bool)inputViewShouldBeginEditing:(id)arg1;
- (void)inputViewDidEndInput:(id)arg1;
- (void)inputViewFinishedInput:(id)arg1;
- (void)inputViewDidBeginInput:(id)arg1;
- (void)inputView:(id)arg1 heightDidChange:(double)arg2;
- (void)inputViewTopicTriggeredByInput:(id)arg1;
- (void)inputViewAtTriggeredByInput:(id)arg1;
- (void)inputViewAtButtonTouched:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1 frame:(struct CGRect)arg2;
- (void)stopObservingKeyboard;
- (void)beginObservingKeyboard;
- (_Bool)isInputFirstResponder;
- (_Bool)resignInputFirstResponder;
- (void)addTopicName:(id)arg1 needAddMask:(_Bool)arg2;
- (void)addAtUserName:(id)arg1 needAddAt:(_Bool)arg2;
- (void)clearInputText;
- (void)setPlaceholder:(id)arg1;
- (void)beginInput:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)beginEnterComment;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clearBottomEdgeInset;
- (void)resetTableViewFooterBottomInset;
- (void)resetCurrentKeyboardHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

