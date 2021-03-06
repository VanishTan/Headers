//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UILabel, UITextView;

@interface TB3DBizFeedbackView : UIView <UITextViewDelegate>
{
    CDUnknownBlockType _closeCallback;
    CDUnknownBlockType _submitCallback;
    NSString *_identifier;
    UILabel *_titleLabel;
    UITextView *_feedbackTextView;
}

@property(retain, nonatomic) UITextView *feedbackTextView; // @synthesize feedbackTextView=_feedbackTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType submitCallback; // @synthesize submitCallback=_submitCallback;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)substring:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)submitFeedback;
- (void)closeFeedback;
- (void)setupSubmitButton;
- (void)setupTextView;
- (void)setupTitleLabel;
- (void)setupCloseButton;
- (id)initWithFrame:(struct CGRect)arg1 bizIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

