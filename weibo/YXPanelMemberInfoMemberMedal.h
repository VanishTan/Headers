//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXModel.h"

@class NSString;

@interface YXPanelMemberInfoMemberMedal : YXModel
{
    NSString *_avgColor;
    NSString *_medalIcon;
    NSString *_medalTitle;
    NSString *_bgColor;
    NSString *_fontColor;
    long long _type;
    NSString *_bgImage;
    double _medalW;
    double _medalH;
}

@property(nonatomic) double medalH; // @synthesize medalH=_medalH;
@property(nonatomic) double medalW; // @synthesize medalW=_medalW;
@property(retain, nonatomic) NSString *bgImage; // @synthesize bgImage=_bgImage;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) NSString *medalTitle; // @synthesize medalTitle=_medalTitle;
@property(retain, nonatomic) NSString *medalIcon; // @synthesize medalIcon=_medalIcon;
@property(retain, nonatomic) NSString *avgColor; // @synthesize avgColor=_avgColor;
- (void).cxx_destruct;
- (id)init;

@end

