//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMPlaylistManipulateView;

@protocol NMPlaylistManipulateDelegate <NSObject>

@optional
- (void)deleteDownloadButtonClicked:(NMPlaylistManipulateView *)arg1;
- (void)downloadButtonClicked:(NMPlaylistManipulateView *)arg1;
- (void)removeFromPlaylistButtonClicked:(NMPlaylistManipulateView *)arg1;
- (void)addToPlaylistButtonClicked:(NMPlaylistManipulateView *)arg1;
- (void)playNextButtonClicked:(NMPlaylistManipulateView *)arg1;
@end

