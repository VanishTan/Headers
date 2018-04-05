//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface PBBaseContact : NSObject <PBCoding>
{
    unsigned int conType;
    unsigned int sex;
    unsigned int type;
    unsigned int chatState;
    unsigned int qquin;
    unsigned int friendScene;
    unsigned int imgKey;
    unsigned int extKey;
    unsigned int imgKeyAtLastGet;
    unsigned int extKeyAtLastGet;
    unsigned int draftTime;
    NSString *userName;
    NSString *aliasName;
    NSString *nickName;
    NSString *fullPy;
    NSString *remark;
    NSString *remarkPyshort;
    NSString *remarkPyfull;
    NSString *imgStatus;
    NSString *hdimgStatus;
    NSString *headImgUrl;
    NSString *headHdimgUrl;
    NSString *draft;
    NSString *qqnickName;
    NSString *qqremark;
    NSString *mobileIdentify;
    NSString *atUserList;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *atUserList; // @synthesize atUserList;
@property(nonatomic) unsigned int draftTime; // @synthesize draftTime;
@property(nonatomic) unsigned int extKeyAtLastGet; // @synthesize extKeyAtLastGet;
@property(nonatomic) unsigned int imgKeyAtLastGet; // @synthesize imgKeyAtLastGet;
@property(nonatomic) unsigned int extKey; // @synthesize extKey;
@property(nonatomic) unsigned int imgKey; // @synthesize imgKey;
@property(nonatomic) unsigned int friendScene; // @synthesize friendScene;
@property(retain, nonatomic) NSString *mobileIdentify; // @synthesize mobileIdentify;
@property(retain, nonatomic) NSString *qqremark; // @synthesize qqremark;
@property(retain, nonatomic) NSString *qqnickName; // @synthesize qqnickName;
@property(nonatomic) unsigned int qquin; // @synthesize qquin;
@property(retain, nonatomic) NSString *draft; // @synthesize draft;
@property(retain, nonatomic) NSString *headHdimgUrl; // @synthesize headHdimgUrl;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl;
@property(retain, nonatomic) NSString *hdimgStatus; // @synthesize hdimgStatus;
@property(retain, nonatomic) NSString *imgStatus; // @synthesize imgStatus;
@property(nonatomic) unsigned int chatState; // @synthesize chatState;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(nonatomic) unsigned int sex; // @synthesize sex;
@property(retain, nonatomic) NSString *remarkPyfull; // @synthesize remarkPyfull;
@property(retain, nonatomic) NSString *remarkPyshort; // @synthesize remarkPyshort;
@property(retain, nonatomic) NSString *remark; // @synthesize remark;
@property(retain, nonatomic) NSString *fullPy; // @synthesize fullPy;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(nonatomic) unsigned int conType; // @synthesize conType;
@property(retain, nonatomic) NSString *aliasName; // @synthesize aliasName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (void)setFromCBaseContact:(id)arg1;
- (id)toCBaseContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

