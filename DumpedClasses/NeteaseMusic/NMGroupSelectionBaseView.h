//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMArtist, NSArray;

@interface NMGroupSelectionBaseView : UIView
{
    _Bool _forbidChoosePasser;
    NSArray *_playerGroupArray;
    id <NMGroupSelectionBaseViewDelegate> _delegate;
    NMArtist *_supportedArtist;
}

@property(nonatomic) _Bool forbidChoosePasser; // @synthesize forbidChoosePasser=_forbidChoosePasser;
@property(retain, nonatomic) NMArtist *supportedArtist; // @synthesize supportedArtist=_supportedArtist;
@property(nonatomic) __weak id <NMGroupSelectionBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *playerGroupArray; // @synthesize playerGroupArray=_playerGroupArray;
- (void).cxx_destruct;
- (void)hideGroupSelectionView;
- (void)showGroupSelectionView;
- (id)initWithPlayerGroupArray:(id)arg1;

@end

