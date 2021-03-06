//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface SubscribeRecmdResult : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasHasNextPage;
    _Bool _hasResultCode;
    _Bool _hasResultMsg;
    _Bool _hasNextPage;
    int _resultCode;
    NSMutableArray *_subscribeRecmdList;
    NSString *_resultMsg;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(retain, nonatomic) NSMutableArray *subscribeRecmdList; // @synthesize subscribeRecmdList=_subscribeRecmdList;
@property(readonly) _Bool hasResultMsg; // @synthesize hasResultMsg=_hasResultMsg;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
@property(readonly) _Bool hasHasNextPage; // @synthesize hasHasNextPage=_hasHasNextPage;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addSubscribeRecmdList:(id)arg1;
- (void)setSubscribeRecmdListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

