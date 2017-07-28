//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class NMContentTagView, UIButton, UIImage, UIImageView, UILabel;

@interface NMDownloadingResourceCell : NMCommonCell
{
    UIImageView *_resourceIconView;
    UIImage *_programImage;
    UIImage *_songImage;
    UIImage *_mvImage;
    UIButton *_deleteButton;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    UIImageView *_progressView;
    UIImageView *_progressBar;
    UIImageView *_failIconView;
    UIImageView *_losslessMarkImageView;
    UIImage *_vipAndLosslessImage;
    UIImage *_vipImage;
    NMContentTagView *_feeRadioTagView;
    double _progressWidth;
    id _resource;
    id <NMDownloadingResourceCellDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) __weak id <NMDownloadingResourceCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id resource; // @synthesize resource=_resource;
- (void).cxx_destruct;
- (void)deleteButtonClicked;
- (void)configCell:(id)arg1 progress:(id)arg2 downloadFailCode:(long long)arg3 state:(unsigned long long)arg4;
- (void)setMV:(id)arg1;
- (void)setDjProgram:(id)arg1;
- (void)setSong:(id)arg1;
- (void)updateVipAndLosslessIcon;
- (void)layoutSubviews;
- (void)hanleChangingTheme:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

