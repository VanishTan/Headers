//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSString;

@interface QQVIPFunctionComicAlertView : UIAlertView <UIAlertViewDelegate>
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _firstBlock;
    QQVIPFunctionComicAlertView *_keepSelf;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4 firstOtherButtonTitle:(id)arg5 firstOtherBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
