//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, QQAsynUrlImageView, UIButton, UILabel, UIView;

@interface ADPopupPanel : UIControl
{
    NSString *_pic;
    NSString *_desc;
    NSString *_buttonTitle;
    NSString *_openURL;
    UIView *_panel;
    QQAsynUrlImageView *_urlImageView;
    UILabel *_descLabel;
    UIButton *_bigButton;
    UIButton *_closeButton;
    int _reportKey;
}

@property(nonatomic) int reportKey; // @synthesize reportKey=_reportKey;
- (void).cxx_destruct;
- (void)onClose;
- (void)onClick;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 pic:(id)arg2 desc:(id)arg3 buttonTitle:(id)arg4 openURL:(id)arg5 btnBgColor:(id)arg6;

@end
