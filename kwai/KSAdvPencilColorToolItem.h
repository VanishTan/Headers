//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSAdvPencilToolViewCellProtocol-Protocol.h"

@class NSString, UIColor;

@interface KSAdvPencilColorToolItem : NSObject <KSAdvPencilToolViewCellProtocol>
{
    _Bool _selected;
    UIColor *_color;
    CDUnknownBlockType _onSelected;
}

@property(copy, nonatomic) CDUnknownBlockType onSelected; // @synthesize onSelected=_onSelected;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

