//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"

@class NSMutableArray, NSString, UIActionSheet;

@interface NMHostSwitchPopover : NSObject <UIActionSheetDelegate>
{
    NSMutableArray *_titleArray;
    NSMutableArray *_userInfoArray;
    UIActionSheet *_actionSheet;
    id <NMHostSwitchPopoverDelegate> _delegate;
}

@property(nonatomic) __weak id <NMHostSwitchPopoverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dismiss;
- (void)showWithCurrentHostTitle:(id)arg1;
- (void)addTitle:(id)arg1 userInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

