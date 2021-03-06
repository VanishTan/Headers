//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/PersonalSignTextView.h>

@class NSString, RichStateButton;

@interface RichNormalEditor : PersonalSignTextView
{
    int _actionID;
    struct _NSRange _savedRange;
    RichStateButton *_doBtn;
    NSString *_holderSpaces;
}

@property(retain, nonatomic) NSString *holderSpaces; // @synthesize holderSpaces=_holderSpaces;
@property(retain, nonatomic) RichStateButton *doBtn; // @synthesize doBtn=_doBtn;
- (void).cxx_destruct;
- (void)richStateCallback:(id)arg1;
- (long long)checkInputDirect;
- (void)reloadSelection:(id)arg1;
- (void)saveSelection;
- (id)parseString:(id)arg1;
- (id)getInputString;
- (void)deleteAction;
- (void)willDeleteAction;
- (void)normalAction;
- (void)updateAction:(id)arg1 text:(id)arg2 actionID:(int)arg3;
- (id)setAction:(id)arg1 text:(id)arg2;
- (void)loadRichState:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

