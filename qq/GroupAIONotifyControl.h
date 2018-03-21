//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/ContentNotifyControl.h>

@class GroupAioNotificationModel, NSDictionary, NSString, UIColor, UILabel;

@interface GroupAIONotifyControl : ContentNotifyControl
{
    UIColor *_contentColor;
    UIColor *_titleColor;
    NSString *_content;
    NSString *_clickUrl;
    GroupAioNotificationModel *_notifyModel;
    NSDictionary *_userData;
    UILabel *_contentLabel;
    UILabel *_titleLabel;
    double _titleLineHeight;
    double _contentLineHeight;
    double _notifyWidth;
    long long _remindMsgSeq;
}

@property(nonatomic) long long remindMsgSeq; // @synthesize remindMsgSeq=_remindMsgSeq;
- (void)popUp;
- (void)closeWhenComplete:(CDUnknownBlockType)arg1;
- (struct CGRect)calcViewRect;
- (void)setIcon:(id)arg1;
- (void)setHeadImageUrl:(id)arg1;
- (void)setUin:(id)arg1 isQQFriend:(_Bool)arg2;
@property(retain, nonatomic) NSString *content; // @dynamic content;
- (void)setTitle:(id)arg1;
@property(retain, nonatomic) UIColor *titleColor; // @dynamic titleColor;
@property(retain, nonatomic) UIColor *contentColor; // @dynamic contentColor;
- (id)viewForIcon;
- (id)viewForHeader;
- (id)labelForContent;
- (id)labelForTitle;
- (void)touchUpOutsideButton;
- (void)touchDownButton;
- (void)setSkinColor;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *clickUrl; // @dynamic clickUrl;
@property(retain, nonatomic) GroupAioNotificationModel *notifyModel; // @dynamic notifyModel;
@property(retain, nonatomic) NSDictionary *userData; // @dynamic userData;

@end
