//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class NSArray;

@interface GPUImageToneCurveFilter : GPUImageFilter
{
    int toneCurveTextureUniform;
    unsigned int toneCurveTexture;
    char *toneCurveByteArray;
    NSArray *_redCurve;
    NSArray *_greenCurve;
    NSArray *_blueCurve;
    NSArray *_rgbCompositeCurve;
    NSArray *_rgbCompositeControlPoints;
    NSArray *_redControlPoints;
    NSArray *_greenControlPoints;
    NSArray *_blueControlPoints;
}

@property(copy, nonatomic) NSArray *blueControlPoints; // @synthesize blueControlPoints=_blueControlPoints;
@property(copy, nonatomic) NSArray *greenControlPoints; // @synthesize greenControlPoints=_greenControlPoints;
@property(copy, nonatomic) NSArray *redControlPoints; // @synthesize redControlPoints=_redControlPoints;
@property(copy, nonatomic) NSArray *rgbCompositeControlPoints; // @synthesize rgbCompositeControlPoints=_rgbCompositeControlPoints;
- (void).cxx_destruct;
- (void)setRGBControlPoints:(id)arg1;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2 sourceTexture:(unsigned int)arg3;
- (void)updateToneCurveTexture;
- (id)secondDerivative:(id)arg1;
- (id)splineCurve:(id)arg1;
- (id)getPreparedSplineCurve:(id)arg1;
- (void)dealloc;
- (void)setPointsWithACVURL:(id)arg1;
- (void)setPointsWithACV:(id)arg1;
- (id)initWithACVURL:(id)arg1;
- (id)initWithACV:(id)arg1;
- (id)initWithACVData:(id)arg1;
- (id)init;

@end
