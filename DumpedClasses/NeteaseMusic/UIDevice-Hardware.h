//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDevice.h"

@interface UIDevice (Hardware)
- (id)macaddress;
- (_Bool)isiPadMini;
- (unsigned long long)deviceFamily;
- (_Bool)hasRetinaDisplay;
- (id)platformString;
- (unsigned long long)platformType;
- (id)freeDiskSpace;
- (unsigned long long)deviceCapacity;
- (id)totalDiskSpace;
- (unsigned long long)maxSocketBufferSize;
- (unsigned long long)availableMemory;
- (unsigned long long)userMemory;
- (_Bool)isMemoryLessThan512;
- (_Bool)isLowMemoryDevice;
- (unsigned long long)totalMemory;
- (unsigned long long)cpuCount;
- (unsigned long long)busFrequency;
- (unsigned long long)cpuFrequency;
- (unsigned long long)getSysInfo:(unsigned int)arg1;
- (id)hwmodel;
- (id)platform;
- (id)getSysInfoByName:(char *)arg1;
@end

