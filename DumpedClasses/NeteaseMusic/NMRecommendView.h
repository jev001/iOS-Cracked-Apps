//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MCSearchBar, MCSearchBarContainerView, UITableView;

@interface NMRecommendView : UIView
{
    UIView *_headerView;
    UITableView *_tableView;
    id _delegate;
    MCSearchBar *_searchBar;
    MCSearchBarContainerView *_searchBarContainer;
}

@property(retain, nonatomic) MCSearchBarContainerView *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
@property(retain, nonatomic) MCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onHeaderSelected:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

