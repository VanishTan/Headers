//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UILabel;

@interface AWELiveCommentInputAnimator : NSObject
{
    UILabel *_fakeCommentLabel;
    UILabel *_fakeBarrageLabel;
}

@property(retain, nonatomic) UILabel *fakeBarrageLabel; // @synthesize fakeBarrageLabel=_fakeBarrageLabel;
@property(retain, nonatomic) UILabel *fakeCommentLabel; // @synthesize fakeCommentLabel=_fakeCommentLabel;
- (void).cxx_destruct;
- (void)_removeFromView:(id)arg1;
- (void)_addToView:(id)arg1;
- (void)transferToCommentOnView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transferToBarrageOnView:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

