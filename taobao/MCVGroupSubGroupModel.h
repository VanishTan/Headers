//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseModel.h"

#import "MCVGroupSubGroupModelProtocol-Protocol.h"
#import "TBIMGroupServiceDelegate-Protocol.h"

@class NSString;
@protocol MCVGroupSubGroupModelDelegate, TBIMGroupServiceAdapter;

@interface MCVGroupSubGroupModel : MCBaseModel <TBIMGroupServiceDelegate, MCVGroupSubGroupModelProtocol>
{
    id <MCVGroupSubGroupModelDelegate> _delegate;
    id <TBIMGroupServiceAdapter> _groupChatService;
}

@property(retain, nonatomic) id <TBIMGroupServiceAdapter> groupChatService; // @synthesize groupChatService=_groupChatService;
@property(nonatomic) __weak id <MCVGroupSubGroupModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)groupInfoDeleted:(id)arg1;
- (void)groupInfoChange:(id)arg1;
- (id)getGroupsWithGroupIDs:(id)arg1;
- (void)deleteLinkGroup:(id)arg1 linkGroupId:(id)arg2;
- (id)getVGroupInfoByVGroupID:(id)arg1;
- (id)initWithBizKey:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
