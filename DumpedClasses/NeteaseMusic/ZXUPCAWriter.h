//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ZXWriter.h"

@class NSString;

@interface ZXUPCAWriter : NSObject <ZXWriter>
{
}

- (id)preencode:(id)arg1;
- (id)encode:(id)arg1 format:(int)arg2 width:(int)arg3 height:(int)arg4 hints:(id)arg5 error:(id *)arg6;
- (id)encode:(id)arg1 format:(int)arg2 width:(int)arg3 height:(int)arg4 error:(id *)arg5;
- (id)subWriter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

