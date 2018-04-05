//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class MBKGrayTextFieldModel, NSString, UILabel, UITextField;

@interface MBKGrayTextField : UIView <UITextFieldDelegate>
{
    UILabel *_titleLabel;
    UITextField *_textField;
    MBKGrayTextFieldModel *_model;
    NSString *_result;
    CDUnknownBlockType _fieldBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fieldBlock; // @synthesize fieldBlock=_fieldBlock;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
@property(retain, nonatomic) MBKGrayTextFieldModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)textFieldEditChanged:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (double)getTitleWidth;
- (void)makeConstraints;
- (id)initWithModel:(id)arg1 fieldBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

