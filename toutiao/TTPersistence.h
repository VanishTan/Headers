//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTPersistenceProtocol-Protocol.h"

@class NSString, TTDiskCache, TTMemoryCache;
@protocol OS_dispatch_semaphore;

@interface TTPersistence : NSObject <TTPersistenceProtocol>
{
    NSString *_name;
    TTMemoryCache *_memoryCache;
    TTDiskCache *_diskCache;
    NSObject<OS_dispatch_semaphore> *_lock;
}

+ (id)cacheDirectory;
+ (void)deleteWithName:(id)arg1;
+ (id)persistenceWithName:(id)arg1 option:(id)arg2;
+ (id)persistenceWithName:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) TTDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(retain, nonatomic) TTMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)save;
- (_Bool)removeAll;
- (_Bool)hasObjectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

