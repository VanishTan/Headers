//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBShareQRCodeContainerView, TBShareQRCodeModel, TBShareQrcodePopView, UIViewController;

@interface TBShareQRCodeViewModel : NSObject
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _cancelBlock;
    TBShareQRCodeContainerView *_qrView;
    TBShareQrcodePopView *_popView;
    TBShareQRCodeModel *_model;
    UIViewController *_parentViewController;
    long long _oldBarStyle;
}

@property(nonatomic) long long oldBarStyle; // @synthesize oldBarStyle=_oldBarStyle;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) TBShareQRCodeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) TBShareQrcodePopView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) TBShareQRCodeContainerView *qrView; // @synthesize qrView=_qrView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)resetStatusBar;
- (void)setStatusBar;
- (void)dismissQRView;
- (void)dismiss;
- (void)shareToService:(id)arg1 withImage:(id)arg2;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)shareWithModel:(id)arg1 viewController:(id)arg2;

@end

