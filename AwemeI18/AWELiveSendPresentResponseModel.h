//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber;

@interface AWELiveSendPresentResponseModel : AWEBaseApiModel
{
    long long _userCoins;
    NSNumber *_presentID;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *presentID; // @synthesize presentID=_presentID;
@property(nonatomic) long long userCoins; // @synthesize userCoins=_userCoins;
- (void).cxx_destruct;

@end

