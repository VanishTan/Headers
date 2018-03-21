//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBPopOperation.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UIAlertView;
@protocol TBNewVersionAlertDelegate;

@interface TBNewVersionAlertPopOperation : TBPopOperation <UIAlertViewDelegate>
{
    _Bool _isAVShowing;
    NSString *_title;
    NSString *_message;
    NSString *_cancelButton;
    NSString *_otherButton;
    id <TBNewVersionAlertDelegate> _delegate;
    UIAlertView *_alert;
}

@property(retain, nonatomic) UIAlertView *alert; // @synthesize alert=_alert;
@property(nonatomic) _Bool isAVShowing; // @synthesize isAVShowing=_isAVShowing;
@property(nonatomic) __weak id <TBNewVersionAlertDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *otherButton; // @synthesize otherButton=_otherButton;
@property(copy, nonatomic) NSString *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didPresentAlertView:(id)arg1;
- (_Bool)isShowing;
- (_Bool)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
