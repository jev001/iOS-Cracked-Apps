//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "NMMVContentViewDelegate.h"

@class NMMVContentView, NSArray, NSString;

@interface NMMVChoiceViewCell : UITableViewCell <NMMVContentViewDelegate>
{
    NMMVContentView *_leftContentView;
    NMMVContentView *_rightContentView;
    unsigned long long _type;
    _Bool _hideDuration;
    NSArray *_MVs;
    id <NMMVChoiceViewCellDelegate> _delegate;
}

+ (double)heightForWidth:(double)arg1 MVs:(id)arg2 type:(unsigned long long)arg3;
+ (double)rightWidthForCellWidth:(double)arg1 leftWidth:(double)arg2;
+ (double)leftWidthForCellWidth:(double)arg1;
@property(nonatomic) __weak id <NMMVChoiceViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hideDuration; // @synthesize hideDuration=_hideDuration;
@property(retain, nonatomic) NSArray *MVs; // @synthesize MVs=_MVs;
- (void).cxx_destruct;
- (void)fillContentView:(id)arg1 withMV:(id)arg2 size:(struct CGSize)arg3;
- (void)mvContentViewTouched:(id)arg1;
- (void)setCellType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithType:(unsigned long long)arg1 reuseIdentifier:(id)arg2 contentClass:(Class)arg3;
- (id)initWithType:(unsigned long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

