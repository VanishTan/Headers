//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMGroupAdapter-Protocol.h"

@class NSString, TBAMPGroupInfo;

@interface TBIMGroupChat : NSObject <TBIMGroupAdapter>
{
    unsigned long long _changeFlag;
    TBAMPGroupInfo *_groupInfo;
    NSString *_tempGroupId;
}

@property(copy, nonatomic) NSString *tempGroupId; // @synthesize tempGroupId=_tempGroupId;
@property(retain, nonatomic) TBAMPGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(nonatomic) unsigned long long changeFlag; // @synthesize changeFlag=_changeFlag;
- (void).cxx_destruct;
- (id)groupAttibutes;
- (id)linkGroups;
- (id)subIndex;
- (id)groupNoticeModifyUserId;
- (id)groupNoticeModifyTime;
- (id)ext;
- (id)checkType;
- (_Bool)isPublic;
- (id)bizSubId;
- (id)bizSubType;
- (id)bizId;
- (id)url;
- (id)getHeadURL;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)groupUserNum;
- (id)groupUserIdList;
- (id)groupUserList;
- (id)getGroupUserById:(id)arg1;
- (id)groupUserByTaobaoId:(id)arg1;
- (unsigned long long)groupType;
- (unsigned long long)checkinTypeList;
- (id)groupNotice;
- (id)getHeadPicImage;
- (id)groupHeadPic;
- (id)groupId;
- (id)groupDynamicName;
- (id)groupName;
- (unsigned long long)groupBizType;
- (_Bool)hasBeenDissolved;
- (_Bool)isInGroup;
- (_Bool)isOwner;
- (id)initWithData:(id)arg1;
- (id)getGroupOwner;
- (id)getSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
