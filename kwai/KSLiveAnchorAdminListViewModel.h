//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSLiveAdminViewModel, NSMutableArray, NSURLSessionDataTask;

@interface KSLiveAnchorAdminListViewModel : NSObject
{
    NSMutableArray *_sections;
    KSLiveAdminViewModel *_liveAdminViewModel;
    NSMutableArray *_onlineAdmins;
    NSMutableArray *_offlineAdmins;
    NSURLSessionDataTask *_task;
}

@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSMutableArray *offlineAdmins; // @synthesize offlineAdmins=_offlineAdmins;
@property(retain, nonatomic) NSMutableArray *onlineAdmins; // @synthesize onlineAdmins=_onlineAdmins;
@property(readonly, nonatomic) KSLiveAdminViewModel *liveAdminViewModel; // @synthesize liveAdminViewModel=_liveAdminViewModel;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (void)reloadAdmins:(id)arg1;
- (id)titleForHeaderInSection:(unsigned long long)arg1;
- (void)editCachedAdminUser:(id)arg1 toAdminType:(short)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadAdminListWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLiveAdminViewModel:(id)arg1;

@end

