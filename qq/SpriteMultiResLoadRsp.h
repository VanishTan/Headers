//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, SpriteActionModle, SpriteClothesModel, SpriteRoleModel;

@interface SpriteMultiResLoadRsp : NSObject
{
    SpriteRoleModel *_roleModel;
    NSArray *_clothesModelArr;
    SpriteClothesModel *_namePlateModel;
    SpriteActionModle *_actionModel;
    SpriteClothesModel *_bubbleModel;
    id _userData;
}

@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(retain, nonatomic) SpriteClothesModel *bubbleModel; // @synthesize bubbleModel=_bubbleModel;
@property(retain, nonatomic) SpriteActionModle *actionModel; // @synthesize actionModel=_actionModel;
@property(retain, nonatomic) SpriteClothesModel *namePlateModel; // @synthesize namePlateModel=_namePlateModel;
@property(retain, nonatomic) NSArray *clothesModelArr; // @synthesize clothesModelArr=_clothesModelArr;
@property(retain, nonatomic) SpriteRoleModel *roleModel; // @synthesize roleModel=_roleModel;
- (void)dealloc;

@end

