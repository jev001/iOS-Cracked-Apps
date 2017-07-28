//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CMScrollIndexBar, MCSearchBar, MCSearchBarContainerView, NMIpodHeaderView, NMPlayAllSectionButton, NMTableViewContainer, UIButton, UITableView;

@interface NMIpodMusicListView : UIView
{
    UIView *_headerView;
    NMTableViewContainer *_tableViewContainer;
    UITableView *_tableView;
    UIButton *_playAll;
    NMIpodHeaderView *_ipodHeaderView;
    id _delegate;
    CMScrollIndexBar *_indexBar;
    NMPlayAllSectionButton *_fakePlayAllButton;
    MCSearchBar *_searchBar;
    MCSearchBarContainerView *_searchBarContainer;
}

+ (double)searchHeight;
@property(retain, nonatomic) MCSearchBarContainerView *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
@property(retain, nonatomic) MCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NMPlayAllSectionButton *fakePlayAllButton; // @synthesize fakePlayAllButton=_fakePlayAllButton;
@property(retain, nonatomic) CMScrollIndexBar *indexBar; // @synthesize indexBar=_indexBar;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMIpodHeaderView *ipodHeaderView; // @synthesize ipodHeaderView=_ipodHeaderView;
@property(retain, nonatomic) UIButton *playAll; // @synthesize playAll=_playAll;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)switchView:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

