//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBStoryMediaScanner : NSObject
{
}

+ (_Bool)isScreenshot:(id)arg1;
+ (_Bool)assetHasExif:(id)arg1;
+ (id)uuidForAsset:(id)arg1;
+ (void)getEventPhotoBeforDays:(long long)arg1 cacheEventPhotos:(id)arg2 eventMinPhotoCount:(long long)arg3 onComplete:(CDUnknownBlockType)arg4;
+ (void)scanEntranceOnComplete:(CDUnknownBlockType)arg1;

@end

