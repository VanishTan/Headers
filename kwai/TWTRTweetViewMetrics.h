//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TWTRTweetViewMetrics : NSObject
{
    double _actionsHeight;
    double _actionsBottomMargin;
    double _defaultMargin;
    double _defaultWidth;
    double _fullnameMarginBottom;
    double _imageMarginBottom;
    double _imageMarginTop;
    double _marginBottom;
    double _marginTop;
    double _profileImageSize;
    double _profileMarginLeft;
    double _profileMarginRight;
    double _profileMarginTop;
    double _regularMargin;
    double _retweetMargin;
    double _retweetHeight;
    NSDictionary *_metricsDictionary;
}

@property(retain, nonatomic) NSDictionary *metricsDictionary; // @synthesize metricsDictionary=_metricsDictionary;
@property(readonly, nonatomic) double retweetHeight; // @synthesize retweetHeight=_retweetHeight;
@property(readonly, nonatomic) double retweetMargin; // @synthesize retweetMargin=_retweetMargin;
@property(readonly, nonatomic) double regularMargin; // @synthesize regularMargin=_regularMargin;
@property(readonly, nonatomic) double profileMarginTop; // @synthesize profileMarginTop=_profileMarginTop;
@property(readonly, nonatomic) double profileMarginRight; // @synthesize profileMarginRight=_profileMarginRight;
@property(readonly, nonatomic) double profileMarginLeft; // @synthesize profileMarginLeft=_profileMarginLeft;
@property(readonly, nonatomic) double profileImageSize; // @synthesize profileImageSize=_profileImageSize;
@property(readonly, nonatomic) double marginTop; // @synthesize marginTop=_marginTop;
@property(readonly, nonatomic) double marginBottom; // @synthesize marginBottom=_marginBottom;
@property(readonly, nonatomic) double imageMarginTop; // @synthesize imageMarginTop=_imageMarginTop;
@property(readonly, nonatomic) double imageMarginBottom; // @synthesize imageMarginBottom=_imageMarginBottom;
@property(readonly, nonatomic) double fullnameMarginBottom; // @synthesize fullnameMarginBottom=_fullnameMarginBottom;
@property(readonly, nonatomic) double defaultWidth; // @synthesize defaultWidth=_defaultWidth;
@property(readonly, nonatomic) double defaultMargin; // @synthesize defaultMargin=_defaultMargin;
@property(readonly, nonatomic) double actionsBottomMargin; // @synthesize actionsBottomMargin=_actionsBottomMargin;
@property(readonly, nonatomic) double actionsHeight; // @synthesize actionsHeight=_actionsHeight;
- (void).cxx_destruct;
- (id)init;

@end

