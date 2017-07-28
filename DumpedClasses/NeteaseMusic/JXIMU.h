//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager;

@interface JXIMU : NSObject
{
    CMMotionManager *_motionManager;
    NSObject *_imuLock;
    struct vector<MMIMU, std::__1::allocator<MMIMU>> _imus;
    struct vector<MMAttitude, std::__1::allocator<MMAttitude>> _attitudes;
    struct vector<MMIMU, std::__1::allocator<MMIMU>> _imusExtract;
    struct vector<MMAttitude, std::__1::allocator<MMAttitude>> _attitudesExtract;
    _Bool bFirstOpenImu;
    float Ratation[3][3];
}

+ (id)shareIMU;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getCoordinaterRatation:(float (*)[3])arg1;
- (struct AttitudeArray)extractAttitudeDataBeforeTime:(double)arg1;
- (struct IMUArray)extractIMUDataBeforeTime:(double)arg1;
- (void)computeIMUworldCoordinate:(id)arg1;
- (void)stop;
- (int)startAsync;
- (int)start;
- (id)init;

@end

