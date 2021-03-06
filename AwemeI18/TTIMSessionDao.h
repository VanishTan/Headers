//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTIMSessionDao : NSObject
{
    NSString *_insertSql;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *insertSql; // @synthesize insertSql=_insertSql;
- (void).cxx_destruct;
- (id)querySessionListWithMsgTime:(long long)arg1 limit:(long long)arg2 withDB:(id)arg3;
- (id)querySessionListWithDB:(id)arg1;
- (id)querySession:(id)arg1 withDB:(id)arg2;
- (_Bool)updateSession:(id)arg1 lastMsgTime:(long long)arg2 withDB:(id)arg3;
- (_Bool)updateSession:(id)arg1 lastCID:(long long)arg2 withDB:(id)arg3;
- (_Bool)updateSession:(id)arg1 unreadCount:(long long)arg2 db:(id)arg3;
- (_Bool)updateSession:(id)arg1 idDel:(_Bool)arg2 lastCID:(long long)arg3 withDB:(id)arg4;
- (id)generateInsertSql:(id)arg1;
- (_Bool)insertOrUpdateSessionArray:(id)arg1 withDB:(id)arg2;
- (_Bool)insertOrUpdateSession:(id)arg1 withDB:(id)arg2;

@end

