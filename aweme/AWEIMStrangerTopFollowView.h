//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AWEIMStrangerTopFollowView : UIView
{
    UIView *_baseView;
    UILabel *_tipLabel;
    UIButton *_followBtn;
}

@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshFollowBtnUIWithFollowStatus:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
