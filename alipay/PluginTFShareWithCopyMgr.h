//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PSDPluginProtocol-Protocol.h"

@class NSString, TFShareWithCopyMgr;

@interface PluginTFShareWithCopyMgr : NSObject <PSDPluginProtocol>
{
    TFShareWithCopyMgr *_shareMgr;
}

@property(retain, nonatomic) TFShareWithCopyMgr *shareMgr; // @synthesize shareMgr=_shareMgr;
- (void).cxx_destruct;
- (void)handleValidateName:(id)arg1 context:(id)arg2 responseCallbackBlock:(CDUnknownBlockType)arg3;
- (void)registerJSApi;
@property(readonly, copy, nonatomic) NSString *name;
- (void)handleEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

