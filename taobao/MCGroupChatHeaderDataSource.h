//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCGroupChatHaderViewDataSourceProtocol-Protocol.h"

@class NSString, YHMuticastDelegate;
@protocol MCGroupChatHaderViewDataSourceDelegate;

@interface MCGroupChatHeaderDataSource : NSObject <MCGroupChatHaderViewDataSourceProtocol>
{
    YHMuticastDelegate<MCGroupChatHaderViewDataSourceDelegate> *_delegates;
}

@property(retain, nonatomic) YHMuticastDelegate<MCGroupChatHaderViewDataSourceDelegate> *delegates; // @synthesize delegates=_delegates;
- (void).cxx_destruct;
- (void)reset;
- (void)start;
- (id)getProtocol;
- (id)getBizKey;
- (void)addDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
