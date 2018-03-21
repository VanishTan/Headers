//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol AliDetailPromotionItemModel;

@interface AliDetailPromotionModel : TBJSONModel
{
    long long _promotionId;
    NSString *_link;
    NSString *_picUrl;
    NSString *_bgPicUrl;
    NSArray<AliDetailPromotionItemModel> *_memo;
    NSString *_promotionType;
    NSString *_naviIconUrl;
    NSString *_naviIconUrl4iPad;
    NSString *_navBgColor;
    NSString *_navBgPic;
}

@property(retain, nonatomic) NSString *navBgPic; // @synthesize navBgPic=_navBgPic;
@property(retain, nonatomic) NSString *navBgColor; // @synthesize navBgColor=_navBgColor;
@property(retain, nonatomic) NSString *naviIconUrl4iPad; // @synthesize naviIconUrl4iPad=_naviIconUrl4iPad;
@property(retain, nonatomic) NSString *naviIconUrl; // @synthesize naviIconUrl=_naviIconUrl;
@property(retain, nonatomic) NSString *promotionType; // @synthesize promotionType=_promotionType;
@property(retain, nonatomic) NSArray<AliDetailPromotionItemModel> *memo; // @synthesize memo=_memo;
@property(copy, nonatomic) NSString *bgPicUrl; // @synthesize bgPicUrl=_bgPicUrl;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) long long promotionId; // @synthesize promotionId=_promotionId;
- (void).cxx_destruct;

@end
