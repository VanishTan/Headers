//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface XFDBManager : NSObject
{
    NSCache *_dbDict;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSCache *dbDict; // @synthesize dbDict=_dbDict;
- (void).cxx_destruct;
- (id)_connectionForDBPath:(id)arg1 dbObject:(id)arg2;
- (id)connectionForDBPath:(id)arg1 dbObject:(id)arg2;
- (_Bool)closeCollectionAndRemoveDBFileForPath:(id)arg1 dbObject:(id)arg2;
- (void)closeAllConnections;
- (void)customInit;
- (id)init;

@end
