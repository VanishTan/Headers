//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQMultimediaPreEditComponent.h>

#import <QQMainProject/QQSubtitleCollectViewDelegate-Protocol.h>

@class NSArray, NSString, NSTimer, QQSubtitleConfigModel, QQSubtitleDataStorage, QQSubtitleView, UIView;
@protocol QQMultimediaSubtitlerDelegate;

@interface QQMultimediaSubtitlerComponent : QQMultimediaPreEditComponent <QQSubtitleCollectViewDelegate>
{
    UIView *_subtitlePanel;
    _Bool _cleareFlag;
    unsigned long long _startRecordTime;
    id <QQMultimediaSubtitlerDelegate> _subtitleDelegate;
    QQSubtitleConfigModel *_selectedItem;
    NSArray *_data;
    QQSubtitleView *_subtitlePreView;
    QQSubtitleDataStorage *_subtitleDataStorage;
    NSTimer *_audioToTextProcessingCenterTimer;
}

@property(retain, nonatomic) NSTimer *audioToTextProcessingCenterTimer; // @synthesize audioToTextProcessingCenterTimer=_audioToTextProcessingCenterTimer;
@property(retain, nonatomic) QQSubtitleDataStorage *subtitleDataStorage; // @synthesize subtitleDataStorage=_subtitleDataStorage;
@property(retain, nonatomic) QQSubtitleView *subtitlePreView; // @synthesize subtitlePreView=_subtitlePreView;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) QQSubtitleConfigModel *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) __weak id <QQMultimediaSubtitlerDelegate> subtitleDelegate; // @synthesize subtitleDelegate=_subtitleDelegate;
- (void).cxx_destruct;
- (void)showSubtitleTip;
- (void)buttonClicked;
- (void)onAppDeActive;
- (void)onAppActive;
- (void)onSubTitlesNotification:(id)arg1;
- (void)didSelectedSubtitleItem:(id)arg1;
- (void)stopAudioTransformationTimerAction;
- (void)setSelectedSubtitleItem:(id)arg1;
- (void)refreshComponentViewForPanel:(_Bool)arg1;
- (void)cleareAllData;
- (void)remakeRecord;
- (void)stopRecord;
- (void)startRecord;
- (id)getFilterCollectView;
- (void)firstOpenCamera;
- (_Bool)isResourceReady:(id)arg1;
- (void)createUI;
- (void)dealloc;
- (id)initWithCaptureEditMode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
