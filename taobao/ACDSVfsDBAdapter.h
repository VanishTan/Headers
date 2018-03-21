//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliDBSQLExtProcessor-Protocol.h"

@class AliDB, NSString;

@interface ACDSVfsDBAdapter : NSObject <AliDBSQLExtProcessor>
{
    AliDB *_db;
}

+ (void)monitorPerformance:(id)arg1 withType:(id)arg2 withValue:(double)arg3;
+ (void)monitorPerformanceSetup;
+ (id)sqliteDataBasePath;
+ (id)vfsDatasetToArray:(id)arg1;
+ (void)openDBWithCallback:(CDUnknownBlockType)arg1;
+ (void)asyncQueryTql:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)asyncQuerySql:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)asyncBatchUpdateSql:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)asyncUpdateSql:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) AliDB *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (id)processResult:(id)arg1;
- (id)getSQL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
