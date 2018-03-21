//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JSContext, NSDictionary, NSString;

@interface O2OTemplate : NSObject
{
    _Bool _sectioned;
    _Bool _asyncDisplay;
    _Bool _accessibilityHidden;
    NSString *_tplId;
    NSDictionary *_templateDict;
    NSDictionary *_config;
    NSDictionary *_initialState;
    Class _controllerClass;
    NSString *_nativeId;
    NSString *_reuseIdentifier;
    NSDictionary *_rawDict;
    JSContext *_jsContext;
}

@property(readonly, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(readonly, nonatomic) NSDictionary *rawDict; // @synthesize rawDict=_rawDict;
@property(readonly, nonatomic) _Bool accessibilityHidden; // @synthesize accessibilityHidden=_accessibilityHidden;
@property(readonly, nonatomic) _Bool asyncDisplay; // @synthesize asyncDisplay=_asyncDisplay;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(readonly, nonatomic) NSString *nativeId; // @synthesize nativeId=_nativeId;
@property(readonly, nonatomic) _Bool sectioned; // @synthesize sectioned=_sectioned;
@property(readonly, nonatomic) Class controllerClass; // @synthesize controllerClass=_controllerClass;
@property(readonly, nonatomic) NSDictionary *initialState; // @synthesize initialState=_initialState;
@property(readonly, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSDictionary *templateDict; // @synthesize templateDict=_templateDict;
@property(readonly, nonatomic) NSString *tplId; // @synthesize tplId=_tplId;
- (void).cxx_destruct;
- (void)registerTypes:(id)arg1 inContext:(id)arg2;
- (void)registerGlobalFunctions:(id)arg1;
- (id)jsContextBuilder;
- (id)initWithId:(id)arg1 dictionary:(id)arg2;

@end
