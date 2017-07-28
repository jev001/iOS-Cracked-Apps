//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray;

@interface NMSkinThemeCell : UITableViewCell
{
    NSMutableArray *_contentViewArray;
    _Bool _isEditing;
    _Bool _isSmall;
    id <NMSkinThemeCellDelegate> _delegate;
    double _marginTopPadding;
}

+ (double)heightForContents:(id)arg1;
+ (long long)maxCotentCountForCategory:(id)arg1;
+ (long long)contentCountForOnlineSkin;
+ (double)contentPadding;
@property(nonatomic) _Bool isSmall; // @synthesize isSmall=_isSmall;
@property(nonatomic) double marginTopPadding; // @synthesize marginTopPadding=_marginTopPadding;
@property(nonatomic) __weak id <NMSkinThemeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)deleteDownloadedSkinTheme:(id)arg1;
- (void)coverButtonClicked:(id)arg1;
- (id)contentViewForSkinTheme:(id)arg1;
- (_Bool)containsSkinTheme:(id)arg1;
- (void)setThemes:(id)arg1;
- (void)setIsEditing:(_Bool)arg1;
- (void)setIsManagementStype:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_generateContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

