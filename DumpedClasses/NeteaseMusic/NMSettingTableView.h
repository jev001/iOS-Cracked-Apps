//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NMSettingHeaderFooterView;

@interface NMSettingTableView : UITableView
{
    NMSettingHeaderFooterView *_backgroundHeaderView;
    NMSettingHeaderFooterView *_backgroundFooterView;
    NMSettingHeaderFooterView *_defaultFooterView;
}

- (void).cxx_destruct;
- (void)setTableFooterView:(id)arg1;
- (void)setBackgroundHeaderViewHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

