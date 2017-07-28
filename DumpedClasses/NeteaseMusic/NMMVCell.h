//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

#import "NMCheckBoxDelegate.h"

@class NMCheckBox, NMMV, NMMVCoverView, UIButton, UIImage, UIImageView, UILabel;

@interface NMMVCell : NMCommonCell <NMCheckBoxDelegate>
{
    UIImage *_doneImage;
    UIImage *_waitImage;
    UIImage *_failImage;
    id <NMMVCellManagementDelegate> _delegate;
    NMMV *_mv;
    unsigned long long _type;
    NMCheckBox *_checkBox;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    UIImageView *_imgIcon;
    NMMVCoverView *_imgIconMask;
    UIButton *_deleteButton;
    UIImageView *_downStateImage;
    UIImageView *_downProgressBGView;
    UIImageView *_downProgressView;
    UILabel *_progressLabel;
}

+ (double)height;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIImageView *downProgressView; // @synthesize downProgressView=_downProgressView;
@property(retain, nonatomic) UIImageView *downProgressBGView; // @synthesize downProgressBGView=_downProgressBGView;
@property(retain, nonatomic) UIImageView *downStateImage; // @synthesize downStateImage=_downStateImage;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) NMMVCoverView *imgIconMask; // @synthesize imgIconMask=_imgIconMask;
@property(retain, nonatomic) UIImageView *imgIcon; // @synthesize imgIcon=_imgIcon;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NMCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NMMV *mv; // @synthesize mv=_mv;
@property(nonatomic) id <NMMVCellManagementDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)exitMultipleSelect;
- (void)enterMultipleSelect;
- (void)mvCellDeleteDownloadButtonClicked:(id)arg1;
- (void)checkBox:(id)arg1 checked:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateStateIcon;
- (void)handleChangingTheme:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

