//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBBACWebViewController.h"

#import "ALBBWebViewDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface ALBBFindPwdViewController : ALBBACWebViewController <ALBBWebViewDelegate>
{
    _Bool _historyUserRetrievePwd;
    NSString *_scene;
    NSString *_havanaId;
    NSDictionary *_ext;
}

@property(copy, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *havanaId; // @synthesize havanaId=_havanaId;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool historyUserRetrievePwd; // @synthesize historyUserRetrievePwd=_historyUserRetrievePwd;
- (void).cxx_destruct;
- (void)getFindPasswordUrl:(id)arg1 ext:(id)arg2;
- (void)getAccountCenterURL:(id)arg1 ext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
