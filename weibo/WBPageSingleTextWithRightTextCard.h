//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString;

@interface WBPageSingleTextWithRightTextCard : WBPageCard
{
    NSString *leftText;
    NSString *rightText;
    NSString *flagImageUrl;
    _Bool localNewFansLogic;
    _Bool isBolded;
}

+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(nonatomic) _Bool isBolded; // @synthesize isBolded;
@property(nonatomic) _Bool localNewFansLogic; // @synthesize localNewFansLogic;
@property(retain, nonatomic) NSString *rightText; // @synthesize rightText;
@property(retain, nonatomic) NSString *flagImageUrl; // @synthesize flagImageUrl;
@property(retain, nonatomic) NSString *leftText; // @synthesize leftText;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)updateWithDictionary:(id)arg1;

@end

