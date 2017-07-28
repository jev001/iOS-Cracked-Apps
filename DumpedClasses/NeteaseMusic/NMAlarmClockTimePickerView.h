//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMPickerDimmView.h"

#import "NMPickerToolBarDelegate.h"

@class NMPickerToolBar, NSString, UIDatePicker;

@interface NMAlarmClockTimePickerView : NMPickerDimmView <NMPickerToolBarDelegate>
{
    NMPickerToolBar *_toolBar;
    UIDatePicker *_alarmTimePicker;
    id <NMAlarmClockTimePickerViewDelegate> _delegate;
}

@property(nonatomic) id <NMAlarmClockTimePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIDatePicker *alarmTimePicker; // @synthesize alarmTimePicker=_alarmTimePicker;
- (void).cxx_destruct;
- (void)pickerCancel:(id)arg1;
- (void)pickerDone:(id)arg1;
- (void)layoutSubviews;
- (id)initWithTime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

