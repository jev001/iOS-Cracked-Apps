//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMImagePickerControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NMSong, NSArray, NSString, UIButton, UIImage, UIImageView, UIScrollView;

@interface NMLyricShareWithImageView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, NMImagePickerControllerDelegate>
{
    UIScrollView *_scrollView;
    UIView *_scrollContainerView;
    UIView *_bgView;
    UIView *_btmView;
    UIImageView *_btmLogoView;
    UIScrollView *_coverScrollView;
    UIImageView *_coverImageView;
    UIButton *_cameraButton;
    long long _coverWidth;
    long long _coverHeight;
    double _btmHeight;
    UIImage *_lyricContentImage;
    NSArray *_lyrics;
    NMSong *_song;
}

@property(retain, nonatomic) NMSong *song; // @synthesize song=_song;
@property(retain, nonatomic) NSArray *lyrics; // @synthesize lyrics=_lyrics;
- (void).cxx_destruct;
- (void)imagePickerControllerDidFinishPickingImages:(id)arg1;
- (void)beginShowChooseImage;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)cameraButtonTouched:(id)arg1;
- (void)scrollToTop;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)lyricContentImage;
- (void)genLyricContentImage;
- (void)generateLyricView;
- (void)layoutImageView;
- (void)layoutSubviews;
- (id)initWithLyrics:(id)arg1 song:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

