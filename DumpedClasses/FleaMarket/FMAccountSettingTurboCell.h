//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMAccountSettingBaseCell.h"

@class FMImageView, UIButton, UILabel;

@interface FMAccountSettingTurboCell : FMAccountSettingBaseCell
{
    unsigned long long _cellType;
    UIButton *_accessoryButton;
    UILabel *_leftTitleLabel;
    FMImageView *_subImageView;
    id <FMAccountSettingTurboCellAccessoryProtocol> _delegate;
}

@property(nonatomic) __weak id <FMAccountSettingTurboCellAccessoryProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FMImageView *subImageView; // @synthesize subImageView=_subImageView;
- (void).cxx_destruct;
- (void)accessoryButtonClick:(id)arg1;
- (void)setCellType:(unsigned long long)arg1 certified:(_Bool)arg2;
- (void)updateViewConstraints;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
