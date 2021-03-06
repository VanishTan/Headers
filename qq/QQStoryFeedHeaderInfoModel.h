//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQStoryFeedHeaderInfoModel : NSObject
{
    NSString *_name;
    NSString *_accessoryText;
    unsigned long long _pageSource;
}

+ (id)bridgeFromProfileMemoryStoryFeed:(id)arg1;
+ (id)bridgeFromBannerFeedModel:(id)arg1 pageSource:(unsigned long long)arg2;
+ (id)bridgeFromUserGroupFeedModel:(id)arg1 pageSource:(unsigned long long)arg2;
+ (id)accessoryTextForShareGroup:(id)arg1 width:(double)arg2 font:(id)arg3;
+ (id)accessoryTextForShareGroupTodayNewMember:(id)arg1 width:(double)arg2 font:(id)arg3;
+ (id)bridgeFromGeneralRecommendFeedModel:(id)arg1 pageSource:(unsigned long long)arg2;
+ (id)bridgeFromGeneralFeedModel:(id)arg1 pageSource:(unsigned long long)arg2;
+ (id)accessableTextWithVideoInfoArray:(id)arg1;
+ (id)timeZoneTextWithVideoInfoArray:(id)arg1;
+ (id)locationTextForVideoInfoArray:(id)arg1;
+ (id)locationTextWithVideoInfo:(id)arg1;
+ (id)bridgeFromQQUserInfoModel:(id)arg1 pageSource:(unsigned long long)arg2;
+ (id)bridgeFromStoryTagInfo:(id)arg1 pageSource:(unsigned long long)arg2;
+ (id)bridgeFromStoryFeed:(id)arg1 pageSource:(unsigned long long)arg2;
@property(nonatomic) unsigned long long pageSource; // @synthesize pageSource=_pageSource;
@property(retain, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end

