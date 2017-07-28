//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMPickerDimmView.h"

#import "NMPickerToolBarDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NMPickerToolBar, NSArray, NSString, UIPickerView;

@interface NMArtistInitialPickerView : NMPickerDimmView <NMPickerToolBarDelegate, UIPickerViewDataSource, UIPickerViewDelegate>
{
    NMPickerToolBar *_toolBar;
    UIPickerView *_picker;
    NSArray *_initials;
    NSString *_initial;
    id <NMArtistInitialPickerViewDelegate> delegate;
}

@property(nonatomic) id <NMArtistInitialPickerViewDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) NSString *initial; // @synthesize initial=_initial;
@property(readonly, nonatomic) NSArray *initials; // @synthesize initials=_initials;
@property(readonly, nonatomic) UIPickerView *picker; // @synthesize picker=_picker;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerCancel:(id)arg1;
- (void)pickerDone:(id)arg1;
- (void)setSelected;
- (void)setInitial:(id)arg1;
- (void)layoutSubviews;
- (id)initWithInitials:(id)arg1 selectedInitial:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

