//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface TTLiveMessageCard : NSObject
{
    NSString *_cardId;
    NSString *_icon;
    NSString *_name;
    NSNumber *_vip;
    NSString *_summary;
    NSString *_sourceIcon;
    NSString *_sourceName;
}

@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSString *sourceIcon; // @synthesize sourceIcon=_sourceIcon;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSNumber *vip; // @synthesize vip=_vip;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;

@end

