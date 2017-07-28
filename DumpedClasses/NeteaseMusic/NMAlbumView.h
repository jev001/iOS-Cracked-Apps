//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMAlbumInfoView, NMParallaxView, NMTableViewContainer, UITableView;

@interface NMAlbumView : UIView
{
    id _delegate;
    NMParallaxView *_parallaxView;
    NMAlbumInfoView *_infoView;
    UITableView *_tableView;
    NMTableViewContainer *_tableViewContainer;
    double _defaultContentInsetTop;
}

@property(readonly, nonatomic) NMParallaxView *parallaxView; // @synthesize parallaxView=_parallaxView;
@property(readonly, nonatomic) NMAlbumInfoView *infoView; // @synthesize infoView=_infoView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)setAdddtionInsetTop:(double)arg1;
- (void)setBackgroundImageIfNeeded;
- (void)setAlbumCoverImage:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

