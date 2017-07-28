//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCLoadMoreTableView.h"

@interface NMScrollableLoadMoreTableView : MCLoadMoreTableView
{
    double _placeHolderHeight;
    struct CGPoint _syncContentOffset;
}

@property(nonatomic) double placeHolderHeight; // @synthesize placeHolderHeight=_placeHolderHeight;
@property(nonatomic) struct CGPoint syncContentOffset; // @synthesize syncContentOffset=_syncContentOffset;
@property(readonly, nonatomic) struct CGPoint maximumSyncContentOffset;
- (_Bool)willScrollToContentInsetTopEdge:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

