//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NMOfflineMusicPackageAccessService : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)deleteDownloadRecordsWithIds:(id)arg1 databaseQueue:(id)arg2;
- (_Bool)addOrUpdateTracks:(id)arg1 databaseQueue:(id)arg2;
- (id)loadAllTracks:(id)arg1;
- (id)getOfflineSongInfo:(id)arg1 databaseQueue:(id)arg2;

@end

