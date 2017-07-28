//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMSong, UIButton, UIImageView, UILabel;

@interface NMSongHeaderView : UIView
{
    UIButton *_button;
    UIImageView *_coverImageView;
    UIImageView *_maskImageView;
    UIImageView *_artistIconImageView;
    UILabel *_nameLabel;
    UILabel *_otherLabel;
    id _delegate;
    NMSong *_song;
}

@property(retain, nonatomic) NMSong *song; // @synthesize song=_song;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

