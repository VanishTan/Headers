//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSMutableDictionary, NSString, SHSPhoneTextField;

@interface SHSPhoneNumberFormatter : NSFormatter
{
    NSMutableDictionary *config;
    _Bool _canAffectLeftViewByFormatter;
    NSString *_prefix;
    SHSPhoneTextField *_textField;
}

+ (id)formattedRemove:(id)arg1 AtIndex:(struct _NSRange)arg2;
+ (_Bool)isValuableChar:(unsigned short)arg1;
+ (long long)valuableCharCountIn:(id)arg1;
+ (id)digitOnlyString:(id)arg1;
@property __weak SHSPhoneTextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property _Bool canAffectLeftViewByFormatter; // @synthesize canAffectLeftViewByFormatter=_canAffectLeftViewByFormatter;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)valuesForString:(id)arg1;
- (id)applyFormat:(id)arg1 forFormattedString:(id)arg2;
- (_Bool)isRequireSubstitute:(unsigned short)arg1;
- (id)configForSequence:(id)arg1;
- (_Bool)matchString:(id)arg1 withPattern:(id)arg2;
- (id)stringWithoutFormat:(id)arg1;
- (id)digitOnlyString:(id)arg1;
- (id)init;
- (void)setOutputPatternsFromArray:(id)arg1;
- (void)addOutputPattern:(id)arg1 forRegExp:(id)arg2;
- (void)addOutputPattern:(id)arg1 forRegExp:(id)arg2 imagePath:(id)arg3;
- (void)setDefaultOutputPattern:(id)arg1;
- (void)setDefaultOutputPattern:(id)arg1 imagePath:(id)arg2;
- (void)resetFormats;
- (void)resetDefaultFormat;
- (id)resetConfig;
- (id)defaultPattern;

@end
