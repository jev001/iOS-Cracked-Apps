//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MCSearchBar;

@interface MCSearchBarContainerView : UIView
{
    MCSearchBar *_searchBar;
    UIView *_leftItemView;
    UIView *_rightItemView;
    double _normalHeight;
    _Bool _active;
    _Bool _layoutWithAnimation;
    _Bool _isIOS7;
}

+ (double)typicalHeight;
@property(readonly, nonatomic) double normalHeight; // @synthesize normalHeight=_normalHeight;
@property(retain, nonatomic) UIView *rightItemView; // @synthesize rightItemView=_rightItemView;
@property(retain, nonatomic) UIView *leftItemView; // @synthesize leftItemView=_leftItemView;
@property(readonly, nonatomic) MCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)currentHeight;
- (double)expandHeight;
- (id)initWithSearchBar:(id)arg1 normalHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSearchBarContainerBackgroundColor_nmskin:(id)arg1;
- (void)setBackground;

@end

