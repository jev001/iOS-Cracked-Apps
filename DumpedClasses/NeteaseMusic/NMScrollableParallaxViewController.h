//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMScrollableParallaxContentViewControllerDelegate.h"

@class NMScrollTableController, NMScrollableParallaxView, NSString;

@interface NMScrollableParallaxViewController : UIViewController <NMScrollableParallaxContentViewControllerDelegate>
{
    _Bool _tabViewDocked;
    NMScrollTableController *_scrollTableController;
    NMScrollableParallaxView *_parallaxView;
}

@property(nonatomic) _Bool tabViewDocked; // @synthesize tabViewDocked=_tabViewDocked;
@property(retain, nonatomic) NMScrollableParallaxView *parallaxView; // @synthesize parallaxView=_parallaxView;
@property(retain, nonatomic) NMScrollTableController *scrollTableController; // @synthesize scrollTableController=_scrollTableController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)contentViewController:(id)arg1 scrollViewDidScroll:(struct CGPoint)arg2 contentOffset:(struct CGPoint)arg3;
- (void)setTabViewBackgroundColor;
- (void)parallaxViewDidScroll:(struct CGPoint)arg1;
- (void)configureScrollTableController;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

