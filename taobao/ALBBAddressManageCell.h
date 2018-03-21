//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ALBBBlockButton, ALBBShippingAddress, UIImageView, UILabel, UIView;

@interface ALBBAddressManageCell : UITableViewCell
{
    ALBBShippingAddress *_address;
    ALBBBlockButton *_editButton;
    ALBBBlockButton *_deleteButton;
    ALBBBlockButton *_setAsDefaultButton;
    UILabel *_nameLabel;
    UILabel *_mobileLabel;
    UILabel *_addressLabel;
    UIView *_dotSplitLine;
    UIView *_lineView;
    UIView *_splitLine;
    UIView *_kinshipView;
    UILabel *_kinshipLable;
    UIImageView *_kinshipImageView;
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2;
@property(retain, nonatomic) UIImageView *kinshipImageView; // @synthesize kinshipImageView=_kinshipImageView;
@property(retain, nonatomic) UILabel *kinshipLable; // @synthesize kinshipLable=_kinshipLable;
@property(retain, nonatomic) UIView *kinshipView; // @synthesize kinshipView=_kinshipView;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *dotSplitLine; // @synthesize dotSplitLine=_dotSplitLine;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) ALBBBlockButton *setAsDefaultButton; // @synthesize setAsDefaultButton=_setAsDefaultButton;
@property(retain, nonatomic) ALBBBlockButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) ALBBBlockButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) ALBBShippingAddress *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)createBlockButtonWithTitle:(id)arg1;
- (id)createLabelWithTextColor:(id)arg1 fontSize:(double)arg2;

@end
