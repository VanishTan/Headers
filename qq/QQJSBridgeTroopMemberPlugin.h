//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/MulMemSelBusiProcessDelegate-Protocol.h>

@class NSDictionary, NSString;

@interface QQJSBridgeTroopMemberPlugin : QQWebViewPluginQQBizBase <MulMemSelBusiProcessDelegate>
{
    NSDictionary *_requestQuery;
}

@property(retain, nonatomic) NSDictionary *requestQuery; // @synthesize requestQuery=_requestQuery;
- (_Bool)handleJsBridgeRequest_TroopMemberApiPlugin_createVideoAndSend:(id)arg1;
- (id)convertToNSString:(id)arg1;
- (void)callbackWithObj:(id)arg1;
- (void)disMissPresentedViewController;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)onBusinessProcessCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2;
- (_Bool)handleJsBridgeRequest_troopMember_inviteMember:(id)arg1;
- (_Bool)handleJsBridgeRequest_troopMember_kickGroupMember:(id)arg1;
- (_Bool)handleJsBridgeRequest_troopMember_getMemberFace:(id)arg1;
- (_Bool)handleJsBridgeRequest_troopMember_deleteGroupMemberConcernedList:(id)arg1;
- (_Bool)handleJsBridgeRequest_troopMember_addGroupMemberConcernedList:(id)arg1;
- (_Bool)handleJsBridgeRequest_troopMember_showTroopMemberCard:(id)arg1;
- (_Bool)handleJsBridgeRequest_troopMember_getMemberList:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
