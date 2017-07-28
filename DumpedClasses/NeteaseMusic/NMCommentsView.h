//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AttributedLableDelegate.h"

@class AttributedLabel, NMCommnetsResourceCard, NSObject, NSString, UIButton, UIImage, UIImageView, UILabel;

@interface NMCommentsView : UIView <AttributedLableDelegate>
{
    long long _viewType;
    UIImage *_quoteIcon;
    UIButton *_contentButton;
    UIImageView *_bgImageView;
    UIImageView *_commentsSeperatorImageView;
    AttributedLabel *_sharedCommentsLabel;
    UIImageView *_subCommentSeperatorImageView;
    AttributedLabel *_sharedSubCommentsLabel;
    UILabel *_sourceLabel;
    NMCommnetsResourceCard *_resourceContentButton;
    _Bool _isInPrivateMsg;
    id <NMCommentsViewDelegate> _delegate;
    NSObject *_obj;
}

+ (double)widthForStr:(id)arg1 Font:(id)arg2 LimitedHeight:(double)arg3;
+ (double)heightForStr:(id)arg1 Font:(id)arg2 LimitedWidth:(double)arg3 LineBreakMode:(long long)arg4;
+ (_Bool)validateSharedComments:(id)arg1;
+ (id)sourceDescriptionForComment:(id)arg1;
+ (struct CGRect)contentViewFrameForObject:(id)arg1 Width:(double)arg2 viewType:(long long)arg3;
+ (struct CGRect)contentViewFrameForObject:(id)arg1 Width:(double)arg2;
+ (struct CGRect)contentButtonFrameForObject:(id)arg1 Width:(double)arg2 rectCalculated:(_Bool)arg3 resourceContentButtonRect:(struct CGRect)arg4 commentLabelRect:(struct CGRect)arg5 viewType:(long long)arg6;
+ (struct CGRect)contentButtonFrameForObject:(id)arg1 Width:(double)arg2 rectCalculated:(_Bool)arg3 resourceContentButtonRect:(struct CGRect)arg4 commentLabelRect:(struct CGRect)arg5;
+ (struct CGRect)resourceContentButtonFrameForObject:(id)arg1 Width:(double)arg2 rectCalculated:(_Bool)arg3 commentLabelRect:(struct CGRect)arg4 subCommentLabelRect:(struct CGRect)arg5 viewType:(long long)arg6;
+ (struct CGRect)resourceContentButtonFrameForObject:(id)arg1 Width:(double)arg2 rectCalculated:(_Bool)arg3 commentLabelRect:(struct CGRect)arg4 subCommentLabelRect:(struct CGRect)arg5;
+ (struct CGRect)subCommentSeperatorImageViewFrameForObject:(id)arg1 Width:(double)arg2 rectCalculated:(_Bool)arg3 commentLabelRect:(struct CGRect)arg4 subCommentLabelRect:(struct CGRect)arg5 viewType:(long long)arg6;
+ (struct CGRect)subCommentSeperatorImageViewFrameForObject:(id)arg1 Width:(double)arg2 rectCalculated:(_Bool)arg3 commentLabelRect:(struct CGRect)arg4 subCommentLabelRect:(struct CGRect)arg5;
+ (id)sharedSubCommentsContentForObject:(id)arg1;
+ (struct CGRect)sharedSubCommentsLabelFrameForObject:(id)arg1 Width:(double)arg2 subCommentLabel:(id)arg3 commentLabelRect:(struct CGRect)arg4 viewType:(long long)arg5;
+ (struct CGRect)sharedSubCommentsLabelFrameForObject:(id)arg1 Width:(double)arg2 subCommentLabel:(id)arg3 commentLabelRect:(struct CGRect)arg4;
+ (id)sharedCommentsContentForObject:(id)arg1;
+ (struct CGRect)sharedCommentsLabelFrameForObject:(id)arg1 Width:(double)arg2 commentLabel:(id)arg3 viewType:(long long)arg4;
+ (struct CGRect)sharedCommentsLabelFrameForObject:(id)arg1 Width:(double)arg2 commentLabel:(id)arg3;
+ (struct CGRect)commentsSeperatorImageViewFrameForObject:(id)arg1 Width:(double)arg2;
+ (struct CGRect)viewFrameForComment:(id)arg1 ViewWidth:(double)arg2 viewType:(long long)arg3;
+ (struct CGRect)viewFrameForComment:(id)arg1 ViewWidth:(double)arg2;
+ (struct CGRect)viewFrameForEvent:(id)arg1 ViewWidth:(double)arg2;
@property(nonatomic) _Bool isInPrivateMsg; // @synthesize isInPrivateMsg=_isInPrivateMsg;
@property(retain, nonatomic) NSObject *obj; // @synthesize obj=_obj;
@property(nonatomic) id <NMCommentsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)textColor:(id)arg1;
- (void)setCommentViewAccessibility:(id)arg1;
- (id)commentViewContentAccessibility:(id)arg1;
- (void)userNameTouchedWithUserNickName:(id)arg1;
- (void)topicNameTouched:(id)arg1;
- (void)attributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (void)resourceCardClicked:(id)arg1;
- (void)contentButtonClicked:(id)arg1;
- (void)setNormalStateBackgroundImageColor:(id)arg1;
- (void)setHighlightedStateBackgroundImageColor:(id)arg1;
- (double)layoutViewsWithComment:(id)arg1 ViewWidth:(double)arg2 viewType:(long long)arg3;
- (double)layoutViewsWithComment:(id)arg1 ViewWidth:(double)arg2;
- (double)layoutViewsWithEvent:(id)arg1 ViewWidth:(double)arg2;
- (id)initWithComment:(id)arg1 ViewWidth:(double)arg2;
- (id)initWithEvent:(id)arg1 ViewWidth:(double)arg2;
- (void)setQuoteTintColor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

