//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class APCheckBox, APLinkButton, UIImage;

@interface APAgreementBox : UIControl
{
    _Bool _disabled;
    APCheckBox *_checkBox;
    APLinkButton *_linkButton;
    UIImage *_checkedImage;
    UIImage *_uncheckedImage;
}

@property(retain, nonatomic) UIImage *uncheckedImage; // @synthesize uncheckedImage=_uncheckedImage;
@property(retain, nonatomic) UIImage *checkedImage; // @synthesize checkedImage=_checkedImage;
@property(retain, nonatomic) APLinkButton *linkButton; // @synthesize linkButton=_linkButton;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) APCheckBox *checkBox; // @synthesize checkBox=_checkBox;
- (void).cxx_destruct;
- (void)setCheckBoxHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 labelText:(id)arg2 linkText:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

