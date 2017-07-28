//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MRInteractiveTransitionDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class MRInteractiveTransition, MRTransformView, NSString, UIImage, UIView, UIViewController;

@interface MRFlipTransition : NSObject <MRInteractiveTransitionDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _interactivable;
    _Bool _presentAnimation;
    UIImage *_coverImage;
    double _scaleFactor;
    double _easeInExtraDistance;
    UIImage *_contentImage;
    UIViewController *_presentingViewController;
    long long _style;
    MRTransformView *_transformView;
    UIView *_shadowView;
    MRInteractiveTransition *_interactiveTransition;
}

+ (id)contentSnapshot:(id)arg1 afterScreenUpdate:(_Bool)arg2;
@property(retain, nonatomic) MRInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) MRTransformView *transformView; // @synthesize transformView=_transformView;
@property long long style; // @synthesize style=_style;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(getter=isPresentAnimation) _Bool presentAnimation; // @synthesize presentAnimation=_presentAnimation;
@property(retain, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
@property(nonatomic) double easeInExtraDistance; // @synthesize easeInExtraDistance=_easeInExtraDistance;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool interactivable; // @synthesize interactivable=_interactivable;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
- (void).cxx_destruct;
- (void)animateFlipBackLayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateFlipFrontLayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)animateEaseInAnimationWithStartBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)prepareLayersWithCompletionBlock:(CDUnknownBlockType)arg1;
- (double)ratio;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateContentSnapshot:(id)arg1 afterScreenUpdate:(_Bool)arg2;
- (void)startAttractionAnimation;
- (void)autoUpdatePercentFinished:(id)arg1;
- (void)tapped:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissTo:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)present:(id)arg1 from:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

