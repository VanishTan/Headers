//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBBWebViewController.h"

#import "ALBBWebViewDelegate-Protocol.h"

@class NSString;

@interface ALBBIVCheckViewController : ALBBWebViewController <ALBBWebViewDelegate>
{
    CDUnknownBlockType _ivHandler;
}

@property(copy, nonatomic) CDUnknownBlockType ivHandler; // @synthesize ivHandler=_ivHandler;
- (void).cxx_destruct;
- (void)willWebViewCloseCallback:(id)arg1 request:(id)arg2 params:(id)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

