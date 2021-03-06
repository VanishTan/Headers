//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWELiveMyWalletModel, AWEProgressLoadingView, NSMutableArray, NSString, UILabel, UITableViewCell;

@interface AWELiveWalletTableViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, MFMailComposeViewControllerDelegate, BTDRouterViewControllerProtocol>
{
    AWELiveMyWalletModel *_myWalletModel;
    NSMutableArray *_firstSectionHeaderCellArray;
    NSMutableArray *_secondSectionProductsCellArray;
    UITableViewCell *_headerTotalCoinsCell;
    UILabel *_totalCoinsLabel;
    UITableViewCell *_myRewardsCell;
    UILabel *_myRewardsLabel;
    UITableViewCell *_failUnverifiedCell;
    UITableViewCell *_disabledIAPCell;
    UITableViewCell *_parentDeferedCell;
    AWEProgressLoadingView *_progressView;
}

+ (void)load;
@property(retain, nonatomic) AWEProgressLoadingView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITableViewCell *parentDeferedCell; // @synthesize parentDeferedCell=_parentDeferedCell;
@property(retain, nonatomic) UITableViewCell *disabledIAPCell; // @synthesize disabledIAPCell=_disabledIAPCell;
@property(retain, nonatomic) UITableViewCell *failUnverifiedCell; // @synthesize failUnverifiedCell=_failUnverifiedCell;
@property(retain, nonatomic) UILabel *myRewardsLabel; // @synthesize myRewardsLabel=_myRewardsLabel;
@property(retain, nonatomic) UITableViewCell *myRewardsCell; // @synthesize myRewardsCell=_myRewardsCell;
@property(retain, nonatomic) UILabel *totalCoinsLabel; // @synthesize totalCoinsLabel=_totalCoinsLabel;
@property(retain, nonatomic) UITableViewCell *headerTotalCoinsCell; // @synthesize headerTotalCoinsCell=_headerTotalCoinsCell;
@property(retain, nonatomic) NSMutableArray *secondSectionProductsCellArray; // @synthesize secondSectionProductsCellArray=_secondSectionProductsCellArray;
@property(retain, nonatomic) NSMutableArray *firstSectionHeaderCellArray; // @synthesize firstSectionHeaderCellArray=_firstSectionHeaderCellArray;
@property(retain, nonatomic) AWELiveMyWalletModel *myWalletModel; // @synthesize myWalletModel=_myWalletModel;
- (void).cxx_destruct;
- (id)deviceName;
- (void)contactTapped;
- (void)coinsBuyTapped:(id)arg1;
- (void)_finishEditing;
- (void)myRewardsTapped;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

