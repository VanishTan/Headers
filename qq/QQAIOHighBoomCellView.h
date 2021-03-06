//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOCommonCellView.h>

@class EMView, QQAIOFlashChatArkSourceView, UIActivityIndicatorView, UIImageView;

@interface QQAIOHighBoomCellView : QQAIOCommonCellView
{
    EMView *_emView;
    UIImageView *_imageView;
    UIActivityIndicatorView *_loadingView;
    QQAIOFlashChatArkSourceView *_sourceView;
}

- (id)getMenuItems;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawBubble;
- (id)sourceView;
- (void)willDrawBubble;
- (void)preparePaopao:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

@end

