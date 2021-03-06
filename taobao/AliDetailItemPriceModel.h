//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailPriceEntity, AliDetailTransmitPrice, NSArray, NSString;
@protocol AliDetailPriceDescModel, AliDetailPriceEntity, AliDetailPriceTagModel, AliDetailShopPromModel;

@interface AliDetailItemPriceModel : TBJSONModel
{
    AliDetailPriceEntity *_price;
    AliDetailPriceEntity *_subPrice;
    AliDetailPriceEntity *_sugPromPrice;
    NSString *_depositText;
    AliDetailPriceEntity *_depositPrice;
    AliDetailTransmitPrice *_transmitPrice;
    NSArray<AliDetailPriceEntity> *_extraPricesNew;
    NSString *_depositTextColor;
    NSArray<AliDetailPriceEntity> *_extraPrices;
    NSArray<AliDetailPriceDescModel> *_wholePriceDescs;
    NSString *_limitText;
    long long _limit;
    long long _quantity;
    NSString *_quantityText;
    NSString *_priceTip;
    NSArray<AliDetailPriceTagModel> *_priceTag;
    NSArray<AliDetailShopPromModel> *_shopProm;
}

+ (id)jsonToModelKeyMapDictionary;
@property(retain, nonatomic) NSArray<AliDetailShopPromModel> *shopProm; // @synthesize shopProm=_shopProm;
@property(retain, nonatomic) NSArray<AliDetailPriceTagModel> *priceTag; // @synthesize priceTag=_priceTag;
@property(copy, nonatomic) NSString *priceTip; // @synthesize priceTip=_priceTip;
@property(copy, nonatomic) NSString *quantityText; // @synthesize quantityText=_quantityText;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSString *limitText; // @synthesize limitText=_limitText;
@property(retain, nonatomic) NSArray<AliDetailPriceDescModel> *wholePriceDescs; // @synthesize wholePriceDescs=_wholePriceDescs;
@property(retain, nonatomic) NSArray<AliDetailPriceEntity> *extraPrices; // @synthesize extraPrices=_extraPrices;
@property(copy, nonatomic) NSString *depositTextColor; // @synthesize depositTextColor=_depositTextColor;
@property(retain, nonatomic) NSArray<AliDetailPriceEntity> *extraPricesNew; // @synthesize extraPricesNew=_extraPricesNew;
@property(retain, nonatomic) AliDetailTransmitPrice *transmitPrice; // @synthesize transmitPrice=_transmitPrice;
@property(copy, nonatomic) AliDetailPriceEntity *depositPrice; // @synthesize depositPrice=_depositPrice;
@property(copy, nonatomic) NSString *depositText; // @synthesize depositText=_depositText;
@property(retain, nonatomic) AliDetailPriceEntity *sugPromPrice; // @synthesize sugPromPrice=_sugPromPrice;
@property(retain, nonatomic) AliDetailPriceEntity *subPrice; // @synthesize subPrice=_subPrice;
@property(retain, nonatomic) AliDetailPriceEntity *price; // @synthesize price=_price;
- (void).cxx_destruct;

@end

