//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTextField.h"

@class SSThemedButton, SSThemedView;

@interface WDCustomCloseButtonTextField : SSThemedTextField
{
    SSThemedView *_bottomLine;
    SSThemedButton *_closeButton;
}

@property(retain, nonatomic) SSThemedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void).cxx_destruct;
- (void)clearText:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

