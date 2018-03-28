//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TTABStorageManager : NSObject
{
    _Bool _dirtyData;
    NSMutableDictionary *_fetureDicts;
}

+ (id)executedExperimentGroupNames;
+ (void)saveExecutedExperimentGroupNames:(id)arg1;
+ (id)firstInstallVersionStr;
+ (void)saveAPPVersionInfosIfNeed;
+ (id)ABVersion;
+ (void)saveABVersion:(id)arg1;
+ (void)saveRandomNumberDicts:(id)arg1;
+ (id)randomNumber;
+ (id)_currentVersionABGroupsUserDefaultkeyKey;
+ (void)saveCurrentVersionABGroups:(id)arg1;
+ (_Bool)isABGroupAllocationed;
+ (id)currentSavedABGroups;
+ (id)fetureKeyDicts;
+ (void)saveFetureToDisk:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *fetureDicts; // @synthesize fetureDicts=_fetureDicts;
@property(nonatomic) _Bool dirtyData; // @synthesize dirtyData=_dirtyData;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)batchSetKeyValues:(id)arg1;
- (void)_setValue:(id)arg1 forFeatureKey:(id)arg2 synchronizeToDisk:(_Bool)arg3;
- (void)setValue:(id)arg1 forFeatureKey:(id)arg2;
- (id)valueForFeatureKey:(id)arg1;
- (id)init;

@end
