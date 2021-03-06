//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "TTVDetailRelatedADInfoDataProtocol-Protocol.h"

@class NSString, TTImageInfosModel, TTVRelatedVideoAD, TTVVideoArticle;

@interface TTVRelatedVideoADPic : GPBMessage <TTVDetailRelatedADInfoDataProtocol>
{
}

+ (id)descriptor;
- (id)adModel;
@property(readonly, nonatomic) int ui_type;
@property(readonly, nonatomic) NSString *uniqueIDStr;
@property(readonly, nonatomic) NSString *ad_id;
@property(readonly, nonatomic) NSString *button_text;
@property(readonly, nonatomic) TTImageInfosModel *middleImageInfosModel;
@property(readonly, nonatomic) NSString *creative_type;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *source;
@property(readonly, nonatomic) NSString *show_tag;
@property(readonly, nonatomic) NSString *card_type;
- (_Bool)isValidAd;

// Remaining properties
@property(retain, nonatomic) TTVRelatedVideoAD *ad; // @dynamic ad;
@property(retain, nonatomic) TTVVideoArticle *article; // @dynamic article;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasAd; // @dynamic hasAd;
@property(nonatomic) _Bool hasArticle; // @dynamic hasArticle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

