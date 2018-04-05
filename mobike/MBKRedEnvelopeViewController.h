//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKTransparentWebViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class MBKRedPacketPlaceholderView, NSString, UIButton, UIView;

@interface MBKRedEnvelopeViewController : MBKTransparentWebViewController <UIWebViewDelegate>
{
    double _redEnvelopeRatio;
    long long _redEnvelopeType;
    MBKRedPacketPlaceholderView *_placeholderView;
    UIView *_envelopeView;
    UIView *_enveCoverView;
    UIView *_titleView;
    UIButton *_openButton;
}

+ (id)showWithURLString:(id)arg1 redEnvelopeRatio:(double)arg2 redEnvelopeType:(long long)arg3;
@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *enveCoverView; // @synthesize enveCoverView=_enveCoverView;
@property(retain, nonatomic) UIView *envelopeView; // @synthesize envelopeView=_envelopeView;
@property(retain, nonatomic) MBKRedPacketPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(nonatomic) long long redEnvelopeType; // @synthesize redEnvelopeType=_redEnvelopeType;
@property(nonatomic) double redEnvelopeRatio; // @synthesize redEnvelopeRatio=_redEnvelopeRatio;
- (void).cxx_destruct;
- (void)showWebView;
- (void)moveDownEnvelope;
- (void)onTapOpenBtn:(id)arg1;
- (void)showRedEnvelope;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

