//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "MMMessageChatRoomSearchCellDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WBContactEngineDelegate-Protocol.h"
#import "WBTableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, WBContactEngine, WBSearchBar;
@protocol MMMessageChatRoomSearchViewControllerDelegate;

@interface MMMessageChatRoomSearchViewController : WBTableViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, WBTableViewDelegate, WBContactEngineDelegate, MMMessageChatRoomSearchCellDelegate>
{
    WBContactEngine *contactEngine;
    UIActivityIndicatorView *indicator;
    _Bool hasMoreContacts;
    _Bool isLoading;
    _Bool _isSearch;
    int _type;
    id <MMMessageChatRoomSearchViewControllerDelegate> _delegate;
    WBSearchBar *_searchBar;
    NSMutableArray *_searchedContacts;
    NSString *_keyword;
    long long _roomId;
    NSMutableArray *_admins;
    NSMutableArray *_shutupMembers;
}

@property(retain, nonatomic) NSMutableArray *shutupMembers; // @synthesize shutupMembers=_shutupMembers;
@property(retain, nonatomic) NSMutableArray *admins; // @synthesize admins=_admins;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool isSearch; // @synthesize isSearch=_isSearch;
@property(retain, nonatomic) NSMutableArray *searchedContacts; // @synthesize searchedContacts=_searchedContacts;
@property(retain, nonatomic) WBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) id <MMMessageChatRoomSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didFinishLoading;
- (void)startLoading;
- (void)didClickShutUpButton:(id)arg1;
- (void)didClickGreetButton:(id)arg1;
- (void)didClickAvatarView:(id)arg1;
- (void)contactEngine:(id)arg1 didFailToSearchUsersByKeyword:(id)arg2 error:(id)arg3;
- (void)contactEngine:(id)arg1 didFinishSearchOfUsers:(id)arg2 keyword:(id)arg3 hasMore:(_Bool)arg4;
- (void)fetchMembersFromServer;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableViewShouldBypassEmptyView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dismissKeyboard;
- (void)initSubViews;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSearType:(int)arg1 roomId:(long long)arg2 withAdmins:(id)arg3 andShutupMembers:(id)arg4;
- (id)initWithSearType:(int)arg1 roomId:(long long)arg2 withAdmins:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

