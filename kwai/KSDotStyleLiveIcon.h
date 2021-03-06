//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIColor, UILabel, UIView;

@interface KSDotStyleLiveIcon : UIImageView
{
    UIColor *_dotColor;
    UIView *_dotView;
    UILabel *_livingLabel;
}

@property(retain, nonatomic) UILabel *livingLabel; // @synthesize livingLabel=_livingLabel;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
- (void).cxx_destruct;
- (void)ks_startAnimating;
- (void)ks_stopAnimating;
- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

