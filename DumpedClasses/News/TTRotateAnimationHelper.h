//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"

@class CABasicAnimation, NSDate, NSString, UIView;

@interface TTRotateAnimationHelper : NSObject <CAAnimationDelegate>
{
    _Bool _animating;
    CABasicAnimation *_rotateAnimation;
    NSDate *_startDate;
    UIView *_view;
}

@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) CABasicAnimation *rotateAnimation; // @synthesize rotateAnimation=_rotateAnimation;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation:(id)arg1;
- (void)startRotateAnimationForView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

