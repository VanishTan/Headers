//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QRTabBarRedPointItem.h>

@class NSString, UIView;

@interface ReadViewToolBarItem : QRTabBarRedPointItem
{
    UIView *_obj;
    int _type;
    _Bool _isSelected;
    NSString *_imageDayStr;
    NSString *_imageDayHLStr;
    NSString *_imageNightStr;
    NSString *_imageNightHLStr;
    NSString *_imageDayStr2;
    NSString *_imageNightStr2;
    NSString *_firstShowRedPointKey;
    int _xo;
}

- (void)adjustRedItemPos;
- (void)setDayMode:(_Bool)arg1;
- (void)setText:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) UIView *obj; // @dynamic obj;
- (void)clearFirstShowRedPoint:(id)arg1;
- (void)setFirstShowRedPointWithKey:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (CDUnknownBlockType)getRedPointItemLayoutBlock;

// Remaining properties
@property(retain, nonatomic) NSString *imageDayHLStr; // @dynamic imageDayHLStr;
@property(retain, nonatomic) NSString *imageDayStr; // @dynamic imageDayStr;
@property(retain, nonatomic) NSString *imageDayStr2; // @dynamic imageDayStr2;
@property(retain, nonatomic) NSString *imageNightHLStr; // @dynamic imageNightHLStr;
@property(retain, nonatomic) NSString *imageNightStr; // @dynamic imageNightStr;
@property(retain, nonatomic) NSString *imageNightStr2; // @dynamic imageNightStr2;
@property(nonatomic) int type; // @dynamic type;

@end
