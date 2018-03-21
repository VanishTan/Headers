//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NAMRequestCenter : NSObject
{
    NSMutableDictionary *_dicRequestManagers;
    NSMutableDictionary *_dicForceReqlist;
    NSMutableArray *_arrUnavailableList;
    NSDictionary *_dicFullDoseReqRate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *dicFullDoseReqRate; // @synthesize dicFullDoseReqRate=_dicFullDoseReqRate;
@property(retain, nonatomic) NSMutableArray *arrUnavailableList; // @synthesize arrUnavailableList=_arrUnavailableList;
@property(retain, nonatomic) NSMutableDictionary *dicForceReqlist; // @synthesize dicForceReqlist=_dicForceReqlist;
@property(retain, nonatomic) NSMutableDictionary *dicRequestManagers; // @synthesize dicRequestManagers=_dicRequestManagers;
- (void).cxx_destruct;
- (void)saveUnavailablelist;
- (void)saveForceReqlist;
- (void)refreshFullDoseReqTimeWithLimited:(_Bool)arg1;
- (_Bool)fullDoseRequestExpired;
- (void)removeForceReqlist:(id)arg1;
- (void)removeUnavailablelist:(id)arg1;
- (void)addUnavailablelist:(id)arg1;
- (id)unavailablelist;
- (void)addForceReqlist:(id)arg1;
- (id)forceReqlist;
- (id)requestManagerForKey:(id)arg1;
- (id)requestManager;
- (id)init;

@end
