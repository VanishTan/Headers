//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface GdtAdResponse : NSObject
{
    int _ret;
    NSString *_msg;
    NSMutableArray *_posAdsInfoArray;
    NSString *_gdtCookie;
    NSString *_busiCookie;
}

@property(copy, nonatomic) NSString *busiCookie; // @synthesize busiCookie=_busiCookie;
@property(copy, nonatomic) NSString *gdtCookie; // @synthesize gdtCookie=_gdtCookie;
@property(retain, nonatomic) NSMutableArray *posAdsInfoArray; // @synthesize posAdsInfoArray=_posAdsInfoArray;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int ret; // @synthesize ret=_ret;

@end

