//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UITableView;
@protocol ETBaseTableViewDelegate;

@interface ETBaseTableView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasRefresh;
    _Bool _reloading;
    NSMutableArray *_tableSource;
    id <ETBaseTableViewDelegate> _delegate;
    NSIndexPath *_selectedIndexPath;
    UITableView *_tableView;
    NSMutableArray *_sectionArray;
    struct UIEdgeInsets _contentInset;
}

@property(readonly, nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool hasRefresh; // @synthesize hasRefresh=_hasRefresh;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray=_sectionArray;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) __weak id <ETBaseTableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *tableSource; // @synthesize tableSource=_tableSource;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setRefreshView;
- (void)doneLoadingTableViewData;
- (void)showRefresh;
- (id)visibleCells;
- (void)scrollToRowAtSource:(id)arg1;
- (void)reloadTableViewDataSource;
- (void)dataSourceDidFinishLoadingNewData;
- (void)dealloc;
- (void)layoutSubviews;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (void)updateSelected;
- (void)reloadData;
- (void)refreshVisibleCell:(id)arg1;
- (id)indexPathWidthSource:(id)arg1;
- (id)sourceWithClass:(Class)arg1 index:(int)arg2;
- (id)sourceWithClass:(Class)arg1;
- (void)removeSourceAtIndexPath:(id)arg1;
- (id)sourceAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadTableSource:(id)arg1;
- (void)reloadTableIndexPath:(id)arg1;
- (void)reloadTableSourceArray:(id)arg1;
- (void)refreshVisibleCells;
- (void)scrollDidBottom:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

