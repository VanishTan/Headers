//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, TTTabBarImageModel;

@interface TTTabBarImageList : NSObject
{
    NSDictionary *_normalItems;
    TTTabBarImageModel *_refreshItem;
    TTTabBarImageModel *_unloginItem;
    TTTabBarImageModel *_backgroundItem;
    TTTabBarImageModel *_publishItem;
    TTTabBarImageModel *_middleButtonItem;
}

@property(retain, nonatomic) TTTabBarImageModel *middleButtonItem; // @synthesize middleButtonItem=_middleButtonItem;
@property(retain, nonatomic) TTTabBarImageModel *publishItem; // @synthesize publishItem=_publishItem;
@property(retain, nonatomic) TTTabBarImageModel *backgroundItem; // @synthesize backgroundItem=_backgroundItem;
@property(retain, nonatomic) TTTabBarImageModel *unloginItem; // @synthesize unloginItem=_unloginItem;
@property(retain, nonatomic) TTTabBarImageModel *refreshItem; // @synthesize refreshItem=_refreshItem;
@property(retain, nonatomic) NSDictionary *normalItems; // @synthesize normalItems=_normalItems;
- (void).cxx_destruct;

@end

