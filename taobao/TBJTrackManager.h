//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JTrack;

@interface TBJTrackManager : NSObject
{
    JTrack *_tbJtrack;
}

+ (id)sharedInstance;
@property(retain, nonatomic) JTrack *tbJtrack; // @synthesize tbJtrack=_tbJtrack;
- (void).cxx_destruct;
- (void)turnOnDebugMode;
- (void)updatePreCtrlSpm:(id)arg1;
- (id)preCtrlSpm;
- (id)getExtConfigs:(id)arg1 properties:(id)arg2;
- (id)getCtrlConfigs:(id)arg1 properties:(id)arg2 page:(id)arg3;
- (id)getCtrlSPM:(id)arg1 properties:(id)arg2 page:(id)arg3;
- (id)getCtrlSPM:(id)arg1 properties:(id)arg2;
- (id)getCtrlSpmCD:(id)arg1 properties:(id)arg2;
- (id)getPageSpmABOf:(id)arg1;
- (id)getPageSpmAB:(id)arg1;
- (id)getPageArgsParam:(id)arg1 source:(id)arg2;
- (id)getPageName:(id)arg1;
- (void)setupWithPageConfig:(id)arg1 ctrlConfig:(id)arg2 extConfig:(id)arg3;

@end

