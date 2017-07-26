//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTAddressBookDelegate.h"
#import "CTBirthdayPickerDelegate.h"
#import "CTCountryListWidgetDelegate.h"
#import "CTFrequentFlyerViewControllerDelegate.h"
#import "CTPassengerActionSheetDelegate.h"
#import "CTPassengerPopViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CTChineseOperation, CTIDCardScanResult, CTNameOperation, CTPassengerActionSheet, CTPassengerInfoConfirmView, CTPassengerModel, CTPassengerNode, CTPassengerPopView, CTPassengerSelfConfirmView, CTPassportScanResult, CTScannerController, CTSegmentControl, NSArray, NSDate, NSMutableArray, NSSet, NSString, NationModel, UILabel, UISwitch, UITableView, UITextField;

@interface CTPassengerInfoViewController : CTRootViewController <CTAddressBookDelegate, CTCountryListWidgetDelegate, CTBirthdayPickerDelegate, CTPassengerPopViewDelegate, UIAlertViewDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, CTFrequentFlyerViewControllerDelegate, UITextFieldDelegate, CTPassengerActionSheetDelegate>
{
    float _headerHeight;
    float _keyboardHeight;
    _Bool _need4SAdaptation;
    _Bool _isSelf;
    _Bool _saveImmediately;
    CTChineseOperation *_chineseOperation;
    UITextField *_nameTextField;
    UITextField *_surnameTextField;
    UITextField *_givennameTextField;
    CTPassengerInfoConfirmView *_confirmView;
    double _addBegintime;
    double _addEndtime;
    NSArray *_certifiedAList;
    NSArray *_certifiedBList;
    CTPassengerActionSheet *_actionSheet;
    CTPassengerSelfConfirmView *_identifySelfView;
    UISwitch *_isSelfSwitch;
    UILabel *_countryCodeLabel;
    NSString *_countryCode;
    _Bool _showOverseasPhone;
    _Bool _isAdd;
    _Bool _isKeyBoardShowing;
    int _srvType;
    int _curLangType;
    int _datePickSource;
    UITableView *_tableView;
    id <CTPassengerInfoViewControllerDelegate> _delegate;
    NSSet *_filterSets;
    CTPassengerNode *_pNode;
    NSString *_BUKeyWord;
    CTNameOperation *_nameOperation;
    NSMutableArray *_cardOperationArray;
    NSMutableArray *_frequentFlyerCardArray;
    UITextField *_phoneField;
    UILabel *_nationalityLabel;
    NationModel *_currentNationModel;
    UILabel *_birthdayLabel;
    NSDate *_currentBirthday;
    CTSegmentControl *_genderSel;
    unsigned long long _gender;
    CTPassengerModel *_passengerUpdateModel;
    CTPassengerPopView *_popView;
    UITextField *_editingTextField;
    CTScannerController *_OCRScanner;
    CTPassportScanResult *_passportScanResult;
    CTIDCardScanResult *_IDCardScanResult;
    NSDate *_expirationDate;
    UILabel *_expirationDateLabel;
}

+ (id)filterInit:(int)arg1;
@property(retain, nonatomic) UILabel *expirationDateLabel; // @synthesize expirationDateLabel=_expirationDateLabel;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) int datePickSource; // @synthesize datePickSource=_datePickSource;
@property(retain, nonatomic) CTIDCardScanResult *IDCardScanResult; // @synthesize IDCardScanResult=_IDCardScanResult;
@property(retain, nonatomic) CTPassportScanResult *passportScanResult; // @synthesize passportScanResult=_passportScanResult;
@property(retain, nonatomic) CTScannerController *OCRScanner; // @synthesize OCRScanner=_OCRScanner;
@property(nonatomic) UITextField *editingTextField; // @synthesize editingTextField=_editingTextField;
@property(nonatomic) _Bool isKeyBoardShowing; // @synthesize isKeyBoardShowing=_isKeyBoardShowing;
@property(retain, nonatomic) CTPassengerPopView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) CTPassengerModel *passengerUpdateModel; // @synthesize passengerUpdateModel=_passengerUpdateModel;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(retain, nonatomic) CTSegmentControl *genderSel; // @synthesize genderSel=_genderSel;
@property(copy, nonatomic) NSDate *currentBirthday; // @synthesize currentBirthday=_currentBirthday;
@property(retain, nonatomic) UILabel *birthdayLabel; // @synthesize birthdayLabel=_birthdayLabel;
@property(retain, nonatomic) NationModel *currentNationModel; // @synthesize currentNationModel=_currentNationModel;
@property(retain, nonatomic) UILabel *nationalityLabel; // @synthesize nationalityLabel=_nationalityLabel;
@property(retain, nonatomic) UITextField *phoneField; // @synthesize phoneField=_phoneField;
@property(retain, nonatomic) NSMutableArray *frequentFlyerCardArray; // @synthesize frequentFlyerCardArray=_frequentFlyerCardArray;
@property(retain, nonatomic) NSMutableArray *cardOperationArray; // @synthesize cardOperationArray=_cardOperationArray;
@property(retain, nonatomic) CTNameOperation *nameOperation; // @synthesize nameOperation=_nameOperation;
@property(nonatomic) int curLangType; // @synthesize curLangType=_curLangType;
@property(nonatomic) _Bool isAdd; // @synthesize isAdd=_isAdd;
@property(nonatomic) int srvType; // @synthesize srvType=_srvType;
@property(retain, nonatomic) NSString *BUKeyWord; // @synthesize BUKeyWord=_BUKeyWord;
@property(retain, nonatomic) CTPassengerNode *pNode; // @synthesize pNode=_pNode;
@property(retain, nonatomic) NSSet *filterSets; // @synthesize filterSets=_filterSets;
@property(nonatomic) __weak id <CTPassengerInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isStringContainSpaceAndEnCn:(id)arg1;
- (_Bool)isStringOnlyEnCn:(id)arg1;
- (void)autofillPassportScannerModel:(id)arg1;
- (void)autofillIDCardScannerModel:(id)arg1;
- (void)CTIDCardScannerDidFinish:(id)arg1;
- (void)CTPassportScannerDidFinish:(id)arg1;
- (id)FFPData;
- (id)nameForAirLine:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)filterFrequentFlyerCardArray:(id)arg1;
- (void)clickCamera;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)configPhoneCell:(id)arg1;
- (void)configOverseasPhoneCell:(id)arg1;
- (void)setNationalityLabelText:(id)arg1;
- (void)setBirthdayLabelText:(id)arg1;
- (void)layoutAdditionalCardSectionCell:(id)arg1 atIndexPath:(id)arg2 forTableView:(id)arg3;
- (void)layoutCardListCell:(id)arg1 atIndexPath:(id)arg2 forTableView:(id)arg3;
- (void)layoutExpirationDateCell:(id)arg1 atIndexPath:(id)arg2 forTableView:(id)arg3;
- (void)layoutNameSectionCell:(id)arg1 atIndexPath:(id)arg2 forTableView:(id)arg3;
- (void)updateAdditionalInfo;
- (void)updateNationInfoWithCardType:(int)arg1;
- (void)isSelfChanged:(id)arg1;
- (id)cardSwitchSet:(id)arg1;
- (id)cardAddSet;
- (_Bool)isNeedAddCard;
- (void)frequentFlyerCardDelete:(id)arg1;
- (void)frequentFlyerCardAdd:(id)arg1;
- (void)frequentFlyerCardSwitch:(id)arg1;
- (void)cardAdd:(id)arg1;
- (void)cardListSwitch:(id)arg1;
- (void)passengerPopViewDidClosed:(id)arg1;
- (void)passengerPopViewDidSelected:(id)arg1 andType:(id)arg2;
- (id)getNationModel:(id)arg1;
- (id)createBtnWithAction:(SEL)arg1 andImage:(id)arg2;
- (long long)cardListSectionRows;
- (void)save;
- (void)deletePassenger:(id)arg1;
- (void)addressBookDidSelectPerson:(id)arg1;
- (void)didSelectedCountryPhoneCode:(id)arg1;
- (void)birthdayPickerConfirmWithDate:(id)arg1 birthdayPicker:(id)arg2;
- (void)birthdayPickerCancel:(id)arg1;
- (void)countryListWidget:(id)arg1 didSelect:(id)arg2;
- (void)FrequentFlyerViewControllerDidSelected:(id)arg1 andType:(id)arg2;
- (void)selectCountryPhoneCode;
- (long long)genderValue;
- (void)genderSwithChanged:(id)arg1;
- (id)BirthdayString;
- (id)Nationality;
- (id)NationalityString;
- (void)handleNationality;
- (void)handleDatePick:(int)arg1;
- (void)doDispatchAddressBook;
- (void)dispatchAddressBook;
- (void)contactButton:(id)arg1;
- (void)helpButton:(id)arg1;
- (_Bool)needShowScannerBtn;
- (_Bool)compareBLevelCardInfo:(id)arg1;
- (_Bool)validateAdditionalInfoField;
- (_Bool)validateCardListField;
- (_Bool)validateEnName;
- (_Bool)validateCnName;
- (_Bool)validateNameField;
- (_Bool)validatePassengerModelData;
- (void)validateIDCardScanResult;
- (void)validatePassportScanResult;
- (void)tapContentView:(id)arg1;
- (void)updateDataModel:(id)arg1;
- (_Bool)isAddCard;
- (void)fadeInOutView:(id)arg1 willRemoveFromSuperView:(id)arg2 isGoBack:(_Bool)arg3;
- (void)savePassengerInfo;
- (void)savePassengerInfoPreprocess:(id)arg1;
- (void)selfInfoSaveProcess:(id)arg1;
- (void)saveSelfInfo;
- (void)handleTitleBarRightButton:(id)arg1;
- (void)handleTitleBarLeftButton:(id)arg1;
- (void)addCardOperation:(int)arg1;
- (int)defaultCardType;
- (int)highPriorityCardType;
- (void)initCardOperation;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)initView;
- (void)initLocalData;
- (id)createHeaderView:(double)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)configVCForSelfIdentification;
- (id)initWithServiceType:(int)arg1 isAddNew:(_Bool)arg2 passengerInfo:(id)arg3 andDelegate:(id)arg4;
- (id)makeEnNameBy:(id)arg1 eNMiddleName:(id)arg2 eNLastName:(id)arg3;
- (id)createLabel:(id)arg1;
- (id)createFooterView;
- (void)hideKeyboard;
- (void)showToastWithMessage:(id)arg1 andView:(id)arg2;
- (void)showENNameToastWithMessage:(id)arg1 givenName:(id)arg2 familyName:(id)arg3;
- (void)showCNNameToastWithMessage:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
