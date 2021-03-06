//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSAdvEffectCollectionViewCellConfig.h"

@class UIColor, UIImage;

@interface KSAdvFilterEffectCollectionViewCellConfig : KSAdvEffectCollectionViewCellConfig
{
    UIImage *_highlightForgroundImage;
    UIColor *_coverColor;
}

+ (id)disabledUndoEffectConfig;
+ (id)undoEffectConfig;
+ (id)specialEffectWithTitle:(id)arg1 highlightColor:(id)arg2;
@property(retain, nonatomic) UIColor *coverColor; // @synthesize coverColor=_coverColor;
@property(retain, nonatomic) UIImage *highlightForgroundImage; // @synthesize highlightForgroundImage=_highlightForgroundImage;
- (void).cxx_destruct;
- (void)applyToCell:(id)arg1 highlight:(_Bool)arg2;
- (void)applyToCell:(id)arg1;

@end

