//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/WYCollectionResuableHeaderView.h>

@class NSString, UIButton;

@interface CPACollectionReusableHeader : WYCollectionResuableHeaderView
{
    NSString *_yearString;
    NSString *_locationShowName;
    UIButton *_locationButton;
}

@property(readonly, nonatomic) UIButton *locationButton; // @synthesize locationButton=_locationButton;
@property(retain, nonatomic) NSString *locationShowName; // @synthesize locationShowName=_locationShowName;
@property(retain, nonatomic) NSString *yearString; // @synthesize yearString=_yearString;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;
- (void)locationAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
