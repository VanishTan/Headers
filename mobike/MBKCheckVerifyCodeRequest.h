//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKCheckVerifyCodeRequest : MBKMobikeRequest
{
    long long _bizType;
    NSString *_capt;
}

@property(copy, nonatomic) NSString *capt; // @synthesize capt=_capt;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (id)init;

@end

