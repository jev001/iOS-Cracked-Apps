//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImage;

@interface NMGrowingInputViewSwitchEmotionButton : UIView
{
    UIButton *_innerButton;
    _Bool _isThemeSupport;
    UIImage *_emotionImageNight;
    UIImage *_emotiogImageNightPrs;
    UIImage *_keyboardImageNight;
    UIImage *_keyboardImageNightPrs;
    unsigned long long _state;
    id <NMGrowingInputViewSwitchEmotionButtonDelegate> _delegate;
}

@property(nonatomic) __weak id <NMGrowingInputViewSwitchEmotionButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)setStateWithOutCallback:(unsigned long long)arg1;
- (void)innerButtonTouched;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isThemeSupport:(_Bool)arg2;

@end

