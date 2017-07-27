//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ANPersistentStrategy : NSObject
{
    NSString *_rootDirectory;
}

@property(retain, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
- (void).cxx_destruct;
- (id)localPathArrayWithDomain:(id)arg1;
- (id)localPath:(id)arg1 version:(id)arg2 domain:(id)arg3;
- (id)localDirectory:(id)arg1 domain:(id)arg2;
- (id)localDirectoryWithRelativePath:(id)arg1;
- (id)localDirectory:(id)arg1 relativePath:(id)arg2;
- (double)timeIntervalOfArchiveTimer;
- (_Bool)shouldArchive:(id)arg1 name:(id)arg2;
- (id)initWithLevel:(unsigned int)arg1;
- (id)init;

@end
