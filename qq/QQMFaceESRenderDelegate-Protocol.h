//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class CAEAGLLayer;

@protocol QQMFaceESRenderDelegate <NSObject>

@optional
- (void)removeContext;
- (_Bool)resizeFromLayer:(CAEAGLLayer *)arg1;
- (void)clear;
- (void)render:(char *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
@end

