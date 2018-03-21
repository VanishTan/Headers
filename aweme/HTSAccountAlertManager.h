//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface HTSAccountAlertManager : NSObject <UIAlertViewDelegate>
{
    NSString *_title;
    NSString *_message;
    NSMutableDictionary *_actionDictionary;
    NSMutableArray *_buttonTitleArray;
}

+ (id)topViewControllerForController:(id)arg1;
+ (id)topViewController;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *buttonTitleArray; // @synthesize buttonTitleArray=_buttonTitleArray;
@property(retain, nonatomic) NSMutableDictionary *actionDictionary; // @synthesize actionDictionary=_actionDictionary;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)performActionWithButtonIndex:(long long)arg1;
- (void)show;
- (void)clear;
- (void)setActionTitle:(id)arg1 withActionBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
