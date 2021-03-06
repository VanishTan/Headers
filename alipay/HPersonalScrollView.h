//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class HPersonalAppManagerView, HPersonalLogoutView, NSMutableArray, NSMutableDictionary;

@interface HPersonalScrollView : UIScrollView
{
    HPersonalAppManagerView *_HPersonalAppManagerView;
    HPersonalLogoutView *_HPersonalLogoutView;
    _Bool _withHF;
    _Bool _hasLogo;
    NSMutableArray *_stageList;
    NSMutableDictionary *_extraInfo;
}

@property(nonatomic) _Bool hasLogo; // @synthesize hasLogo=_hasLogo;
@property(nonatomic) _Bool withHF; // @synthesize withHF=_withHF;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSMutableArray *stageList; // @synthesize stageList=_stageList;
- (void).cxx_destruct;
- (void)refreshWillAppearWithStageList:(id)arg1 andExtraInfo:(id)arg2;
- (id)HPersonalLogoutView;
- (id)HPersonalAppManagerView;
- (void)updateContentSize;
- (id)initWithStageList:(id)arg1 andExtraInfo:(id)arg2 hasLogo:(_Bool)arg3 withHF:(_Bool)arg4;

@end

