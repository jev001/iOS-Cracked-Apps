//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSTimer, UIColor, UIImage, UIImageView, UILabel;

@interface NMPlayUIAlert : UIView
{
    id _delegate;
    UILabel *_label;
    NSTimer *_timer;
    UIImageView *_iconView;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showOnRootView:(id)arg1 originX:(double)arg2 originY:(double)arg3 dismissTime:(double)arg4;
@property(retain, nonatomic) UIImage *icon; // @dynamic icon;
@property(retain, nonatomic) UIColor *shadowColor; // @dynamic shadowColor;
@property(retain, nonatomic) UIColor *textColor; // @dynamic textColor;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

