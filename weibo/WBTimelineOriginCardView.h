//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, WBCustomLabel, WBStatus, WBTimelineAttributedTextView;

@interface WBTimelineOriginCardView : UIView
{
    WBStatus *_status;
    UIImageView *_imageView;
    WBCustomLabel *_titleLabel;
    WBTimelineAttributedTextView *_textLabel;
    UIButton *_touchBtn;
    NSString *_imageUrl;
    _Bool _didLoadImage;
    int toMessageContentViewControllerSelectedTabIndex;
}

+ (id)viewWithFrame:(struct CGRect)arg1 andStatus:(id)arg2;
@property(nonatomic) int toMessageContentViewControllerSelectedTabIndex; // @synthesize toMessageContentViewControllerSelectedTabIndex;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)_layoutContents;
- (id)_getText;
- (id)_getTitle;
- (id)_getImageUrl;
@property(retain, nonatomic) WBStatus *status;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)dealloc;
- (void)touchUpInside:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andStatus:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

