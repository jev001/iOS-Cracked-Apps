//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActionSheet.h"

#import "UIActionSheetDelegate.h"

@class NSString;

@interface UIActionSheet (Blocks) <UIActionSheetDelegate>
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType dismissalAction;
- (long long)addButtonItem:(id)arg1;
- (id)initWithTitle:(id)arg1 cancelButtonItem:(id)arg2 destructiveButtonItem:(id)arg3 otherButtonItemsInArray:(id)arg4;
- (id)initWithTitle:(id)arg1 cancelButtonItem:(id)arg2 destructiveButtonItem:(id)arg3 otherButtonItems:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

