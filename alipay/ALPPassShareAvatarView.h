//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface ALPPassShareAvatarView : UIView
{
    NSMutableArray *_avatarViews;
}

@property(retain, nonatomic) NSMutableArray *avatarViews; // @synthesize avatarViews=_avatarViews;
- (void).cxx_destruct;
- (void)setupDefaultAvatarViews;
- (id)avatarViewWithUrl:(id)arg1 image:(id)arg2;
- (void)layoutAvatarView:(id)arg1 besideView:(id)arg2 position:(id)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end
