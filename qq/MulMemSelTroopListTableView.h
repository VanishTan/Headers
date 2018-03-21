//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol TroopListViewDelegate;

@interface MulMemSelTroopListTableView : UITableView <UITableViewDataSource, UITableViewDelegate>
{
    id <TroopListViewDelegate> _listViewDelegate;
    NSMutableArray *_allTroopList;
    NSMutableArray *_commonTroopList;
    NSMutableArray *_ownerTroopList;
    NSMutableArray *_adminTroopList;
    NSMutableArray *_memberTroopList;
    int _xo;
}

- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withListDelegate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *adminTroopList; // @dynamic adminTroopList;
@property(retain, nonatomic) NSMutableArray *allTroopList; // @dynamic allTroopList;
@property(retain, nonatomic) NSMutableArray *commonTroopList; // @dynamic commonTroopList;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <TroopListViewDelegate> listViewDelegate; // @dynamic listViewDelegate;
@property(retain, nonatomic) NSMutableArray *memberTroopList; // @dynamic memberTroopList;
@property(retain, nonatomic) NSMutableArray *ownerTroopList; // @dynamic ownerTroopList;
@property(readonly) Class superclass;

@end
