//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface AliDetailContractPhoneNavigationBar : UIView
{
    CDUnknownBlockType _backBlock;
    NSString *_title;
    UIButton *_leftButton;
    UILabel *_centerLabel;
}

@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
- (void).cxx_destruct;
- (void)goBackEvent;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

