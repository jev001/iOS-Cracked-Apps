//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMDjProgram, NMMenuDownSide, NSArray;

@interface NMDjDownloadMenu : NSObject
{
    NMMenuDownSide *_menu;
    id <NMDjDownloadMenuDelegate> _delegate;
    NMDjProgram *_djProgram;
    NSArray *_batchJobs;
}

@property(retain, nonatomic) NSArray *batchJobs; // @synthesize batchJobs=_batchJobs;
@property(retain, nonatomic) NMDjProgram *djProgram; // @synthesize djProgram=_djProgram;
@property(nonatomic) id <NMDjDownloadMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showMenu;
- (void)DALogForDownloadIndex:(unsigned long long)arg1;
- (void)_doDownloadDjPrograms;
- (void)checkNetworkAndDownload;
- (void)downloadDjProgram:(id)arg1 index:(unsigned long long)arg2;
- (void)configProperSongFileForPrograms:(id)arg1 menuIndex:(unsigned long long)arg2;
- (long long)bitrateForMenuIndex:(unsigned long long)arg1;
- (void)downloadDjProgramArrayForIndex:(unsigned long long)arg1;
- (id)initWithDjPrograms:(id)arg1;
- (id)initWithDjProgram:(id)arg1;

@end

