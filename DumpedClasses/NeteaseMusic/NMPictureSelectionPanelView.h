//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMSelectedPictureViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UIImage;

@interface NMPictureSelectionPanelView : UIView <NMSelectedPictureViewDelegate>
{
    UIView *_addPicBtnView;
    UIButton *_addPicBtn;
    NSMutableArray *_selectedPictureViews;
    UIImage *_addPicImgNormal;
    UIImage *_addPicImgPrs;
    UIImage *_addPicImgNightNormal;
    UIImage *_addPicImgNightPrs;
    id <NMPictureSelectionPanelViewDelegate> _delegate;
}

+ (double)heightWithImageCount:(unsigned long long)arg1;
@property(nonatomic) __weak id <NMPictureSelectionPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)selectedPictuerClicked:(id)arg1;
- (void)deleteSelectedPictureClicked:(id)arg1;
- (void)addPicBtnClicked:(id)arg1;
- (void)setSelectedPictures:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)frameAtIndex:(unsigned long long)arg1 padding:(double)arg2;
- (void)_refreshViewForSkin:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

