//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBBaseShareHandler.h"

@class TBShareScanCodeViewModel;

@interface TBScanCodeShareHandler : TBBaseShareHandler
{
    _Bool _isLoading;
    TBShareScanCodeViewModel *_scancodeViewModel;
}

@property(retain, nonatomic) TBShareScanCodeViewModel *scancodeViewModel; // @synthesize scancodeViewModel=_scancodeViewModel;
- (void).cxx_destruct;
- (void)dismissQRView;
- (_Bool)canShare;
- (void)shareToTarget:(id)arg1 withInfo:(id)arg2;
- (void)setViewController:(id)arg1;

@end

