//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class LiveUserListAvatarURLModel, LivingUserListUserAttrs, NSNumber, NSString;

@interface LiveUserListUserModel : MTLModel <MTLJSONSerializing>
{
    _Bool _sinaVerified;
    NSNumber *_userID;
    LivingUserListUserAttrs *_livingRoomAttrs;
    LiveUserListAvatarURLModel *_avatarThumb;
    LiveUserListAvatarURLModel *_gradeIcon;
    LiveUserListAvatarURLModel *_liveIcon;
    NSNumber *_gradeLevel;
}

+ (id)livingRoomAttrsJSONTransformer;
+ (id)liveIconJSONTransformer;
+ (id)gradeIconJSONTransformer;
+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSNumber *gradeLevel; // @synthesize gradeLevel=_gradeLevel;
@property(readonly, nonatomic) LiveUserListAvatarURLModel *liveIcon; // @synthesize liveIcon=_liveIcon;
@property(readonly, nonatomic) LiveUserListAvatarURLModel *gradeIcon; // @synthesize gradeIcon=_gradeIcon;
@property(readonly, nonatomic) LiveUserListAvatarURLModel *avatarThumb; // @synthesize avatarThumb=_avatarThumb;
@property(readonly, nonatomic) LivingUserListUserAttrs *livingRoomAttrs; // @synthesize livingRoomAttrs=_livingRoomAttrs;
@property(nonatomic) _Bool sinaVerified; // @synthesize sinaVerified=_sinaVerified;
@property(readonly, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

