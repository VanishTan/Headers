//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@protocol IFTSBaseProtocol, IFTSFavoriteEngine, IFTSFileEngine, IFTSFunctionEngine, IFTSMsgEngine, IFTSRelationEngine;

@protocol IFTSEngineFactory <NSObject>
- (id <IFTSFunctionEngine>)getFTSFunctionEngineForJsAPI;
- (id <IFTSFileEngine>)getFTSFileEngineForJsAPI;
- (id <IFTSFavoriteEngine>)getFTSFavoriteEngineForJsAPI;
- (id <IFTSMsgEngine>)getFTSMsgEngineForJsAPI;
- (id <IFTSBaseProtocol>)getFTSCreateDiscussGroupEngineForJsAPI;
- (id <IFTSRelationEngine>)getFTSRelationEngineForJsAPI;
- (id <IFTSFunctionEngine>)getFTSFunctionEngine;
- (id <IFTSFileEngine>)getFTSFileEngine;
- (id <IFTSFavoriteEngine>)getFTSFavoriteEngine;
- (id <IFTSMsgEngine>)getFTSMsgEngine;
- (id <IFTSBaseProtocol>)getFTSCreateDiscussGroupEngine;
- (id <IFTSRelationEngine>)getFTSRelationEngine;
@end
