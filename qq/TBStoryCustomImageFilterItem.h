//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBStoryVideoVisualEffectsItem.h>

@class NSArray, NSString, UIImageView;

@interface TBStoryCustomImageFilterItem : TBStoryVideoVisualEffectsItem
{
    int _nPicHeight;
    int _nPicWidth;
    int _nStandardHeight;
    int _nStandardWidth;
    int _nAlign;
    NSArray *_marginArray;
    NSString *_imageName;
    NSString *_jsonPath;
    UIImageView *_imageView;
}

- (void)updateItem;
- (void)parseJson;
- (void)updateImage;
- (id)init;
- (_Bool)isPublish;
- (void)dealloc;

@end
