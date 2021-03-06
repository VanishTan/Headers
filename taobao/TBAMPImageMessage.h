//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBAMPMessage.h"

@class NSString, UIImage;

@interface TBAMPImageMessage : TBAMPMessage
{
    _Bool _isEmoticon;
    NSString *_url;
    UIImage *_image;
    NSString *_packId;
    NSString *_emoticonId;
    NSString *_imgUrl;
    NSString *_gifUrl;
    NSString *_name;
    long long _width;
    long long _height;
    NSString *_cacheImagePath;
}

@property(copy, nonatomic) NSString *cacheImagePath; // @synthesize cacheImagePath=_cacheImagePath;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *gifUrl; // @synthesize gifUrl=_gifUrl;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *emoticonId; // @synthesize emoticonId=_emoticonId;
@property(copy, nonatomic) NSString *packId; // @synthesize packId=_packId;
@property(nonatomic) _Bool isEmoticon; // @synthesize isEmoticon=_isEmoticon;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)parseFromDict:(id)arg1;
- (void)loadFromCoreDataMessage:(id)arg1;
- (void)copyToCoreDataMessage:(id)arg1;
- (void)loadDataWithMessage:(id)arg1;
- (id)ampDeepCopy;
- (id)initWithMessage:(id)arg1;
- (id)initWithJson:(id)arg1;
- (id)toDictionary;

@end

