//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;

@interface TTDetailNatantRelatedItemModel : JSONModel
{
    NSString *_title;
    NSString *_schema;
    NSString *_typeName;
    NSNumber *_typeDayColor;
    NSNumber *_typeNightColor;
    NSString *_groupId;
    NSString *_itemId;
    NSString *_impressionID;
    NSString *_aggrType;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *aggrType; // @synthesize aggrType=_aggrType;
@property(retain, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSNumber *typeNightColor; // @synthesize typeNightColor=_typeNightColor;
@property(retain, nonatomic) NSNumber *typeDayColor; // @synthesize typeDayColor=_typeDayColor;
@property(retain, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
