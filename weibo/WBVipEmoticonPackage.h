//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, NSString;

@interface WBVipEmoticonPackage : WBModelObject
{
    _Bool silence;
    _Bool enable;
    NSString *pkgID;
    NSString *pkgName;
    double pkgSize;
    double pkgVersion;
    NSString *pkgCheck;
    NSString *pkgScheme;
    NSString *downloadUrl;
    NSString *coverUrl;
    NSString *thumbUrl;
    NSString *thumbGrayUrl;
    long long permissionType;
    long long pkgState;
    NSString *tipsDesc;
    NSString *leftButton;
    NSString *rightButton;
    NSString *payScheme;
    NSArray *emoticonList;
    long long downloadType;
}

@property(nonatomic) long long downloadType; // @synthesize downloadType;
@property(retain, nonatomic) NSArray *emoticonList; // @synthesize emoticonList;
@property(retain, nonatomic) NSString *payScheme; // @synthesize payScheme;
@property(retain, nonatomic) NSString *rightButton; // @synthesize rightButton;
@property(retain, nonatomic) NSString *leftButton; // @synthesize leftButton;
@property(retain, nonatomic) NSString *tipsDesc; // @synthesize tipsDesc;
@property(nonatomic) long long pkgState; // @synthesize pkgState;
@property(nonatomic) long long permissionType; // @synthesize permissionType;
@property(nonatomic) _Bool enable; // @synthesize enable;
@property(nonatomic) _Bool silence; // @synthesize silence;
@property(retain, nonatomic) NSString *thumbGrayUrl; // @synthesize thumbGrayUrl;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl;
@property(retain, nonatomic) NSString *pkgScheme; // @synthesize pkgScheme;
@property(retain, nonatomic) NSString *pkgCheck; // @synthesize pkgCheck;
@property(nonatomic) double pkgVersion; // @synthesize pkgVersion;
@property(nonatomic) double pkgSize; // @synthesize pkgSize;
@property(retain, nonatomic) NSString *pkgName; // @synthesize pkgName;
@property(retain, nonatomic) NSString *pkgID; // @synthesize pkgID;
- (void).cxx_destruct;
- (void)dealloc;
- (id)permissionTextWithType:(long long)arg1;
- (id)toJSONDictionary;
- (_Bool)updateWithLocalDictionary:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (id)thumb;
- (id)emoticonAtIndex:(unsigned long long)arg1;
- (long long)numberOfPages;

@end

