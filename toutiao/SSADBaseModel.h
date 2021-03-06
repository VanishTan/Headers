//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTAd-Protocol.h"
#import "TTAdAppAction-Protocol.h"

@class NSArray, NSString;

@interface SSADBaseModel : NSObject <TTAd, TTAdAppAction>
{
    _Bool _dislike;
    NSString *_ad_id;
    NSString *_log_extra;
    NSString *_source;
    NSString *_type;
    long long _actionType;
    NSArray *_track_urls;
    NSArray *_click_track_urls;
    NSArray *_adPlayTrackUrls;
    NSArray *_adPlayActiveTrackUrls;
    NSArray *_adPlayEffectiveTrackUrls;
    NSArray *_adPlayOverTrackUrls;
    double _effectivePlayTime;
    NSString *_webURL;
    NSString *_webTitle;
    NSString *_appName;
    NSString *_download_url;
    NSString *_apple_id;
    NSString *_open_url;
    NSString *_ipa_url;
    NSString *_appUrl;
    NSString *_tabUrl;
    NSString *_alertText;
}

@property(copy, nonatomic) NSString *alertText; // @synthesize alertText=_alertText;
@property(copy, nonatomic) NSString *tabUrl; // @synthesize tabUrl=_tabUrl;
@property(copy, nonatomic) NSString *appUrl; // @synthesize appUrl=_appUrl;
@property(copy, nonatomic) NSString *ipa_url; // @synthesize ipa_url=_ipa_url;
@property(copy, nonatomic) NSString *open_url; // @synthesize open_url=_open_url;
@property(copy, nonatomic) NSString *apple_id; // @synthesize apple_id=_apple_id;
@property(copy, nonatomic) NSString *download_url; // @synthesize download_url=_download_url;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *webTitle; // @synthesize webTitle=_webTitle;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(nonatomic) _Bool dislike; // @synthesize dislike=_dislike;
@property(nonatomic) double effectivePlayTime; // @synthesize effectivePlayTime=_effectivePlayTime;
@property(retain, nonatomic) NSArray *adPlayOverTrackUrls; // @synthesize adPlayOverTrackUrls=_adPlayOverTrackUrls;
@property(retain, nonatomic) NSArray *adPlayEffectiveTrackUrls; // @synthesize adPlayEffectiveTrackUrls=_adPlayEffectiveTrackUrls;
@property(retain, nonatomic) NSArray *adPlayActiveTrackUrls; // @synthesize adPlayActiveTrackUrls=_adPlayActiveTrackUrls;
@property(retain, nonatomic) NSArray *adPlayTrackUrls; // @synthesize adPlayTrackUrls=_adPlayTrackUrls;
@property(copy, nonatomic) NSArray *click_track_urls; // @synthesize click_track_urls=_click_track_urls;
@property(copy, nonatomic) NSArray *track_urls; // @synthesize track_urls=_track_urls;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *log_extra; // @synthesize log_extra=_log_extra;
@property(copy, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)monitorInfo;
- (void)sendTrackEventWithLabel:(id)arg1 eventName:(id)arg2 extra:(id)arg3;
- (void)sendTrackEventWithLabel:(id)arg1 eventName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

