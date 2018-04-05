//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "STPAddressFieldTableViewCellDelegate-Protocol.h"
#import "STPAddressViewModelDelegate-Protocol.h"
#import "STPPaymentCardTextFieldDelegate-Protocol.h"
#import "STPRememberMePaymentCellDelegate-Protocol.h"
#import "STPSMSCodeViewControllerDelegate-Protocol.h"
#import "STPSwitchTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, STPAPIClient, STPAddressFieldTableViewCell, STPAddressViewModel, STPCard, STPCheckoutAPIClient, STPCheckoutAccount, STPCheckoutAccountLookup, STPPaymentActivityIndicatorView, STPPaymentConfiguration, STPRememberMeEmailCell, STPRememberMePaymentCell, STPRememberMeTermsView, STPSwitchTableViewCell, STPTheme, STPUserInformation, UIBarButtonItem, UIImageView, UITableView, UIToolbar;
@protocol STPAddCardViewControllerDelegate;

@interface STPAddCardViewController : UIViewController <STPPaymentCardTextFieldDelegate, STPAddressViewModelDelegate, STPAddressFieldTableViewCellDelegate, STPSwitchTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource, STPSMSCodeViewControllerDelegate, STPRememberMePaymentCellDelegate>
{
    _Bool _loading;
    _Bool _lookupSucceeded;
    id <STPAddCardViewControllerDelegate> _delegate;
    STPUserInformation *_prefilledInformation;
    NSString *_managedAccountCurrency;
    STPPaymentConfiguration *_configuration;
    STPTheme *_theme;
    STPAPIClient *_apiClient;
    UITableView *_tableView;
    UIImageView *_cardImageView;
    UIBarButtonItem *_doneItem;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_cancelItem;
    STPRememberMeEmailCell *_emailCell;
    STPSwitchTableViewCell *_rememberMeCell;
    STPAddressFieldTableViewCell *_rememberMePhoneCell;
    STPRememberMePaymentCell *_paymentCell;
    STPPaymentActivityIndicatorView *_activityIndicator;
    STPPaymentActivityIndicatorView *_lookupActivityIndicator;
    STPAddressViewModel *_addressViewModel;
    UIToolbar *_inputAccessoryToolbar;
    STPCheckoutAPIClient *_checkoutAPIClient;
    STPCheckoutAccount *_checkoutAccount;
    STPCheckoutAccountLookup *_checkoutLookup;
    STPCard *_checkoutAccountCard;
    STPRememberMeTermsView *_rememberMeTermsView;
}

@property(retain, nonatomic) STPRememberMeTermsView *rememberMeTermsView; // @synthesize rememberMeTermsView=_rememberMeTermsView;
@property(nonatomic) _Bool lookupSucceeded; // @synthesize lookupSucceeded=_lookupSucceeded;
@property(retain, nonatomic) STPCard *checkoutAccountCard; // @synthesize checkoutAccountCard=_checkoutAccountCard;
@property(retain, nonatomic) STPCheckoutAccountLookup *checkoutLookup; // @synthesize checkoutLookup=_checkoutLookup;
@property(retain, nonatomic) STPCheckoutAccount *checkoutAccount; // @synthesize checkoutAccount=_checkoutAccount;
@property(retain, nonatomic) STPCheckoutAPIClient *checkoutAPIClient; // @synthesize checkoutAPIClient=_checkoutAPIClient;
@property(retain, nonatomic) UIToolbar *inputAccessoryToolbar; // @synthesize inputAccessoryToolbar=_inputAccessoryToolbar;
@property(retain, nonatomic) STPAddressViewModel *addressViewModel; // @synthesize addressViewModel=_addressViewModel;
@property(nonatomic) __weak STPPaymentActivityIndicatorView *lookupActivityIndicator; // @synthesize lookupActivityIndicator=_lookupActivityIndicator;
@property(retain, nonatomic) STPPaymentActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) STPRememberMePaymentCell *paymentCell; // @synthesize paymentCell=_paymentCell;
@property(retain, nonatomic) STPAddressFieldTableViewCell *rememberMePhoneCell; // @synthesize rememberMePhoneCell=_rememberMePhoneCell;
@property(retain, nonatomic) STPSwitchTableViewCell *rememberMeCell; // @synthesize rememberMeCell=_rememberMeCell;
@property(retain, nonatomic) STPRememberMeEmailCell *emailCell; // @synthesize emailCell=_emailCell;
@property(retain, nonatomic) UIBarButtonItem *cancelItem; // @synthesize cancelItem=_cancelItem;
@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
@property(retain, nonatomic) UIBarButtonItem *doneItem; // @synthesize doneItem=_doneItem;
@property(nonatomic) __weak UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) STPAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(retain, nonatomic) STPTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) STPPaymentConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSString *managedAccountCurrency; // @synthesize managedAccountCurrency=_managedAccountCurrency;
@property(retain, nonatomic) STPUserInformation *prefilledInformation; // @synthesize prefilledInformation=_prefilledInformation;
@property(nonatomic) __weak id <STPAddCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadRememberMeCellAnimated:(_Bool)arg1;
- (void)switchTableViewCell:(id)arg1 didToggleSwitch:(_Bool)arg2;
- (void)addressFieldTableViewCellDidBackspaceOnEmpty:(id)arg1;
- (void)lookupAndSendSMS:(id)arg1;
- (void)addressFieldTableViewCellDidUpdateText:(id)arg1;
- (void)addressFieldTableViewCellDidReturn:(id)arg1;
- (void)addressViewModelDidChange:(id)arg1;
- (void)addressViewModel:(id)arg1 removedCellAtIndex:(unsigned long long)arg2;
- (void)addressViewModel:(id)arg1 addedCellAtIndex:(unsigned long long)arg2;
- (void)paymentCardTextFieldDidEndEditingCVC:(id)arg1;
- (void)paymentCardTextFieldDidBeginEditingCVC:(id)arg1;
- (void)paymentFieldNextTapped;
- (void)paymentCardTextFieldDidChange:(id)arg1;
- (void)paymentCellDidClear:(id)arg1;
- (void)smsCodeViewController:(id)arg1 didAuthenticateAccount:(id)arg2;
- (void)smsCodeViewControllerDidCancel:(id)arg1;
- (void)updateDoneButton;
- (void)handleCardTokenError:(id)arg1;
- (void)handleCheckoutTokenError:(id)arg1;
- (void)nextPressed:(id)arg1;
- (void)cancel:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)firstEmptyField;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)updateAppearance;
- (void)endEditing;
- (void)viewDidLoad;
- (void)commonInitWithConfiguration:(id)arg1 theme:(id)arg2;
- (id)initWithConfiguration:(id)arg1 theme:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *addressFieldTableViewCountryCode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

