//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateJSONModel.h"

@class NSString;

@interface TBRateUserInfo : TBRateJSONModel
{
    NSString *_userId;
    NSString *_userIdMark;
    NSString *_userNick;
    NSString *_userPic;
    NSString *_userCredit;
    NSString *_userCreditPic;
    NSString *_userProfileURL;
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) NSString *userProfileURL; // @synthesize userProfileURL=_userProfileURL;
@property(retain, nonatomic) NSString *userCreditPic; // @synthesize userCreditPic=_userCreditPic;
@property(retain, nonatomic) NSString *userCredit; // @synthesize userCredit=_userCredit;
@property(retain, nonatomic) NSString *userPic; // @synthesize userPic=_userPic;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(retain, nonatomic) NSString *userIdMark; // @synthesize userIdMark=_userIdMark;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

