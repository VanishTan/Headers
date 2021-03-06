//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataBaseObject.h"

@class NSDate, NSNumber, NSString;

@interface MovieSDKDataUserInfo : MovieSDKDataBaseObject
{
    _Bool _isFollowing;
    NSString *_avatar;
    NSString *_avatar_large;
    NSString *_id_;
    NSString *_artist_id;
    NSString *_name;
    NSString *_job;
    NSString *_verified;
    NSString *_verified_type;
    NSString *_verified_reason;
    NSDate *_expirationDate;
    NSNumber *_fans_count;
    NSString *_coverUrl;
    NSString *_urank;
    NSString *_mbrank;
    NSString *_mbtype;
}

@property(retain, nonatomic) NSString *mbtype; // @synthesize mbtype=_mbtype;
@property(retain, nonatomic) NSString *mbrank; // @synthesize mbrank=_mbrank;
@property(retain, nonatomic) NSString *urank; // @synthesize urank=_urank;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSNumber *fans_count; // @synthesize fans_count=_fans_count;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *verified_reason; // @synthesize verified_reason=_verified_reason;
@property(retain, nonatomic) NSString *verified_type; // @synthesize verified_type=_verified_type;
@property(retain, nonatomic) NSString *verified; // @synthesize verified=_verified;
@property(retain, nonatomic) NSString *job; // @synthesize job=_job;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *artist_id; // @synthesize artist_id=_artist_id;
@property(retain, nonatomic) NSString *id_; // @synthesize id_=_id_;
@property(retain, nonatomic) NSString *avatar_large; // @synthesize avatar_large=_avatar_large;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;
- (void)sendFollowWithSharedData:(id)arg1;

@end

