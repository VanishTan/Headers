//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/FaceWallImageDelegate-Protocol.h>

@class FaceWallImageView, NSString, QQChatViewTable, QQGroupRobotWelMsgExInfo, QQGroupRobotWelcomeAIOModel, UIActivityIndicatorView, UIImageView, UILabel;

@interface QQGroupRobotWelAIOMsgView : UIView <FaceWallImageDelegate>
{
    QQGroupRobotWelcomeAIOModel *_groupRobotAIOModel;
    QQGroupRobotWelMsgExInfo *_robotExInfo;
    int _xo;
    UILabel *_title;
    UILabel *_voiceNumLabel;
    UIView *_backgroudView;
    UIView *_contentView;
    FaceWallImageView *_iconDownloader;
    UIImageView *_iconImgView;
    double _nickNameHeight;
    UIActivityIndicatorView *_juHuaView;
    _Bool _isZhuanJuHua;
    UIImageView *_voiceImgView;
    QQChatViewTable *_chatViewTable;
}

+ (id)labelWithFontSize:(double)arg1 color:(id)arg2;
+ (double)heightForModel:(id)arg1;
@property(nonatomic) __weak QQChatViewTable *chatViewTable; // @synthesize chatViewTable=_chatViewTable;
- (void).cxx_destruct;
- (void)notifyNetWorkError:(id)arg1;
- (void)notifyDownloadFail:(id)arg1;
- (void)notifyDownloadSuccess:(id)arg1;
- (void)onAnimationStop;
- (void)onClickMsgView:(id)arg1;
- (void)voiceOverSupport;
- (struct CGRect)bubleFrame;
- (void)setModel:(id)arg1;
- (void)juHuaZhuan:(id)arg1;
- (void)checkjuHua;
- (void)layoutSubviews;
- (void)commonInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithChatViewTable:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIView *backgroudView; // @dynamic backgroudView;
@property(retain, nonatomic) UIView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) QQGroupRobotWelcomeAIOModel *groupRobotAIOModel; // @dynamic groupRobotAIOModel;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) FaceWallImageView *iconDownloader; // @dynamic iconDownloader;
@property(retain, nonatomic) UIImageView *iconImgView; // @dynamic iconImgView;
@property(nonatomic) _Bool isZhuanJuHua; // @dynamic isZhuanJuHua;
@property(retain, nonatomic) UIActivityIndicatorView *juHuaView; // @dynamic juHuaView;
@property(nonatomic) double nickNameHeight; // @dynamic nickNameHeight;
@property(retain, nonatomic) QQGroupRobotWelMsgExInfo *robotExInfo; // @dynamic robotExInfo;
@property(readonly) Class superclass;
@property(retain, nonatomic) UILabel *title; // @dynamic title;
@property(retain, nonatomic) UIImageView *voiceImgView; // @dynamic voiceImgView;
@property(retain, nonatomic) UILabel *voiceNumLabel; // @dynamic voiceNumLabel;

@end
