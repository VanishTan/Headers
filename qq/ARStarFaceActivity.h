//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface ARStarFaceActivity : QQModel
{
    NSString *_actId;
    NSString *_starName;
    NSString *_uin;
    NSString *_actTitle;
    NSString *_actDes;
    NSString *_jumpUrl;
    NSString *_iconUrl;
    double _begineTime;
    double _endTime;
}

@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double begineTime; // @synthesize begineTime=_begineTime;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *actDes; // @synthesize actDes=_actDes;
@property(copy, nonatomic) NSString *actTitle; // @synthesize actTitle=_actTitle;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(copy, nonatomic) NSString *starName; // @synthesize starName=_starName;
@property(copy, nonatomic) NSString *actId; // @synthesize actId=_actId;
- (void).cxx_destruct;
- (id)description;

@end

