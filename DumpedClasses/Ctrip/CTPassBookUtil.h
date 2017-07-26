//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTLoadingViewDelegate.h"
#import "CTPassBookConnection.h"
#import "PKAddPassesViewControllerDelegate.h"

@class NSMutableData, NSString, NSURLConnection, PKAddPassesViewController, UIViewController;

@interface CTPassBookUtil : NSObject <CTPassBookConnection, PKAddPassesViewControllerDelegate, CTLoadingViewDelegate>
{
    PKAddPassesViewController *vc;
    NSMutableData *receiveData;
    NSURLConnection *theConncetion;
    id <CTPassBookConnection> passConnDelegate;
    UIViewController *superVC;
    NSString *passType;
    NSString *serialNumber;
}

@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber;
@property(retain, nonatomic) NSString *passType; // @synthesize passType;
@property(retain, nonatomic) UIViewController *superVC; // @synthesize superVC;
@property(nonatomic) __weak id <CTPassBookConnection> passConnDelegate; // @synthesize passConnDelegate;
- (void).cxx_destruct;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (void)doSelfCTLoadingViewend;
- (void)doSelfCTLoadingViewbegin;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)getConnectionStr:(id)arg1 orderNumber:(id)arg2 flightNumber:(id)arg3;
- (id)getPassByTypeAndSerialNumber:(id)arg1 SerialNumber:(id)arg2;
- (_Bool)removePass:(id)arg1 SerialNumber:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
