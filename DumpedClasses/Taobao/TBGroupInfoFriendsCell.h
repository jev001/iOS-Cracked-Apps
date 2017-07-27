//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TBIMGroupMemberItemViewDelegate.h"

@class NSMutableArray, NSString, TBIMShadowLine;

@interface TBGroupInfoFriendsCell : UITableViewCell <TBIMGroupMemberItemViewDelegate>
{
    _Bool _deleteMemberMode;
    _Bool _canAdd;
    _Bool _canDelete;
    NSMutableArray *_groupMemberViewList;
    id <TBGroupInfoFriendsCellDelegate> _delegate;
    TBIMShadowLine *_shadowLine;
}

+ (double)heightForCell:(long long)arg1 hasAdd:(_Bool)arg2 hasDelete:(_Bool)arg3;
@property(retain, nonatomic) TBIMShadowLine *shadowLine; // @synthesize shadowLine=_shadowLine;
@property(nonatomic) __weak id <TBGroupInfoFriendsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setDeleteMemberMode:(_Bool)arg1;
- (void)clickItemAction:(id)arg1;
- (void)deleteItemAction:(id)arg1;
- (void)layoutItems:(long long)arg1 data:(id)arg2;
- (void)setItemList:(id)arg1 canAdd:(_Bool)arg2 canDelete:(_Bool)arg3;
- (void)initStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
