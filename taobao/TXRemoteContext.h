//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, TXMtopInfo;

@interface TXRemoteContext : NSObject
{
    NSMutableDictionary *_eventListener;
    TXMtopInfo *_info;
    id _parameter;
    NSMutableDictionary *_extra;
    NSMutableDictionary *_userInfo;
    NSMutableArray *_errorMessage;
}

@property(readonly, nonatomic) NSMutableArray *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSMutableDictionary *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) id parameter; // @synthesize parameter=_parameter;
@property(retain, nonatomic) TXMtopInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)getReturnBase:(id)arg1;
- (void)request;
- (void)addNSError:(id)arg1;
- (void)addErrorMessage:(id)arg1;
- (_Bool)hasError;
- (CDUnknownBlockType)getEventListenerByType:(int)arg1;
- (_Bool)hasEventListenerByType:(int)arg1;
- (void)addFailedEventListener:(CDUnknownBlockType)arg1;
- (void)addSuccessEventListener:(CDUnknownBlockType)arg1;
- (void)addEventListener:(CDUnknownBlockType)arg1 forType:(int)arg2;
- (id)init;

@end

