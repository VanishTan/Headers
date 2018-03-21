//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/NSCopying-Protocol.h>
#import <QQMainProject/NSMutableCopying-Protocol.h>

@class NSString, RedPointExtraModel, TaskInfo;

@interface QQRedPointModel : QQModel <NSCopying, NSMutableCopying>
{
    _Bool _isReadCurNode;
    int _remainedTime;
    unsigned int _lastRecvTime;
    int _redPointType;
    NSString *_taskID;
    unsigned long long _curSeq;
    long long _lastSvrTime;
    unsigned long long _fromID;
    RedPointExtraModel *_redPointExtraModel;
    TaskInfo *_task;
    NSString *_configVer;
}

@property(nonatomic) _Bool isReadCurNode; // @synthesize isReadCurNode=_isReadCurNode;
@property(copy, nonatomic) NSString *configVer; // @synthesize configVer=_configVer;
@property(retain, nonatomic) TaskInfo *task; // @synthesize task=_task;
@property(retain, nonatomic) RedPointExtraModel *redPointExtraModel; // @synthesize redPointExtraModel=_redPointExtraModel;
@property(nonatomic) int redPointType; // @synthesize redPointType=_redPointType;
@property(nonatomic) unsigned long long fromID; // @synthesize fromID=_fromID;
@property(nonatomic) unsigned int lastRecvTime; // @synthesize lastRecvTime=_lastRecvTime;
@property(nonatomic) long long lastSvrTime; // @synthesize lastSvrTime=_lastSvrTime;
@property(nonatomic) int remainedTime; // @synthesize remainedTime=_remainedTime;
@property(nonatomic) unsigned long long curSeq; // @synthesize curSeq=_curSeq;
@property(copy, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)recordEncodingKey:(id)arg1 forClass:(Class)arg2;
- (id)init;

@end
