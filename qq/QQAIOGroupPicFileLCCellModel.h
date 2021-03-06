//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupFileAIOModel.h>

#import <QQMainProject/QQAIOGroupPicLCCellProtocol-Protocol.h>

@class NSString;

@interface QQAIOGroupPicFileLCCellModel : QQGroupFileAIOModel <QQAIOGroupPicLCCellProtocol>
{
    _Bool _oriGinMsgIsFail;
    QQGroupFileAIOModel *_originAIOModel;
}

+ (id)modelWithMessageModel:(id)arg1;
+ (id)OriginMsgModelHasFinishRequest;
@property(nonatomic) _Bool oriGinMsgIsFail; // @synthesize oriGinMsgIsFail=_oriGinMsgIsFail;
@property(retain, nonatomic) QQGroupFileAIOModel *originAIOModel; // @synthesize originAIOModel=_originAIOModel;
- (void).cxx_destruct;
- (id)lightCommentEmojID;
- (void)_setOriMessageModel:(id)arg1 forceFail:(_Bool)arg2;
- (void)refreshQuoteMsg:(id)arg1;
- (id)favoritesInfoModel;
- (double)cellHeight;
- (void)calculateBubbleImageSizeWithOriginImageSize:(struct CGSize)arg1;
- (id)accessibilityLabel;
- (_Bool)forceImageCellHeight;
- (_Bool)allowPreviewImage;
- (_Bool)shouldShowMenuItemAddToFace;
- (id)lightCommentEmoj;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)cellClassName;
- (void)dealloc;
- (id)initWithMessageModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

