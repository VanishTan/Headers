//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQInputTextViewController.h>

@class NSAttributedString;

@interface QQInputDefaultTextViewController : QQInputTextViewController
{
    NSAttributedString *_tmpTextContent;
}

+ (void)encodeSendData:(id)arg1 outData:(id)arg2;
@property(copy, nonatomic) NSAttributedString *tmpTextContent; // @synthesize tmpTextContent=_tmpTextContent;
- (void).cxx_destruct;
- (void)textDidChangedForMario;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)sendData:(id)arg1 showText:(id)arg2;
- (void)textViewDidChangeAbsolutely;
- (void)didPressReturnKey;
- (_Bool)canPressReturnKey;
- (_Bool)shouldSendEmptyContent;
- (_Bool)didHandleExceedMaxCharCount;
- (void)setDidShowRedPointForInputbarItem:(id)arg1;
- (_Bool)shouldShowRedPointForInputbarItem:(id)arg1;
- (void)setupInputbarItems;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTableView:(id)arg1;

@end

