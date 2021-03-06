//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSIndexPath, UIScrollView, UITableView, UIView;

@protocol NearbyFriendTableViewDelegate <NSObject>
- (_Bool)getMoreData:(id)arg1;
- (_Bool)refreshTableList:(id)arg1;

@optional
- (long long)numberOfSectionsInTableView:(UITableView *)arg1;
- (UIView *)tableView:(UITableView *)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 heightForHeaderInSection:(long long)arg2;
- (void)reportClickCell;
- (void)deleteData:(id)arg1 index:(NSIndexPath *)arg2;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
@end

