//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBHintBoard.h"

@class NSString, UIImageView;

@interface WBSwitchGroupHintBoard : WBHintBoard
{
    UIImageView *arrowImageView;
    NSString *_switchGroupScheme;
}

@property(retain) NSString *switchGroupScheme; // @synthesize switchGroupScheme=_switchGroupScheme;
- (void).cxx_destruct;
- (void)relayout;
- (void)layoutSubviews;
- (void)initHintLabel;
- (void)initBackgroundImageView;
- (void)dealloc;
- (void)initArrowView;

@end

