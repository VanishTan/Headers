//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, NSString;
@protocol TBSNSHomePageSubTabItem;

@interface TBSNSHomePageTabItem : TBJSONModel
{
    NSString *_tabName;
    NSMutableArray<TBSNSHomePageSubTabItem> *_subTabs;
}

@property(retain, nonatomic) NSMutableArray<TBSNSHomePageSubTabItem> *subTabs; // @synthesize subTabs=_subTabs;
@property(retain, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
- (void).cxx_destruct;

@end
