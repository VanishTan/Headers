//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView;
@protocol TPADViewDelegate;

@interface CFT_TPADView : UIView
{
    UIImageView *_logoImageView;
    id <TPADViewDelegate> _delegate;
    NSString *_url;
    NSString *_logoImageUrl;
}

@property(retain, nonatomic) NSString *logoImageUrl; // @synthesize logoImageUrl=_logoImageUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) id <TPADViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onQQWalletImageDownloadFinishNotify:(id)arg1;
- (void)dealloc;
- (void)handleTap:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 titleColor:(id)arg3 logoImageUrl:(id)arg4 hasRightArrow:(_Bool)arg5 animationOn:(_Bool)arg6;

@end

