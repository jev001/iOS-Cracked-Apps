//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMRmdActivity, UIViewController;

@protocol NMTopicListDelegate <NSObject>
- (void)topicListViewController:(UIViewController *)arg1 didSelectTopic:(NMRmdActivity *)arg2;

@optional
- (void)topicListSelectionCanceled:(UIViewController *)arg1;
@end

