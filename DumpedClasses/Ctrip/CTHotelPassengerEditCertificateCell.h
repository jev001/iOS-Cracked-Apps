//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelPassengersInsEditCell.h"

#import "CTHotelSelectSheetDelegate.h"

@class CTSegmentControl, NSString, UIButton;

@interface CTHotelPassengerEditCertificateCell : CTHotelPassengersInsEditCell <CTHotelSelectSheetDelegate>
{
    CTSegmentControl *segmentCtrl;
    UIButton *btnCard;
}

- (void).cxx_destruct;
- (void)switchCertificateType:(id)arg1;
- (void)setData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
