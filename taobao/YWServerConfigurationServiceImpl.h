//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IYWServerConfigurationService-Protocol.h"
#import "YWServiceImplProtocol-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, WXBlockContainer, YWIMCore;

@interface YWServerConfigurationServiceImpl : NSObject <YWServiceImplProtocol, IYWServerConfigurationService>
{
    _Bool _didUpdated;
    YWIMCore *_imCore;
    WXBlockContainer *_didUpdatedBlockContainer;
    NSDictionary *_configurationInfo;
    NSMutableDictionary *_configurationCache;
    NSMutableArray *_configurationFileNameList;
}

@property(retain, nonatomic) NSMutableArray *configurationFileNameList; // @synthesize configurationFileNameList=_configurationFileNameList;
@property(retain, nonatomic) NSMutableDictionary *configurationCache; // @synthesize configurationCache=_configurationCache;
@property(retain, nonatomic) NSDictionary *configurationInfo; // @synthesize configurationInfo=_configurationInfo;
@property(nonatomic) _Bool didUpdated; // @synthesize didUpdated=_didUpdated;
@property(retain, nonatomic) WXBlockContainer *didUpdatedBlockContainer; // @synthesize didUpdatedBlockContainer=_didUpdatedBlockContainer;
@property(nonatomic) __weak YWIMCore *imCore; // @synthesize imCore=_imCore;
- (void).cxx_destruct;
- (void)handleConfigurations:(id)arg1;
- (void)handleWXDidReceivedConfigurationChangeNotification:(id)arg1;
- (void)didReceivedConfigurationNotify:(id)arg1;
- (void)requestConfiguration;
- (void)requestConfigurationWithPropertyNames:(id)arg1;
- (id)configurationFileSignInfoInFiles:(id)arg1;
- (id)configurationFileSignInfo;
- (id)defaultFileNameList;
- (void)asyncUpdateConfigurationInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)mergedFileNameListWithFileNameList:(id)arg1;
- (void)addConfigurationDidUpdatedBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2 ofPriority:(unsigned long long)arg3;
- (void)initConfigurationFileSignInfo;
- (void)removeConfigurationFileName:(id)arg1;
- (void)addConfigurationFileName:(id)arg1;
- (id)fileNameList;
- (id)valueInConfigurationForKey:(id)arg1 fromFile:(id)arg2;
- (id)valueInConfigurationForKey:(id)arg1;
- (void)dealloc;
- (id)initWithModularRef:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

