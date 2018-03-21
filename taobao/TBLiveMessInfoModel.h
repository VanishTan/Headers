//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString, TBLiveActivityModel, TBLiveAdLayerModel, TBLiveBrandADModel, TBLiveItemVideoData, TBLiveTBTVMenuBannerModel;
@protocol TBLiveSwithLiveModel;

@interface TBLiveMessInfoModel : TBJSONModel
{
    TBLiveBrandADModel *_sponsor;
    NSString *_timerInteractive;
    NSString *_powerMessageKey;
    TBLiveAdLayerModel *_blackboard;
    TBLiveItemVideoData *_itemSubVideo;
    NSArray<TBLiveSwithLiveModel> *_upDownVideo;
    TBLiveActivityModel *_activity;
    TBLiveTBTVMenuBannerModel *_tbtvMenuBanner;
}

@property(retain, nonatomic) TBLiveTBTVMenuBannerModel *tbtvMenuBanner; // @synthesize tbtvMenuBanner=_tbtvMenuBanner;
@property(retain, nonatomic) TBLiveActivityModel *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSArray<TBLiveSwithLiveModel> *upDownVideo; // @synthesize upDownVideo=_upDownVideo;
@property(retain, nonatomic) TBLiveItemVideoData *itemSubVideo; // @synthesize itemSubVideo=_itemSubVideo;
@property(retain, nonatomic) TBLiveAdLayerModel *blackboard; // @synthesize blackboard=_blackboard;
@property(copy, nonatomic) NSString *powerMessageKey; // @synthesize powerMessageKey=_powerMessageKey;
@property(copy, nonatomic) NSString *timerInteractive; // @synthesize timerInteractive=_timerInteractive;
@property(retain, nonatomic) TBLiveBrandADModel *sponsor; // @synthesize sponsor=_sponsor;
- (void).cxx_destruct;

@end
