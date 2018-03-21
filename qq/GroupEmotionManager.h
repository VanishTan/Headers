//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface GroupEmotionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_emotionDBQueue;
    _Bool _shouldShowGroupEmotionEntrance;
    _Bool _shouldDismissRD;
    _Bool _accountChange;
    long long _availableClickCount;
    long long _totalGroupEmotionCount;
}

+ (id)manager;
@property(nonatomic) _Bool accountChange; // @synthesize accountChange=_accountChange;
@property(nonatomic) _Bool shouldDismissRD; // @synthesize shouldDismissRD=_shouldDismissRD;
@property(nonatomic) long long totalGroupEmotionCount; // @synthesize totalGroupEmotionCount=_totalGroupEmotionCount;
@property(nonatomic) long long availableClickCount; // @synthesize availableClickCount=_availableClickCount;
- (void)groupEmotionReportOpName:(id)arg1 reserved2:(id)arg2;
- (void)deleteGroupEmotionMore;
- (void)delayDeleteGroupEmotionMore;
- (void)reciveMessageModel:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowGroupEmotionEntrance;
- (void)recallMessagePair:(id)arg1;
- (void)deleteGroupEmotionWithMd5:(id)arg1;
- (void)deleteMessageModel:(id)arg1;
- (id)GroupOrDiscussCode:(id)arg1;
- (id)translateTime:(unsigned long long)arg1;
- (_Bool)isRepeatCustomFace:(id)arg1;
- (void)reciveMessageArray:(id)arg1;
- (void)groupEmotionListWithCallBack:(CDUnknownBlockType)arg1;
- (id)groupEmotionList;
- (id)groupEmotionListWithOutTimestamp:(id)arg1;
- (_Bool)isMessageSuportGroupEmotion:(id)arg1;
- (id)init;

@end
