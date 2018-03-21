//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, NSTimer, UILabel, UITapGestureRecognizer;
@protocol TBStoryYellowToastDelegate;

@interface TBStoryYellowToast : UIView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_tapGesture;
    UILabel *_title;
    NSTimer *_timer;
    id <TBStoryYellowToastDelegate> _delegate;
}

@property(nonatomic) __weak id <TBStoryYellowToastDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)timerAction:(id)arg1;
- (void)tapGestureResponse:(id)arg1;
- (void)disMissYellowToastWithAnimation:(_Bool)arg1;
- (void)showYellowToastInView:(id)arg1 withMessage:(id)arg2;
- (void)resetFrame;
- (void)stopTimer;
- (void)startTimer;
- (void)addTapGesture;
- (void)InitUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
