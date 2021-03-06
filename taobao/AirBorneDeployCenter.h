//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AirBorneAccsCenterDelegate-Protocol.h"
#import "AirBorneDeployRecordDelegate-Protocol.h"

@class AirBorneAccsCenter, AirBorneDeployRecord, NSString;

@interface AirBorneDeployCenter : NSObject <AirBorneAccsCenterDelegate, AirBorneDeployRecordDelegate>
{
    AirBorneDeployRecord *_record;
    NSString *_deployCachePath;
    _Bool _isEnable;
    _Bool _isDebugMode;
    _Bool _isABTestLoadWithSynch;
    unsigned long long _timeout;
    _Bool _isNeedReloadOffline;
    AirBorneAccsCenter *_accs;
    int _status;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)checkForRangerDebugProcess:(id)arg1 urlKey:(id)arg2;
- (void)makeRecordOutOfDateAndSave;
- (void)versionAllFailed;
- (id)cleanCacheVersion;
- (void)updateCleanCacheVersion:(id)arg1;
- (id)offlineVersion;
- (void)updateOfflineVersion:(id)arg1;
- (void)airborneDeployRecordNeedBeginPatchProcess;
- (_Bool)AirBorneAccsCenterNeedDealWithItem:(struct AirBorneAccsItem *)arg1;
- (void)AirBorneAccsCenterNeedSaveRecord;
- (void)invalidExpBuckets;
- (void)cleanAndReload;
- (id)pathItems;
- (id)grayItems;
- (id)multiRouterItems;
- (id)routerItems;
- (id)expItems;
- (id)preItems;
- (id)nav2RangerAB:(id)arg1;
- (id)windvane2RangerAB:(id)arg1;
- (id)rangerFight:(id)arg1;
- (_Bool)rangerABFight:(id)arg1;
- (void)holdToLoadABTestBuckets:(id)arg1 url:(id)arg2;
- (_Bool)ABFightWithPreItem:(id)arg1 comp:(id)arg2;
- (_Bool)rangerGrayFight:(id)arg1;
- (_Bool)rangerRouterFight:(id)arg1;
- (_Bool)multiRouterFight:(id)arg1 urlKey:(id)arg2 markPath:(id)arg3 step:(int)arg4;
- (void)routerEffectUT:(struct AirBorneBucketItem *)arg1;
- (id)urlKeyFromComponent:(id)arg1;
- (_Bool)checkHasDisableMark:(id)arg1;
- (void)requestBucketForPreItem:(id)arg1 asynchrous:(_Bool)arg2 url:(id)arg3;
- (void)deployTestBucketSetting:(id)arg1;
- (void)orangerOffline:(id)arg1;
- (void)loadBucketSetting:(id)arg1 isAsynchronous:(_Bool)arg2 url:(id)arg3;
- (id)DataTOjsonString:(id)arg1;
- (void)patchProcess;
- (void)experEntrietyUpgrade;
- (void)save;
- (void)checkRecordIsOutOfDate;
- (void)checkNeedUpdateCleanCacheChannel;
- (void)checkNeedUpdateOfflineChannel;
- (void)onEnterForeGroundCallBack:(id)arg1;
- (void)loadACCSOfflineItems;
- (void)dealloc;
- (id)init;
- (unsigned long long)reinforceTimeout;
- (void)initRecordSetting;
- (void)initACCSSetting;
- (void)setABTestLoadingWithSyncByOrangeSetting:(id)arg1;
- (void)setABTestLoadingWithSync:(_Bool)arg1;
- (_Bool)isABTestLoadingWithSync;
- (void)setDebugMode:(_Bool)arg1;
- (_Bool)isDebugMode;
- (void)initBackGroundSettting;
- (void)initPathSetting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

