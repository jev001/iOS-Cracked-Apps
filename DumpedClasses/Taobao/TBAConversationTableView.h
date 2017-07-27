//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSIndexPath, NSMutableArray, NSString, UITableView, UITextField;

@interface TBAConversationTableView : UIView <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    UITextField *_userEditor;
    NSIndexPath *_indexPathOfEditingCell;
    double _keyBoardHiddingDuration;
    NSString *_oldTextString;
    NSMutableArray *_messageList;
    UITableView *_conversationList;
    id <MessageCellEditorProtocol> _delegate;
}

@property(nonatomic) __weak id <MessageCellEditorProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *conversationList; // @synthesize conversationList=_conversationList;
@property(retain, nonatomic) NSMutableArray *messageList; // @synthesize messageList=_messageList;
- (void).cxx_destruct;
- (void)tba_keyboardWillShowHide:(id)arg1 isShowing:(_Bool)arg2;
- (void)tba_handleWillHideKeyboardNotification:(id)arg1;
- (void)tba_handleWillShowKeyboardNotification:(id)arg1;
- (void)reloadData;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)scrollToBottom:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateConversationListWithMessage:(id)arg1 end:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
