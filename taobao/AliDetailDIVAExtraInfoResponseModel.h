//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol AliDetailDIVAExtraInfoIcons;

@interface AliDetailDIVAExtraInfoResponseModel : TBJSONModel
{
    NSString *_rotation;
    NSArray<AliDetailDIVAExtraInfoIcons> *_contents;
}

@property(retain, nonatomic) NSArray<AliDetailDIVAExtraInfoIcons> *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSString *rotation; // @synthesize rotation=_rotation;
- (void).cxx_destruct;

@end

