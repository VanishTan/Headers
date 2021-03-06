//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TTLSwitchThumb, TTLSwitchTrack, UIColor, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface TTLDanmakuSwitch : UIControl <UIGestureRecognizerDelegate>
{
    _Bool _on;
    _Bool _disabled;
    UIColor *_onColor;
    UIColor *_offColor;
    UIColor *_onTextColor;
    UIColor *_offTextColor;
    UIColor *_thumbColor;
    CDUnknownBlockType _didChangedHandler;
    NSString *_disableReason;
    TTLSwitchThumb *_thumb;
    TTLSwitchTrack *_track;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) TTLSwitchTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) TTLSwitchThumb *thumb; // @synthesize thumb=_thumb;
@property(retain, nonatomic) NSString *disableReason; // @synthesize disableReason=_disableReason;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(copy, nonatomic) CDUnknownBlockType didChangedHandler; // @synthesize didChangedHandler=_didChangedHandler;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
@property(retain, nonatomic) UIColor *thumbColor; // @synthesize thumbColor=_thumbColor;
@property(retain, nonatomic) UIColor *offTextColor; // @synthesize offTextColor=_offTextColor;
@property(retain, nonatomic) UIColor *onTextColor; // @synthesize onTextColor=_onTextColor;
@property(retain, nonatomic) UIColor *offColor; // @synthesize offColor=_offColor;
@property(retain, nonatomic) UIColor *onColor; // @synthesize onColor=_onColor;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setThumbOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setThumbIsTracking:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setThumbIsTracking:(_Bool)arg1;
- (void)toggleState;
- (void)pan:(id)arg1;
- (void)tap:(id)arg1;
- (void)changeHeight:(double)arg1;
- (void)updateView:(_Bool)arg1;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

