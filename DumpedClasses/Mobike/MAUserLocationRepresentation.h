//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIImage;

@interface MAUserLocationRepresentation : NSObject
{
    _Bool _showsAccuracyRing;
    _Bool _showsHeadingIndicator;
    _Bool _enablePulseAnnimation;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _lineWidth;
    UIColor *_locationDotBgColor;
    UIColor *_locationDotFillColor;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool enablePulseAnnimation; // @synthesize enablePulseAnnimation=_enablePulseAnnimation;
@property(retain, nonatomic) UIColor *locationDotFillColor; // @synthesize locationDotFillColor=_locationDotFillColor;
@property(retain, nonatomic) UIColor *locationDotBgColor; // @synthesize locationDotBgColor=_locationDotBgColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) _Bool showsHeadingIndicator; // @synthesize showsHeadingIndicator=_showsHeadingIndicator;
@property(nonatomic) _Bool showsAccuracyRing; // @synthesize showsAccuracyRing=_showsAccuracyRing;
- (void).cxx_destruct;
- (id)init;

@end
