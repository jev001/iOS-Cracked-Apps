//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CADisplayLink, NSCondition, NSMutableArray, NSString, NSThread;

@interface InsightARViewController : UIViewController
{
    NSString *_configPath;
    NSString *_rootPath;
    NSString *_scriptName;
    CDUnknownBlockType _pickCallback;
    CDUnknownBlockType _updateARBlock;
    _Bool bFirstAddBgfx;
    struct IApp *_app;
    _Bool bRotationPI_2;
    CADisplayLink *m_displayLink;
    NSThread *workerThread;
    NSCondition *queueCondition;
    NSMutableArray *blockQueue;
    struct InsightARResult g_res;
}

- (void)stopInsightAR;
- (void)showModel;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)getMarkerName;
- (void)processARResult:(struct InsightARResult)arg1;
- (void)initInsightAR;
- (void)pickedCallback:(const char *)arg1;
- (void)startInsightAR:(id)arg1 andModel:(id)arg2 updateARBlock:(CDUnknownBlockType)arg3 pickCallback:(CDUnknownBlockType)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResign;
- (void)loadView;

@end

