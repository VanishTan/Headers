//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWERecordSticker, NSString;

@protocol AWEStickerPickerDelegate <NSObject>
- (void)pickerDidFinish:(id)arg1;
- (void)applySticker:(AWERecordSticker *)arg1 completion:(void (^)(_Bool))arg2;

@optional
- (void)configureNeedShowBonusView:(_Bool)arg1;
- (_Bool)needShowBonusView;
- (void)saveBlessWords:(NSString *)arg1;
@end
