//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSDSF2018Info, KSDiskCache, NSNumber;

@interface KSDMyDenaliCenter : NSObject
{
    KSDiskCache *_cache;
    NSNumber *_currentUserId;
    _Bool _forceUpdated;
    KSDSF2018Info *_sf2018Info;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool forceUpdated; // @synthesize forceUpdated=_forceUpdated;
@property(retain, nonatomic) KSDSF2018Info *sf2018Info; // @synthesize sf2018Info=_sf2018Info;
- (void).cxx_destruct;
- (void)updateRedpackStatusFromCache:(id)arg1;
- (id)requestParamAddActivityId:(id)arg1;
- (void)withdrawFinish:(id)arg1;
- (void)cacheRecordStatus:(id)arg1;
- (void)updateActivityResponse:(id)arg1;
- (void)redPackOpend:(id)arg1;
- (void)photoSentToFriend:(id)arg1;
- (void)observeLoginAndLogout;
- (void)observeRecordUpdate;
- (void)save;
- (void)loadCache;
- (id)cache;
- (void)dealloc;
- (id)init;

@end
