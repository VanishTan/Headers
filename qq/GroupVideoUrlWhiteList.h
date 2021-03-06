//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, QQHttpClientSession;

@interface GroupVideoUrlWhiteList : NSObject
{
    NSDate *_lastUpdateTime;
    NSMutableArray *_domainList;
    _Bool _hasCache;
    QQHttpClientSession *_session;
    int _xo;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)clearHttpConnState;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)qqHttpSessionDidLoad:(id)arg1 result:(id)arg2;
- (void)addDomainFromArray:(id)arg1;
- (_Bool)parseWhiteListDataInJson:(id)arg1;
- (_Bool)updateWhiteList:(_Bool)arg1;
- (_Bool)updateWhiteListIfNoCache;
- (_Bool)isVideoURLInWhiteList:(id)arg1;
- (_Bool)writeCache;
- (_Bool)loadCache;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *domainList; // @dynamic domainList;
@property(retain, nonatomic) NSDate *lastUpdateTime; // @dynamic lastUpdateTime;
@property(retain, nonatomic) QQHttpClientSession *session; // @dynamic session;

@end

