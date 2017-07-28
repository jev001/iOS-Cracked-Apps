//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MCSearchBar, MCSearchBarContainerView, NMTableViewContainer, UITableView;

@interface NMInviteContactView : UIView
{
    MCSearchBarContainerView *_searchBarContainer;
    UIView *_bottomLine;
    MCSearchBar *_searchBar;
    UITableView *_tableView;
    NMTableViewContainer *_tableViewContainer;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

