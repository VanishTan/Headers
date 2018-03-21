//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQGroupFileImageCellView.h>

#import <QQMainProject/CAAnimationDelegate-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/QZAutoPlayGifViewDelegate-Protocol.h>

@class CALayer, NSString, QZGifItemView, UIImageView;

@interface QQAIOGroupFilePicLCCellView : QQGroupFileImageCellView <QZAutoPlayGifViewDelegate, CAAnimationDelegate, QUIActionSheetDelegate>
{
    _Bool _hasDraw;
    QZGifItemView *_gifView;
    UIImageView *_errorView;
    CALayer *_highlightLayer;
}

@property(retain, nonatomic) CALayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(nonatomic) _Bool hasDraw; // @synthesize hasDraw=_hasDraw;
@property(retain, nonatomic) UIImageView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) QZGifItemView *gifView; // @synthesize gifView=_gifView;
- (_Bool)shouldHideFileInfo;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)shouldDisplayDouTuButton;
- (id)getEventModule;
- (id)getChatUIOperation;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendFailViewAction;
- (void)_gifViewShouldHidden:(_Bool)arg1;
- (_Bool)shouldDisplayMsgSendLoading;
- (_Bool)bubbleAction;
- (void)onFavorite:(id)arg1;
- (id)getMenuItems;
- (_Bool)canFavorite;
- (void)forwardTo:(id)arg1;
- (_Bool)canForward;
- (_Bool)canSendToPC;
- (_Bool)canForwardWeiyun;
- (_Bool)canReply;
- (_Bool)canCancelUpload;
- (_Bool)canCancelDownload;
- (_Bool)canPause;
- (_Bool)canResume;
- (_Bool)canDownload;
- (void)stopMessageAnimation;
- (void)startMessageAnimation;
- (void)didEndDisplay;
- (void)willDisplay;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_playEmojAnimation:(_Bool)arg1;
- (void)gifDownloadFailure:(id)arg1;
- (void)gifDownloadSuccess:(id)arg1;
- (id)bigEmojScaleAnimation;
- (id)rotateAnimation:(CDStruct_5741f4bb)arg1;
- (id)alphaAnimation;
- (id)pathMoveAnimation:(CDStruct_5741f4bb)arg1;
- (_Bool)containsText;
- (_Bool)shouldShowMenuItemAddToFace;
- (_Bool)shouldShowLightComment;
- (void)prepareForReuse;
- (void)startGifAnimationWithImage:(id)arg1;
- (void)drawBubble;
- (void)willDrawBubble;
- (void)layoutViewsAsSender;
- (void)layoutViewsAsReceiver;
- (void)setAioModel:(id)arg1;
- (void)refreshQuoteMsg:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
