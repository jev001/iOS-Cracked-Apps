//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, UITableView;

@interface CTCountryPhoneCodeViewController : CTRootViewController
{
    _Bool _needSMS;
    id <CTCountryPhoneCodeDelegate> _delegate;
    NSString *_selectedCountry;
    NSString *_selectedCountryCode;
    NSMutableDictionary *_modelDic;
    NSArray *_indexArray;
    UITableView *_tableView;
    NSIndexPath *_selectedIndex;
}

@property(retain, nonatomic) NSIndexPath *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *indexArray; // @synthesize indexArray=_indexArray;
@property(retain, nonatomic) NSMutableDictionary *modelDic; // @synthesize modelDic=_modelDic;
@property(nonatomic) _Bool needSMS; // @synthesize needSMS=_needSMS;
@property(retain, nonatomic) NSString *selectedCountryCode; // @synthesize selectedCountryCode=_selectedCountryCode;
@property(retain, nonatomic) NSString *selectedCountry; // @synthesize selectedCountry=_selectedCountry;
@property(nonatomic) __weak id <CTCountryPhoneCodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)applyNavigationBarStyle;
- (void)back:(id)arg1;
- (void)configCell:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)initView;
- (void)initModelsWithDictionary:(id)arg1;
- (void)initData;
- (void)viewDidLoad;

@end
