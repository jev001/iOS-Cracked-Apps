//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATPagingViewController.h"

@class NMLyricShareWithImageView, NMLyricShareWithTextView, NMSong, NSArray;

@interface NMLyricPagingViewController : ATPagingViewController
{
    NMLyricShareWithImageView *_shareWithImageView;
    NMLyricShareWithTextView *_shareWithTextView;
    long long _currentPageIndex;
    struct UIEdgeInsets _contentInset;
    id <NMLyricPagingViewControllerDelegate> _delegate;
    NSArray *_lyrics;
    NMSong *_song;
}

@property(retain, nonatomic) NMSong *song; // @synthesize song=_song;
@property(retain, nonatomic) NSArray *lyrics; // @synthesize lyrics=_lyrics;
@property(nonatomic) id <NMLyricPagingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)lyricContentImage;
- (void)currentPageDidChangeInPagingView:(id)arg1;
- (id)viewForPageInPagingView:(id)arg1 atIndex:(long long)arg2;
- (long long)numberOfPagesInPagingView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithLyrics:(id)arg1 song:(id)arg2;

@end

