//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQPublishViewEventDelegate-Protocol.h>

@class NSMutableDictionary, NSString, QQPublishViewController;

@interface QQPublishViewHandler : NSObject <QQPublishViewEventDelegate>
{
    _Bool _canPreuploadImage;
    NSMutableDictionary *_publishInfo;
    QQPublishViewController *_publishView;
    int _xo;
}

- (void)dataReport:(int)arg1 withInfor:(id)arg2;
- (void)dealloc;
- (id)getImageUploadRequest;
- (id)initWithParam:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool canPreuploadImage; // @dynamic canPreuploadImage;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableDictionary *publishInfo; // @dynamic publishInfo;
@property(nonatomic) QQPublishViewController *publishView; // @dynamic publishView;
@property(readonly) Class superclass;

@end

