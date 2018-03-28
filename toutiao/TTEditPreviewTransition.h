//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, TTEditVideoViewController, TTRecordVideoPreviewViewController;

@interface TTEditPreviewTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _present;
    TTEditVideoViewController *_editVideoViewController;
    TTRecordVideoPreviewViewController *_previewController;
}

@property(nonatomic) _Bool present; // @synthesize present=_present;
@property(retain, nonatomic) TTRecordVideoPreviewViewController *previewController; // @synthesize previewController=_previewController;
@property(retain, nonatomic) TTEditVideoViewController *editVideoViewController; // @synthesize editVideoViewController=_editVideoViewController;
- (void).cxx_destruct;
- (id)takeSnapshotOfView:(id)arg1;
- (void)animateTransition:(id)arg1;
- (struct CGSize)aspectFitSizeFor:(struct CGSize)arg1 inSuperSize:(struct CGSize)arg2;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
