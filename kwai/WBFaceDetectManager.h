//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LiveDetectorDelegate-Protocol.h"

@class LiveDetector, NSString;
@protocol WBFaceDetectManagerDelegate;

@interface WBFaceDetectManager : NSObject <LiveDetectorDelegate>
{
    _Bool _shouldDetectLiveness;
    int _curType;
    id <WBFaceDetectManagerDelegate> _delegate;
    LiveDetector *_liveDetector;
    NSString *_activeType;
}

+ (int)setUpLiveDetectorLicence:(id)arg1;
@property(nonatomic) int curType; // @synthesize curType=_curType;
@property(copy, nonatomic) NSString *activeType; // @synthesize activeType=_activeType;
@property(retain, nonatomic) LiveDetector *liveDetector; // @synthesize liveDetector=_liveDetector;
@property(nonatomic) __weak id <WBFaceDetectManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldDetectLiveness; // @synthesize shouldDetectLiveness=_shouldDetectLiveness;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)getWBLivenessDetectionTypeFrom:(unsigned long long)arg1;
- (unsigned long long)getLivenessDetectionTypeFrom:(long long)arg1;
- (void)onFrameDetected:(id)arg1 detectType:(unsigned long long)arg2 errmsg:(id)arg3;
- (void)onDetectionSuccess:(id)arg1 detectType:(unsigned long long)arg2;
- (void)onDetectionFailed:(id)arg1 detectType:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id)getPoses;
- (id)getPupils;
- (struct CGRect)getFaceRect;
- (_Bool)getPrepareStageFlag;
- (long long)getWBLivenessDetectingTypeFromNSString:(id)arg1;
- (id)filtrateActiveType:(id)arg1;
- (void)setDetectSequencen:(id)arg1;
- (void)startNextDetectType;
- (id)faceImageAndGetBestImage;
- (id)getIlluminationScore;
- (void)stopDetection;
- (void)startPrepareStage;
- (void)doDetectFace:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)isFaceDetected;
- (void)resetLiveDetecter;
- (id)getLivingResultBestImage;
- (void)endToGetBestImage;
- (void)beginToGetBestImage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

