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

@interface NMGenderPickerView : NMPickerDimmView <NMPickerToolBarDelegate, UIPickerViewDataSource, UIPickerViewDelegate>
{
    NMPickerToolBar *_toolBar;
    UIPickerView *_picker;
    NSArray *_genderData;
    NSString *_gender;
    id <NMGenderPickerViewDelegate> delegate;
}

@property(nonatomic) id <NMGenderPickerViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSArray *genderData; // @synthesize genderData=_genderData;
@property(retain, nonatomic) UIPickerView *picker; // @synthesize picker=_picker;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerCancel:(id)arg1;
- (void)pickerDone:(id)arg1;
- (void)setSelected;
- (id)initWithGender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

