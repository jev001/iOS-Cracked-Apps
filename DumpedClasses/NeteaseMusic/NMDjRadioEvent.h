//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMEvent.h"

@class NMDjRadio, NSString;

@interface NMDjRadioEvent : NMEvent
{
    NMDjRadio *_djRadio;
    NSString *_msg;
}

@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NMDjRadio *djRadio; // @synthesize djRadio=_djRadio;
- (void).cxx_destruct;
- (id)getMainObject;
- (id)getTypeDesc;
- (_Bool)showDetail;
- (id)initWithDictionary:(id)arg1;

@end

