//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLEXFieldEditorViewController.h"

#import "FLEXArgumentInputViewDelegate.h"

@class NSString;

@interface FLEXIvarEditorViewController : FLEXFieldEditorViewController <FLEXArgumentInputViewDelegate>
{
    struct objc_ivar *_ivar;
}

+ (_Bool)canEditIvar:(struct objc_ivar *)arg1 currentValue:(id)arg2;
@property(nonatomic) struct objc_ivar *ivar; // @synthesize ivar=_ivar;
- (void)argumentInputViewValueDidChange:(id)arg1;
- (void)actionButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTarget:(id)arg1 ivar:(struct objc_ivar *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

