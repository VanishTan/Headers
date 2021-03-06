//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QZUPnPServiceModel;

@interface QZUPnPModel : NSObject
{
    NSString *_friendlyName;
    NSString *_modelName;
    NSString *_urlHeader;
    QZUPnPServiceModel *_AVTransportServiceModel;
    QZUPnPServiceModel *_RenderControlServiceModel;
}

@property(retain, nonatomic) QZUPnPServiceModel *RenderControlServiceModel; // @synthesize RenderControlServiceModel=_RenderControlServiceModel;
@property(retain, nonatomic) QZUPnPServiceModel *AVTransportServiceModel; // @synthesize AVTransportServiceModel=_AVTransportServiceModel;
@property(copy, nonatomic) NSString *urlHeader; // @synthesize urlHeader=_urlHeader;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;

@end

