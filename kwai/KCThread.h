//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "XFFetchResult-Protocol.h"

@class KCMessage, NSDate, NSString;

@interface KCThread : NSObject <XFFetchResult, NSCopying>
{
    _Bool _isDirectory;
    int _accountType;
    int _rank;
    int _unreadCount;
    int _unreadMediaCount;
    NSString *_threadID;
    long long _type;
    NSString *_pThreadID;
    NSString *_cursor;
    NSDate *_date;
    KCMessage *_lastMessage;
    KCMessage *_lastSecondMessage;
    KCMessage *_lastMediaMessage;
    long long _readSeq;
    long long _maxSeq;
    NSString *_localExtJsonString;
}

@property(retain, nonatomic) NSString *localExtJsonString; // @synthesize localExtJsonString=_localExtJsonString;
@property(nonatomic) long long maxSeq; // @synthesize maxSeq=_maxSeq;
@property(nonatomic) long long readSeq; // @synthesize readSeq=_readSeq;
@property(nonatomic) int unreadMediaCount; // @synthesize unreadMediaCount=_unreadMediaCount;
@property(nonatomic) int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) KCMessage *lastMediaMessage; // @synthesize lastMediaMessage=_lastMediaMessage;
@property(retain, nonatomic) KCMessage *lastSecondMessage; // @synthesize lastSecondMessage=_lastSecondMessage;
@property(retain, nonatomic) KCMessage *lastMessage; // @synthesize lastMessage=_lastMessage;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) int rank; // @synthesize rank=_rank;
@property(nonatomic) _Bool isDirectory; // @synthesize isDirectory=_isDirectory;
@property(copy, nonatomic) NSString *pThreadID; // @synthesize pThreadID=_pThreadID;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)hashString;
- (void)updateWithObject:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
