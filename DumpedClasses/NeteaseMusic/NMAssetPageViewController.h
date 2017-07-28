//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMAssetItemViewControllerDelegate.h"
#import "NMAssetPageBottomViewDelegate.h"
#import "NMAssetPageTopViewDelegate.h"
#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"

@class NMAssetManager, NMAssetPageBottomView, NMAssetPageTopView, NSOperationQueue, NSString, UIImageView, UIPageViewController, UIView, UIWindow;

@interface NMAssetPageViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, NMAssetItemViewControllerDelegate, NMAssetPageBottomViewDelegate, NMAssetPageTopViewDelegate>
{
    UIPageViewController *_pageViewController;
    _Bool _uiShown;
    NMAssetManager *_assetManager;
    NMAssetPageTopView *_topView;
    NMAssetPageBottomView *_bottomView;
    UIView *_fakeStatusbar;
    UIWindow *_overlayWindow;
    NSOperationQueue *_loadOriginalImageQueue;
    id <NMAssetPageViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <NMAssetPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)createPageAtIndex:(long long)arg1;
- (void)assetItemViewControllerImageViewClicked:(id)arg1;
- (void)showOrHideUI;
- (void)hideUI;
- (void)showUI;
- (void)updateButtons;
@property(nonatomic) long long pageIndex;
@property(readonly, nonatomic) _Bool statusBarHidden;
- (id)currentPage;
@property(readonly, nonatomic) UIImageView *currentImageView;
- (id)currentItem;
- (id)itemAtIndex:(long long)arg1;
- (void)topViewCheckButtonClicked:(id)arg1;
- (void)topViewBackButtonClicked:(id)arg1;
- (void)bottomViewBackButtonClicked:(id)arg1;
- (void)bottomViewDoneButtonClicked:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithAssetManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

