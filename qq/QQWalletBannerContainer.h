//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface QQWalletBannerContainer : NSObject
{
    NSArray *_banners;
    long long _count;
    struct CGSize _imageSize;
    NSMutableDictionary *_requestResults;
    CDUnknownBlockType _completeBlock;
}

- (void).cxx_destruct;
- (void)ifGetAllBannerImages;
- (void)requestAllBannerImages:(CDUnknownBlockType)arg1;
- (id)initWithBanners:(id)arg1;

@end

