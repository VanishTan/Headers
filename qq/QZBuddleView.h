//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, QZJAdBannerQueryADBannerUnit;

@interface QZBuddleView : UIButton
{
    NSString *_picUrl;
    QZJAdBannerQueryADBannerUnit *_bannerInfo;
}

@property(retain, nonatomic) QZJAdBannerQueryADBannerUnit *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
- (void).cxx_destruct;
- (void)scaleToPercent:(double)arg1;
- (void)animateWithInfoArray:(id)arg1;
- (void)startAnimation;
- (void)reportClick;
- (void)reportExpose;
- (void)updateBuddleInfo:(id)arg1;
- (id)obtainJmpUrl;
- (id)init;

@end
