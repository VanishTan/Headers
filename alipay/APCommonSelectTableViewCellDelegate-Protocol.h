//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APCommonSelectTableViewCell, NSString, UIButton, UIImage, UIScrollView, UITableView;
@protocol APCommonItemProtocol;

@protocol APCommonSelectTableViewCellDelegate <NSObject>

@optional
- (NSString *)getTextWithTextKey:(NSString *)arg1 defaultText:(NSString *)arg2 bundleName:(NSString *)arg3;
- (UIImage *)getLocalImageWithName:(NSString *)arg1 stretchLeftCap:(double)arg2 topHeight:(double)arg3;
- (UIImage *)getLocalImageWithName:(NSString *)arg1;
- (UIScrollView *)getScrollView;
- (UITableView *)getTableView;
- (_Bool)shouldShowMenuOptionsViewInCell:(APCommonSelectTableViewCell *)arg1;
- (void)contextMenuWillShowInCell:(APCommonSelectTableViewCell *)arg1;
- (void)contextMenuWillHideInCell:(APCommonSelectTableViewCell *)arg1;
- (void)contextMenuDidShowInCell:(APCommonSelectTableViewCell *)arg1;
- (void)contextMenuDidHideInCell:(APCommonSelectTableViewCell *)arg1;
- (void)didClickCommMenuForItem:(id <APCommonItemProtocol>)arg1 cell:(APCommonSelectTableViewCell *)arg2 commButton:(UIButton *)arg3;
- (void)didClickSecondBtnWithItem:(id <APCommonItemProtocol>)arg1;
- (void)didClickSecondMenuForItem:(id <APCommonItemProtocol>)arg1 cell:(APCommonSelectTableViewCell *)arg2;
- (void)didClickFirstMenuForItem:(id <APCommonItemProtocol>)arg1 cell:(APCommonSelectTableViewCell *)arg2;
- (void)didClickAccBtnWithItem:(id <APCommonItemProtocol>)arg1;
- (void)didClickIconWithItem:(id <APCommonItemProtocol>)arg1;
@end

