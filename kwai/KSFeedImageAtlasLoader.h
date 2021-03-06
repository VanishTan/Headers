//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache;

@interface KSFeedImageAtlasLoader : NSObject
{
    long long _numberOfImages;
    NSCache *_imageCache;
    NSArray *_imagePaths;
    NSArray *_imageURLs;
}

@property(retain, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(retain, nonatomic) NSArray *imagePaths; // @synthesize imagePaths=_imagePaths;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) long long numberOfImages; // @synthesize numberOfImages=_numberOfImages;
- (void).cxx_destruct;
- (void)loadImageForView:(id)arg1 atIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithImagePaths:(id)arg1;
- (id)initWithImageURLs:(id)arg1;
- (id)initWithAtlas:(id)arg1;

@end

