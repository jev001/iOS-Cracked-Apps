//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMScrollableTabViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NMScrollableTabView, NMScrollableTableSwitchPanel, NSArray, NSString, UIViewController<NMScrollableTableControllerProtocol>;

@interface NMScrollTableController : UIViewController <UIScrollViewDelegate, NMScrollableTabViewDelegate>
{
    id <NMScrollTableControllerDelegate> _delegate;
    _Bool _scrollsToTop;
    double _viewWidth;
    double _tabHeight;
    struct UIEdgeInsets _contentEdgeInset;
    unsigned long long _selecetdIndex;
    NMScrollableTableSwitchPanel *_switchPanel;
    NMScrollableTabView *_tabView;
    _Bool _layoutContentBesidesTab;
    NSArray *_viewControllers;
}

+ (double)typicalTabHeight;
@property(nonatomic) _Bool layoutContentBesidesTab; // @synthesize layoutContentBesidesTab=_layoutContentBesidesTab;
@property(nonatomic) _Bool scrollsToTop; // @synthesize scrollsToTop=_scrollsToTop;
@property(readonly, nonatomic) NMScrollableTabView *tabView; // @synthesize tabView=_tabView;
@property(readonly, nonatomic) NMScrollableTableSwitchPanel *switchPanel; // @synthesize switchPanel=_switchPanel;
@property(readonly, nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(readonly, nonatomic) double tabHeight; // @synthesize tabHeight=_tabHeight;
@property(nonatomic) __weak id <NMScrollTableControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentEdgeInset; // @synthesize contentEdgeInset=_contentEdgeInset;
@property(readonly, copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)contentTableViewDidScroll:(struct CGPoint)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollableTabViewSelectionDidChange:(id)arg1;
- (void)scrollableTabViewSelectionWillChange:(id)arg1;
- (void)_addDisappearingViewLog;
@property(nonatomic) _Bool tabSeparatorVisiable; // @dynamic tabSeparatorVisiable;
@property(readonly, nonatomic) UIViewController<NMScrollableTableControllerProtocol> *currentViewController;
@property(nonatomic) unsigned long long selectedIndex; // @dynamic selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setScrollToTopEnable;
- (void)viewWillDisappearAndLogForSubView;
- (void)viewWillAppearAndLogForSubView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithViewControllers:(id)arg1 viewWidth:(double)arg2 tabHeight:(double)arg3;
- (id)initWithViewControllers:(id)arg1 viewWidth:(double)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

