//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FeedNavHandleProtocol-Protocol.h"

@class NSDictionary, NSString, UIImage;
@protocol FeedNavEventMangerProtocol;

@interface WBNavEventLotteryHandler : NSObject <FeedNavHandleProtocol>
{
    _Bool _isShow;
    id <FeedNavEventMangerProtocol> _navManager;
    NSDictionary *_feed_redPacketDic;
    UIImage *_iconImage;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSDictionary *feed_redPacketDic; // @synthesize feed_redPacketDic=_feed_redPacketDic;
@property(nonatomic) __weak id <FeedNavEventMangerProtocol> navManager; // @synthesize navManager=_navManager;
- (void).cxx_destruct;
- (void)showLotteryGuideIfNeeded;
- (void)lotteryButtonPressed;
- (_Bool)handleEventsAlone:(id)arg1;
- (_Bool)responseEvents:(id)arg1;
- (CDStruct_0a4d7299)buttonItemConfig;
- (id)buttonItemObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

