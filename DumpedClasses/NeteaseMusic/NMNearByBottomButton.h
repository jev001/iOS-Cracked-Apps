//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMNearBy, UIButton, UILabel;

@interface NMNearByBottomButton : UIView
{
    NMNearBy *_nearBy;
    UIButton *_button;
    UILabel *_listenLabel;
    UILabel *_timeLabel;
}

@property(retain, nonatomic) NMNearBy *nearBy; // @synthesize nearBy=_nearBy;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
