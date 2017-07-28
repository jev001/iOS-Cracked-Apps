//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class AttributedLabel, NMAvatarView, NMDjRadioHotCommentObj, NSString, UIButton, UILabel, UITapGestureRecognizer;

@interface NMDjRadioDetailHotCommentInnerView : UIView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_tapGesture;
    NMAvatarView *_avatarView;
    UILabel *_nameLabel;
    AttributedLabel *_commentTextLabel;
    UILabel *_sourceLabel;
    UIView *_bottomLine;
    UIButton *_maskButton;
    NMDjRadioHotCommentObj *_commentObj;
    id <NMAvatarViewDelegate><NMDjRadioDetailHotCommentInnerViewDelegate> _delegate;
}

+ (double)heightForData:(id)arg1;
+ (id)_generateAttributedLabel;
@property(nonatomic) __weak id <NMAvatarViewDelegate><NMDjRadioDetailHotCommentInnerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMDjRadioHotCommentObj *commentObj; // @synthesize commentObj=_commentObj;
- (void).cxx_destruct;
- (void)nameLabelTapped:(id)arg1;
- (void)viewTapped:(id)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

