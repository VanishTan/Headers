//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKMovieRankPollData.h"

@class MovieSDKDataListInfo, MovieSDKMovieRankPollBannerData;

@interface MovieSDKMovieRankHotPollData : MovieSDKMovieRankPollData
{
    struct MovieSDKDataListInfo *_rankList;
    MovieSDKMovieRankPollBannerData *_banner_info;
}

@property(retain, nonatomic) MovieSDKMovieRankPollBannerData *banner_info; // @synthesize banner_info=_banner_info;
@property(retain, nonatomic) MovieSDKDataListInfo *rankList; // @synthesize rankList=_rankList;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

