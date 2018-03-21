//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LYWDispatch-Protocol.h"
#import "LYWSubscribe-Protocol.h"

@class NSString, _LYWStore;
@protocol LYWMiddleware;

@interface LYWStore : NSObject <LYWSubscribe, LYWDispatch>
{
    _LYWStore *_store;
    id <LYWMiddleware> _headerMiddleware;
}

@property(retain, nonatomic) id <LYWMiddleware> headerMiddleware; // @synthesize headerMiddleware=_headerMiddleware;
@property(retain, nonatomic) _LYWStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)setupHeaderMiddleware:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (void)subscribe:(id)arg1 selector:(CDUnknownBlockType)arg2;
- (id)dispatchAction:(id)arg1;
- (id)state;
- (id)initWithReducer:(id)arg1 middleware:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
