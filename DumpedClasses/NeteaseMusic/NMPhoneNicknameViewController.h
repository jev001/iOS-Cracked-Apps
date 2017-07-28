//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMScreenShotProtocol.h"
#import "OHAttributedLabelDelegate.h"

@class NSDictionary, NSString;

@interface NMPhoneNicknameViewController : UIViewController <OHAttributedLabelDelegate, NMScreenShotProtocol>
{
    NSString *_phoneNumber;
    NSString *_password;
    NSString *_capthca;
    _Bool _notifyRegister;
}

@property(nonatomic) _Bool notifyRegister; // @synthesize notifyRegister=_notifyRegister;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool notNeedShowShareMenu;
- (void)feedback:(id)arg1;
- (void)submitButtonClicked:(id)arg1;
- (void)_logBackActionBI;
- (void)navigationPopByGesture:(id)arg1;
- (void)backAction:(id)arg1;
- (_Bool)attributedLabel:(id)arg1 shouldFollowLink:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)phoneNicknameView;
- (void)dealloc;
- (id)initWithPhoneNumber:(id)arg1 password:(id)arg2 capthca:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *screenShotLogParams;
@property(readonly) Class superclass;

@end

