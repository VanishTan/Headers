//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBasePresenterProtocol-Protocol.h"
#import "MCMessageListPresenterProtocol-Protocol.h"

@class MCCCellManager, NSMutableSet;
@protocol MCChatPageDisplayPresenterCustomEventProtocol, TBIMUserAdapter;

@protocol MCChatPageDisplayPresenterInterface <MCBasePresenterProtocol, MCMessageListPresenterProtocol>
@property(retain, nonatomic) NSMutableSet *decorateComponentList;
@property(retain, nonatomic) MCCCellManager *cellManager;
- (void)userChange:(id <TBIMUserAdapter>)arg1;
- (void)removeDelegate:(id <MCChatPageDisplayPresenterCustomEventProtocol>)arg1;
- (void)addDelegate:(id <MCChatPageDisplayPresenterCustomEventProtocol>)arg1;
@end

