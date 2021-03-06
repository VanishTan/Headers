//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface UnlockRedCoolDownView : UIView
{
    CDUnknownBlockType _coolDownBlock;
    NSString *_titleString;
    NSString *_descString;
    UIView *_unlockView;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_confirmButton;
    UIButton *_noFaultButton;
    double _titleLabelHeight;
    double _descLabelHeight;
}

@property(nonatomic) double descLabelHeight; // @synthesize descLabelHeight=_descLabelHeight;
@property(nonatomic) double titleLabelHeight; // @synthesize titleLabelHeight=_titleLabelHeight;
@property(retain, nonatomic) UIButton *noFaultButton; // @synthesize noFaultButton=_noFaultButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *unlockView; // @synthesize unlockView=_unlockView;
@property(copy, nonatomic) NSString *descString; // @synthesize descString=_descString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(copy, nonatomic) CDUnknownBlockType coolDownBlock; // @synthesize coolDownBlock=_coolDownBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unShowWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)show;
- (void)backGroundClicked:(id)arg1;
- (void)noFaultButtonClicked:(id)arg1;
- (void)confirmButtonClicked:(id)arg1;
- (void)setUpReportViews;
- (id)init;

@end

