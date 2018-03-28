//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSString, SSThemedLabel, TTAlphaThemedButton, TTAsyncCornerImageView;

@interface TTCertificationSuccessBottomView : SSThemedView
{
    SSThemedLabel *_titleLabel;
    TTAsyncCornerImageView *_iconView;
    SSThemedLabel *_nameLabel;
    SSThemedLabel *_occupationalLabel;
    NSString *_occupationalText;
    NSString *_authType;
    TTAlphaThemedButton *_modifyCertificationBtn;
}

@property(retain, nonatomic) TTAlphaThemedButton *modifyCertificationBtn; // @synthesize modifyCertificationBtn=_modifyCertificationBtn;
@property(copy, nonatomic) NSString *authType; // @synthesize authType=_authType;
@property(copy, nonatomic) NSString *occupationalText; // @synthesize occupationalText=_occupationalText;
@property(retain, nonatomic) SSThemedLabel *occupationalLabel; // @synthesize occupationalLabel=_occupationalLabel;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) TTAsyncCornerImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end
