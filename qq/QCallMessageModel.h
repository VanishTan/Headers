//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QCallMessageModel : NSObject
{
    unsigned long long _uin;
    NSString *_nickName;
    int _callType;
    unsigned long long _callTime;
    unsigned long long _durationTime;
    int _netType;
    int _accType;
    NSString *_content;
    unsigned long long _discussGroupUin;
    unsigned long long _groupFriendGroupCode;
    NSString *_mobilePhone;
    unsigned long long _bindId;
    int _bindType;
    int _recordType;
    int _DGAState;
    id _userData;
    NSString *_pstnUsers;
    _Bool _needAddPstnUsers;
    long long _msgid;
    int _msgType;
    int _missCount;
    int _unreadCount;
    int _dialType;
    int _xo;
}

@property(nonatomic) int dialType; // @synthesize dialType=_dialType;
- (_Bool)haveMissQCall:(unsigned long long)arg1;
- (id)convertTimeformat:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *content; // @dynamic content;
- (id)getVideoContext:(id)arg1 timeInterval:(unsigned long long)arg2;
- (unsigned long long)videoTimeInterval:(id)arg1;
- (id)modelConvert:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(nonatomic) int DGAState; // @dynamic DGAState;
@property(nonatomic) int accType; // @dynamic accType;
@property(nonatomic) unsigned long long bindId; // @dynamic bindId;
@property(nonatomic) int bindType; // @dynamic bindType;
@property(nonatomic) unsigned long long callTime; // @dynamic callTime;
@property(nonatomic) int callType; // @dynamic callType;
@property(nonatomic) unsigned long long discussGroupUin; // @dynamic discussGroupUin;
@property(nonatomic) unsigned long long durationTime; // @dynamic durationTime;
@property(nonatomic) unsigned long long groupFriendGroupCode; // @dynamic groupFriendGroupCode;
@property(nonatomic) int missCount; // @dynamic missCount;
@property(copy, nonatomic) NSString *mobilePhone; // @dynamic mobilePhone;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(nonatomic) long long msgid; // @dynamic msgid;
@property(nonatomic) _Bool needAddPstnUsers; // @dynamic needAddPstnUsers;
@property(nonatomic) int netType; // @dynamic netType;
@property(copy, nonatomic) NSString *nickName; // @dynamic nickName;
@property(copy, nonatomic) NSString *pstnUsers; // @dynamic pstnUsers;
@property(nonatomic) int recordType; // @dynamic recordType;
@property(nonatomic) unsigned long long uin; // @dynamic uin;
@property(nonatomic) int unreadCount; // @dynamic unreadCount;
@property(retain, nonatomic) id userData; // @dynamic userData;

@end

