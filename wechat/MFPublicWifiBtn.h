//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "MFBanner-Protocol.h"

@class APBase, UIImageView, UILabel;

@interface MFPublicWifiBtn : UIButton <MFBanner>
{
    UILabel *_title;
    UIImageView *_icon;
    APBase *_apBase;
}

@property(retain, nonatomic) APBase *apBase; // @synthesize apBase=_apBase;
- (void).cxx_destruct;
- (void)updateStatus:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
