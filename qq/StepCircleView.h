//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface StepCircleView : UIView
{
    _Bool _isStopLoading;
    long long _currentNum;
    NSArray *_numArray;
    UIView *_numBgView;
}

- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)updateStepNum:(long long)arg1 animation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetNumBgViewToFirstcComponent;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

