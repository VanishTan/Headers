//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface GDMCommonModle : NSObject
{
    _Bool _isPraise;
    _Bool _isFansPrice;
    _Bool _isFollowed;
    _Bool _isV;
    _Bool _isAd;
    _Bool _isJn;
    float _adHeight;
    NSString *_accountId;
    NSString *_accountNick;
    NSString *_accountExplain;
    NSString *_accountDesc;
    NSString *_headImg;
    NSArray *_imgs;
    NSString *_content;
    NSString *_contentTitle;
    NSString *_itemTitle;
    NSString *_itemImg;
    NSString *_itemPrice;
    NSString *_itemId;
    NSString *_itemDiscountPrice;
    NSString *_timeStamp;
    NSString *_timeForDisplay;
    NSString *_url;
    NSString *_recommendReason;
    NSString *_trackInfo;
    NSString *_commentCount;
    NSString *_praiseCount;
    NSString *_viewCount;
    NSString *_willHideFollowButtonWhenFollowed;
    NSString *_feedId;
    NSString *_feedType;
    NSString *_accountUrl;
    long long _pageNum;
    NSArray *_adList;
    NSArray *_comments;
    NSString *_publistTime;
    NSString *_taoAge;
    NSString *_bannerImage;
    NSString *_chid;
    NSString *_albumTitle;
    NSMutableArray *_gMDGBGItemArray;
    NSArray *_tagList;
    NSString *_discountDesc;
    NSString *_itemCount;
}

+ (id)modleFromDict:(id)arg1;
@property(retain, nonatomic) NSString *itemCount; // @synthesize itemCount=_itemCount;
@property(retain) NSString *discountDesc; // @synthesize discountDesc=_discountDesc;
@property float adHeight; // @synthesize adHeight=_adHeight;
@property _Bool isJn; // @synthesize isJn=_isJn;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(retain) NSMutableArray *gMDGBGItemArray; // @synthesize gMDGBGItemArray=_gMDGBGItemArray;
@property(copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain) NSString *chid; // @synthesize chid=_chid;
@property(retain) NSString *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(retain) NSString *taoAge; // @synthesize taoAge=_taoAge;
@property(retain) NSString *publistTime; // @synthesize publistTime=_publistTime;
@property(retain) NSArray *comments; // @synthesize comments=_comments;
@property _Bool isAd; // @synthesize isAd=_isAd;
@property(retain) NSArray *adList; // @synthesize adList=_adList;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(retain) NSString *accountUrl; // @synthesize accountUrl=_accountUrl;
@property(retain) NSString *feedType; // @synthesize feedType=_feedType;
@property(retain) NSString *feedId; // @synthesize feedId=_feedId;
@property _Bool isV; // @synthesize isV=_isV;
@property(retain, nonatomic) NSString *willHideFollowButtonWhenFollowed; // @synthesize willHideFollowButtonWhenFollowed=_willHideFollowButtonWhenFollowed;
@property _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property _Bool isFansPrice; // @synthesize isFansPrice=_isFansPrice;
@property(retain, nonatomic) NSString *viewCount; // @synthesize viewCount=_viewCount;
@property(nonatomic) _Bool isPraise; // @synthesize isPraise=_isPraise;
@property(retain) NSString *praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain) NSString *commentCount; // @synthesize commentCount=_commentCount;
@property(retain) NSString *trackInfo; // @synthesize trackInfo=_trackInfo;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain) NSString *url; // @synthesize url=_url;
@property(retain) NSString *timeForDisplay; // @synthesize timeForDisplay=_timeForDisplay;
@property(retain) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain) NSString *itemDiscountPrice; // @synthesize itemDiscountPrice=_itemDiscountPrice;
@property(retain) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain) NSString *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(retain) NSString *itemImg; // @synthesize itemImg=_itemImg;
@property(retain) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(retain) NSString *content; // @synthesize content=_content;
@property(retain) NSArray *imgs; // @synthesize imgs=_imgs;
@property(retain) NSString *headImg; // @synthesize headImg=_headImg;
@property(retain, nonatomic) NSString *accountDesc; // @synthesize accountDesc=_accountDesc;
@property(retain) NSString *accountExplain; // @synthesize accountExplain=_accountExplain;
@property(retain) NSString *accountNick; // @synthesize accountNick=_accountNick;
@property(retain) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (void)proessCommentWithArray:(id)arg1;

@end
