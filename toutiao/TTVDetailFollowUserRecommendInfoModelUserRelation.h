//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber;
@protocol Optional;

@interface TTVDetailFollowUserRecommendInfoModelUserRelation : JSONModel
{
    NSNumber<Optional> *_is_following;
    NSNumber<Optional> *_is_followed;
    NSNumber<Optional> *_is_friend;
}

@property(retain, nonatomic) NSNumber<Optional> *is_friend; // @synthesize is_friend=_is_friend;
@property(retain, nonatomic) NSNumber<Optional> *is_followed; // @synthesize is_followed=_is_followed;
@property(retain, nonatomic) NSNumber<Optional> *is_following; // @synthesize is_following=_is_following;
- (void).cxx_destruct;

@end
