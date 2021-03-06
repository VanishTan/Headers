//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMUserAdapter-Protocol.h"

@class NSString, TBAMPUser;

@interface TBIMUserAMP : NSObject <TBIMUserAdapter>
{
    TBAMPUser *_data;
}

@property(retain, nonatomic) TBAMPUser *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)isFriend;
- (_Bool)isSelf;
- (_Bool)isEqual:(id)arg1;
- (id)actionURL;
- (id)intro;
- (id)linkGroupJsonString;
- (id)typeImageName;
- (id)getHeadURL;
- (id)defualtHeadPic;
- (int)userType;
- (int)uType;
- (int)userRelationType;
- (long long)getBizSubId;
- (id)getDisplayNamePinYin;
- (id)getPhoneNum;
- (id)getHeadPicImage;
- (id)getHeadPic;
- (_Bool)isEmptyForDisplayName;
- (id)getDisplayName;
- (id)getTaobaoID;
- (id)getNick;
- (id)getInerData;
- (id)tagStyle;
- (id)uTag;
- (id)initWithData:(id)arg1;
- (id)initWithUserId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

