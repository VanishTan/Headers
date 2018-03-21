//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KS_user_info.h"

#import "KSSearchIndexable-Protocol.h"

@class KSRecommendUserExtraInfo, NSArray, NSNumber, NSString;

@interface KSRecommendUser : KS_user_info <KSSearchIndexable>
{
    _Bool _followRequesting;
    NSNumber *_is_followed;
    NSNumber *_platform;
    NSString *_platformString;
    NSNumber *_userSexNumber;
    NSNumber *_distance;
    KSRecommendUserExtraInfo *_extra;
    NSString *_ussid;
    NSArray *_representativeWorks;
}

+ (_Bool)isPrivateSearchItem;
+ (id)searchDomainIdentifier;
+ (id)mj_objectClassInArray;
+ (id)mj_replacedKeyFromPropertyName;
@property(retain, nonatomic) NSArray *representativeWorks; // @synthesize representativeWorks=_representativeWorks;
@property(retain, nonatomic) NSString *ussid; // @synthesize ussid=_ussid;
@property(retain, nonatomic) KSRecommendUserExtraInfo *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSNumber *userSexNumber; // @synthesize userSexNumber=_userSexNumber;
@property(retain, nonatomic) NSString *platformString; // @synthesize platformString=_platformString;
@property(retain, nonatomic) NSNumber *platform; // @synthesize platform=_platform;
@property(nonatomic) _Bool followRequesting; // @synthesize followRequesting=_followRequesting;
@property(retain, nonatomic) NSNumber *is_followed; // @synthesize is_followed=_is_followed;
- (void).cxx_destruct;
- (void)fetchThumbnailDataCompletion:(CDUnknownBlockType)arg1;
- (id)searchIndexContent;
- (id)searchIndexKeywords;
- (id)searchIndexTitle;
- (id)searchIndexId;
- (long long)searchIndexLife;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isRecommendByContact;
- (id)formatAttributeString:(id)arg1 withKeyword:(id)arg2;
- (id)attributedRemarkName;
- (id)attributedUserName;
- (void)setSuggestionWord:(id)arg1;
@property(retain, nonatomic) NSArray *feedIDs;
@property(retain, nonatomic) NSNumber *index;
@property(nonatomic) _Bool hasShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
