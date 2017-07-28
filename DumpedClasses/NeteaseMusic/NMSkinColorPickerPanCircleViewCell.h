//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "NMSkinColorPickerCellProtocol.h"

@class NSString, UIColor, UIView;

@interface NMSkinColorPickerPanCircleViewCell : UITableViewCell <NMSkinColorPickerCellProtocol>
{
    _Bool _choosed;
    UIColor *_foreColor;
    UIView *_markBorder;
    UIView *_circleView;
}

+ (double)cellHeight;
+ (double)circleBorderDimension;
+ (double)circleColorDimension;
+ (double)markBorderDimension;
+ (double)markColorDimension;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIView *markBorder; // @synthesize markBorder=_markBorder;
@property(nonatomic) _Bool choosed; // @synthesize choosed=_choosed;
@property(retain, nonatomic) UIColor *foreColor; // @synthesize foreColor=_foreColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

