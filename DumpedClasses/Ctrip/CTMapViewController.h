//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTMapWidgetDelegate.h"

@class CTMapAnnotation, CTMapView, NSArray, NSString;

@interface CTMapViewController : CTRootViewController <CTMapWidgetDelegate>
{
    _Bool _originNavBarStatus;
    CTMapView *_mapView_;
    NSString *_anotationTitle;
    NSString *_anotationSubTitle;
    CTMapAnnotation *_anotation;
    NSArray *_anotationList;
    struct CLLocationCoordinate2D _currentLocation;
    struct CLLocationCoordinate2D _destinationLocation;
}

@property(nonatomic) _Bool originNavBarStatus; // @synthesize originNavBarStatus=_originNavBarStatus;
@property(retain, nonatomic) NSArray *anotationList; // @synthesize anotationList=_anotationList;
@property(retain, nonatomic) CTMapAnnotation *anotation; // @synthesize anotation=_anotation;
@property(copy, nonatomic) NSString *anotationSubTitle; // @synthesize anotationSubTitle=_anotationSubTitle;
@property(copy, nonatomic) NSString *anotationTitle; // @synthesize anotationTitle=_anotationTitle;
@property(nonatomic) struct CLLocationCoordinate2D destinationLocation; // @synthesize destinationLocation=_destinationLocation;
@property(nonatomic) struct CLLocationCoordinate2D currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) CTMapView *mapView_; // @synthesize mapView_=_mapView_;
- (void).cxx_destruct;
- (void)logCallTrace;
- (void)backBarButtonClicked:(id)arg1;
- (void)goBack:(id)arg1;
- (void)annotationSelected:(id)arg1;
- (void)refreshNavigateButton;
- (void)drawDefaultAnotation;
- (void)viewDidUnload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showNavigationBar;
- (void)hideNavigationBar;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)initView;
- (id)initWithAnotationList:(id)arg1;
- (id)initWithAnotation:(id)arg1;
- (id)initWithLocation:(struct CLLocationCoordinate2D)arg1 anotionTitle:(id)arg2 subTitle:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
