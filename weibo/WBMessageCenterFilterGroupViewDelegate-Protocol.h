//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBMessageCenterFilterGroupView;

@protocol WBMessageCenterFilterGroupViewDelegate <NSObject>
- (void)filterComponent:(WBMessageCenterFilterGroupView *)arg1 droplistItemValueAtIndex:(unsigned long long)arg2 result:(void (^)(long long, unsigned long long))arg3;
- (void)filterComponent:(WBMessageCenterFilterGroupView *)arg1 didSelectFilterAtIndex:(unsigned long long)arg2;
@end

