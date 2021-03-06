//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IESCamera, NSLock;

@interface AWECameraManager : NSObject
{
    _Bool _shouldPreventNewRecordController;
    IESCamera *_camera;
    NSLock *_lock;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool shouldPreventNewRecordController; // @synthesize shouldPreventNewRecordController=_shouldPreventNewRecordController;
@property(retain, nonatomic) IESCamera *camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (id)createCameraWithView:(id)arg1 videoData:(id)arg2 stickerDocumentPath:(id)arg3;
- (void)releaseCurrentCamera;
- (id)init;

@end

