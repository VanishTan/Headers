//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface TTFclient_v1_open_treasure_chest_response : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cardNum; // @dynamic cardNum;
@property(nonatomic) long long cashSum; // @dynamic cashSum;
@property(nonatomic) int errNo; // @dynamic errNo;
@property(copy, nonatomic) NSString *errTips; // @dynamic errTips;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(copy, nonatomic) NSString *successText; // @dynamic successText;
@property(nonatomic) int treasure; // @dynamic treasure;

@end
