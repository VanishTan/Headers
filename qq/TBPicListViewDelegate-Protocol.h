//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class TBPicItem, TBPicListView;

@protocol TBPicListViewDelegate <NSObject>
- (void)resetViewOfPic:(TBPicItem *)arg1 atIndex:(long long)arg2;
- (TBPicItem *)viewOfPic:(TBPicListView *)arg1 atIndex:(long long)arg2;
- (long long)numberOfPic:(TBPicListView *)arg1;

@optional
- (void)onScrollToRequestMoreData;
- (void)onScrollEndToRight;
- (void)onClickPic:(long long)arg1 withView:(TBPicItem *)arg2;
- (void)viewWillDisuse:(TBPicItem *)arg1 atIndex:(long long)arg2;
@end
