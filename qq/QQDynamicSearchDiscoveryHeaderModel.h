//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface QQDynamicSearchDiscoveryHeaderModel : QQModel
{
    NSString *_title;
    NSString *_iconUrl;
    NSString *_mornText;
    NSString *_mornUrl;
    int _xo;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(copy, nonatomic) NSString *mornText; // @dynamic mornText;
@property(copy, nonatomic) NSString *mornUrl; // @dynamic mornUrl;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

