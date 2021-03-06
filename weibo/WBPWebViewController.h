//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBWebViewController.h"

#import "KKWebViewBridgeViewController-Protocol.h"

@class KKBodyElement, NSMutableDictionary, NSMutableSet, NSString, UIView;

@interface WBPWebViewController : WBWebViewController <KKWebViewBridgeViewController>
{
    _Bool _topbarHidden;
    NSMutableSet *_elementKeys;
    NSMutableDictionary *_elements;
    KKBodyElement *_bodyElement;
}

@property(nonatomic, getter=isTopbarHidden) _Bool topbarHidden; // @synthesize topbarHidden=_topbarHidden;
@property(retain, nonatomic) KKBodyElement *bodyElement; // @synthesize bodyElement=_bodyElement;
@property(retain, nonatomic) NSMutableDictionary *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) NSMutableSet *elementKeys; // @synthesize elementKeys=_elementKeys;
- (void).cxx_destruct;
- (void)closeFloatWindow;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)KKWebViewBridgeCommit:(id)arg1;
- (_Bool)wb_webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)wb_webViewDidFinishLoad:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (void)removeElement:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

