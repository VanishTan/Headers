//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBHomeServiceCardTextListItem : TBJSONModel
{
    NSString *_keyDesc;
    NSString *_valueDesc;
    NSString *_textColor;
    NSString *_backgroundColor;
}

@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *valueDesc; // @synthesize valueDesc=_valueDesc;
@property(retain, nonatomic) NSString *keyDesc; // @synthesize keyDesc=_keyDesc;
- (void).cxx_destruct;
- (id)JSONRepresentation;

@end

