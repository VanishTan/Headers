//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WBWarningTipOverlayView : UIView
{
    NSString *_warningStr;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) NSString *warningStr; // @synthesize warningStr=_warningStr;
- (void).cxx_destruct;
- (double)fontSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

