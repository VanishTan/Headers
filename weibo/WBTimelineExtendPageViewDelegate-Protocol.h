//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBExtendPageItem, WBExtendPageItemDetail, WBTimelineExtendPage, WBTimelineExtendPageView;

@protocol WBTimelineExtendPageViewDelegate <NSObject>

@optional
- (void)didClickedCommonButton:(WBTimelineExtendPage *)arg1 inView:(WBExtendPageItemDetail *)arg2;
- (void)didSelectedProduct:(WBTimelineExtendPage *)arg1 inView:(WBExtendPageItem *)arg2;
- (void)didSelectedBackgroundInView:(WBTimelineExtendPageView *)arg1;
@end

