//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <QQMainProject/QZUploadConnectionDelegate-Protocol.h>
#import <QQMainProject/QZUploadEventActionDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableString, NSString, NSThread, NSTimer, QZUploadEventAction, QZUploadLogicControl, QZUploadManager, QZUploadPacket, QZUploadRequestData;
@protocol QZUploadReachability;

@interface QZUploadRequest : NSOperation <QZUploadConnectionDelegate, QZUploadEventActionDelegate>
{
    QZUploadPacket *_packet;
    NSTimer *_dataTimer;
    _Bool _finished;
    _Bool _inProgress;
    _Bool _markFinished;
    _Bool _delaySetFinished;
    _Bool _markNotifyCalled;
    long long _retryCnt;
    double _fileTime;
    long long _netRetryCnt;
    _Bool _entryBackground;
    double _lastProgressRespTime;
    _Bool _progressRsp;
    long long _progressRspRetryCnt;
    double _updateTimeoutAbsoluteTime;
    long long _updateTimeoutRetryCnt;
    _Bool _everConnected;
    NSMutableString *_detail;
    long long _errCode;
    QZUploadRequestData *_requestData;
    double _beginTime;
    long long _succNum;
    long long _failedNum;
    long long _missingFileNum;
    _Bool _hasFailedFile;
    int _xo;
    _Bool _bUserCancel;
    _Bool _noBatchControl;
    _Bool _markCancel;
    _Bool _hasFileCancel;
    QZUploadManager *uploadManager;
    double _startTime;
    NSMutableDictionary *_requestReport;
    double _connectionCost;
    NSDictionary *_sessionInfo;
    NSArray *_packetsSending;
    NSArray *_packetsToCommit;
    QZUploadPacket *_packetForMsg;
    QZUploadLogicControl *_logicControl;
    double _createTime;
    double _totalFileLen;
    NSMutableDictionary *_costTimeParam;
    long long _maxBatchControlCount;
    long long _maxStreamCount;
    long long _maxConnectionCount;
    NSThread *_requestThread;
    QZUploadEventAction *_currentAction;
    NSMutableDictionary *_ipMgrDict;
    NSMutableArray *_connections;
    id <QZUploadReachability> _reachability;
}

@property(retain, nonatomic) id <QZUploadReachability> reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSMutableDictionary *ipMgrDict; // @synthesize ipMgrDict=_ipMgrDict;
@property(retain, nonatomic) QZUploadEventAction *currentAction; // @synthesize currentAction=_currentAction;
@property _Bool hasFileCancel; // @synthesize hasFileCancel=_hasFileCancel;
@property _Bool markCancel; // @synthesize markCancel=_markCancel;
@property(retain) NSThread *requestThread; // @synthesize requestThread=_requestThread;
@property(nonatomic) _Bool noBatchControl; // @synthesize noBatchControl=_noBatchControl;
@property(nonatomic) long long maxConnectionCount; // @synthesize maxConnectionCount=_maxConnectionCount;
@property(nonatomic) long long maxStreamCount; // @synthesize maxStreamCount=_maxStreamCount;
@property(nonatomic) long long maxBatchControlCount; // @synthesize maxBatchControlCount=_maxBatchControlCount;
@property(retain, nonatomic) NSMutableDictionary *costTimeParam; // @synthesize costTimeParam=_costTimeParam;
@property(nonatomic) double totalFileLen; // @synthesize totalFileLen=_totalFileLen;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) QZUploadLogicControl *logicControl; // @synthesize logicControl=_logicControl;
@property(retain, nonatomic) QZUploadPacket *packetForMsg; // @synthesize packetForMsg=_packetForMsg;
@property(retain, nonatomic) NSArray *packetsToCommit; // @synthesize packetsToCommit=_packetsToCommit;
@property(retain, nonatomic) NSArray *packetsSending; // @synthesize packetsSending=_packetsSending;
@property(retain, nonatomic) NSDictionary *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) _Bool bUserCancel; // @synthesize bUserCancel=_bUserCancel;
@property(nonatomic) double connectionCost; // @synthesize connectionCost=_connectionCost;
@property(retain, nonatomic) NSMutableDictionary *requestReport; // @synthesize requestReport=_requestReport;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) QZUploadRequestData *requestData; // @synthesize requestData=_requestData;
@property(nonatomic) __weak QZUploadManager *uploadManager; // @synthesize uploadManager;
- (void).cxx_destruct;
- (void)main;
- (void)start;
- (id)operationThread;
- (_Bool)hasAvailableSendingPacket;
- (void)initNextPacketsForMsg;
- (void)insertCommitPacket:(id)arg1;
- (void)initNextPacketsToCommit;
- (void)insertSendingPacket:(id)arg1;
- (void)initNextPacketsToSend;
- (_Bool)stopInWWAN;
- (_Bool)stopDueToError;
- (void)finishUploadForSDKV2;
- (_Bool)waitFileCompressWithPacket:(id)arg1 error:(id *)arg2;
- (_Bool)checkUploadFileStatusWithPacket:(id)arg1 error:(id *)arg2;
- (_Bool)waitPacket:(id)arg1 processWithError:(id *)arg2;
- (void)prepareForReconnectForKey:(id)arg1;
- (void)stopNetReachabilityListen;
- (void)reachabilityChanged:(id)arg1;
- (void)reachabilityChangedOnThread:(id)arg1;
- (void)startNetReachabilityListen;
- (_Bool)hasNoConnection;
- (void)removeConnection:(id)arg1;
- (_Bool)needSwitchNextIpOfConnection:(id)arg1 ipKey:(id)arg2;
- (void)setIpOfConnection:(id)arg1 ipKey:(id)arg2;
- (_Bool)swithToNextIpForKey:(id)arg1;
- (_Bool)redirectConnectionToIp:(id)arg1 ipKey:(id)arg2;
- (void)restoreConnection:(id)arg1 ipKey:(id)arg2;
- (double)getTotalCostTimeOfPacketList:(id)arg1;
- (void)reportSuccessOfPacketArray:(id)arg1;
- (id)delegateThread;
- (void)didErrorOccurred:(id)arg1 fromConnection:(id)arg2;
- (void)didReadData:(id)arg1 fromConnection:(id)arg2;
- (void)didReadyToWriteDataToConnection:(id)arg1;
- (void)clearAllConnection;
- (id)getMultiConnectionsWithCount:(long long)arg1 ipKey:(id)arg2;
- (id)getConnectionForIpKey:(id)arg1;
- (void)didEventAction:(id)arg1 endWithParam:(id)arg2;
- (void)updateCostTime:(double)arg1 ForKey:(id)arg2;
- (void)startFileUpload;
- (id)sharedConnectionPool;
- (Class)logicControlClass;
- (void)markAsFinished;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isConcurrent;
- (void)applicationWillEnterBackground;
- (void)applicationWillEnterForeground;
- (void)markPacketCanceled:(id)arg1;
- (void)cancelOnViaWan;
- (void)cancelWithNotWifi;
- (void)cancelOnRequestThread;
- (void)markRequestCancel;
- (void)cancel;
- (void)resetAllIpManager;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (void)uploadPacket:(id)arg1 successWithCostTime:(double)arg2 ipModel:(id)arg3;
- (void)uploadPacket:(id)arg1 errCode:(long long)arg2 log:(id)arg3 ipModel:(id)arg4;
- (long long)indexOfPacket:(id)arg1;
- (void)notifyRequestFinishForSDKV2;
- (void)notifyFailOfPacket:(id)arg1 error:(id)arg2 ip:(id)arg3;
- (void)notifyPackets:(id)arg1 error:(id)arg2;
- (void)notifyPacket:(id)arg1 error:(id)arg2 ip:(id)arg3;
- (void)notifyPacket:(id)arg1 successWithResponse:(id)arg2;
- (void)notifyPacket:(id)arg1 filePath:(id)arg2 status:(long long)arg3;
- (void)chanceToProcessPacket:(id)arg1 connected:(_Bool)arg2;
- (void)chanceToProcessPacket:(id)arg1;
- (void)notifyPacketBegin:(id)arg1 connected:(_Bool)arg2;
- (void)notifyPacket:(id)arg1 progress:(long long)arg2 total:(long long)arg3;
- (void)notifyRequestCancel:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

