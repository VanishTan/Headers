//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UISearchDisplayDelegate-Protocol.h"

@class NSArray, NSString, UISearchDisplayController;

@interface FLEXNetworkHistoryTableViewController : UITableViewController <UISearchDisplayDelegate>
{
    _Bool _rowInsertInProgress;
    NSArray *_networkTransactions;
    long long _bytesReceived;
    NSArray *_filteredNetworkTransactions;
    long long _filteredBytesReceived;
    UISearchDisplayController *_searchController;
}

@property(retain, nonatomic) UISearchDisplayController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) _Bool rowInsertInProgress; // @synthesize rowInsertInProgress=_rowInsertInProgress;
@property(nonatomic) long long filteredBytesReceived; // @synthesize filteredBytesReceived=_filteredBytesReceived;
@property(copy, nonatomic) NSArray *filteredNetworkTransactions; // @synthesize filteredNetworkTransactions=_filteredNetworkTransactions;
@property(nonatomic) long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(copy, nonatomic) NSArray *networkTransactions; // @synthesize networkTransactions=_networkTransactions;
- (void).cxx_destruct;
- (void)updateSearchResultsWithSearchString:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (id)transactionAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleNetworkObserverEnabledStateChangedNotification:(id)arg1;
- (void)handleTransactionsClearedNotification:(id)arg1;
- (void)handleTransactionUpdatedNotification:(id)arg1;
- (void)tryUpdateTransactions;
- (void)handleNewTransactionRecordedNotification:(id)arg1;
- (id)headerTextForTableView:(id)arg1;
- (void)updateFirstSectionHeaderInTableView:(id)arg1;
- (void)updateFilteredBytesReceived;
- (void)updateBytesReceived;
- (void)updateTransactions;
- (void)settingsViewControllerDoneTapped:(id)arg1;
- (void)settingsButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

