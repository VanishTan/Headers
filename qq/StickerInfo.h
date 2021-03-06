//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSString, UIImage;

@interface StickerInfo : NSObject <NSCoding>
{
    unsigned int _stickerId;
    unsigned int _angle;
    unsigned int _fontId;
    long long _type;
    NSString *_text;
    NSString *_fontColor;
    long long _fontType;
    UIImage *_image;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long fontType; // @synthesize fontType=_fontType;
@property(copy, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(nonatomic) unsigned int fontId; // @synthesize fontId=_fontId;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned int angle; // @synthesize angle=_angle;
@property(nonatomic) unsigned int stickerId; // @synthesize stickerId=_stickerId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)getUrlParam;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

