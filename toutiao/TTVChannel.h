//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface TTVChannel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) int categoryType; // @dynamic categoryType;
@property(nonatomic) int flag; // @dynamic flag;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *subChannelArray; // @dynamic subChannelArray;
@property(readonly, nonatomic) unsigned long long subChannelArray_Count; // @dynamic subChannelArray_Count;
@property(nonatomic) int type; // @dynamic type;

@end

