//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MCBlurView, NSString, UIButton, UILabel;

@interface NMEssentialPlaylistHeaderView : UIView
{
    MCBlurView *_bkgView;
    UIButton *_bkgButton;
    UILabel *_categoryLabel;
    UIButton *_categoryButton;
    UIView *_bottomLine;
    NSString *_selectedCategoryTitle;
}

@property(copy, nonatomic) NSString *selectedCategoryTitle; // @synthesize selectedCategoryTitle=_selectedCategoryTitle;
- (void).cxx_destruct;
- (void)addCategoryHandler:(SEL)arg1 target:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

