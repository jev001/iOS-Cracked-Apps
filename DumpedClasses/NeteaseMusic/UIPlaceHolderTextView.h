//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UIColor, UILabel;

@interface UIPlaceHolderTextView : UITextView
{
    NSString *placeholder;
    UIColor *placeholderColor;
    UILabel *placeHolderLabel;
}

@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel;
- (void)drawRect:(struct CGRect)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)textChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

