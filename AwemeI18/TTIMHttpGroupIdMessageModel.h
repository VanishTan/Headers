//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol TTIMHttpChatMessageModel;

@interface TTIMHttpGroupIdMessageModel : JSONModel
{
    NSString *_groupID;
    NSArray<TTIMHttpChatMessageModel> *_messages;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSArray<TTIMHttpChatMessageModel> *messages; // @synthesize messages=_messages;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (id)transformToPBModel;

@end

