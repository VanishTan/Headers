//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface XSearchRegModel : NSObject
{
    NSMutableDictionary *_itemClassKeyMap;
    NSMutableDictionary *_cellClassKeyMap;
    NSMutableDictionary *_itemToCellClassKeyMap;
    NSMutableDictionary *_headerClassKeyMap;
    NSMutableDictionary *_headerToUIClassKeyMap;
    NSMutableDictionary *_footerClassKeyMap;
    NSMutableDictionary *_footerToUIClassKeyMap;
    Class _loadMoreCellClass;
    Class _widgetsClass;
    NSMutableDictionary *_singleKeyMap;
    NSMutableDictionary *_singleModelClassNameKeyMap;
    NSMutableDictionary *_tabContentKeyMap;
}

@property(retain, nonatomic) NSMutableDictionary *tabContentKeyMap; // @synthesize tabContentKeyMap=_tabContentKeyMap;
@property(retain, nonatomic) NSMutableDictionary *singleModelClassNameKeyMap; // @synthesize singleModelClassNameKeyMap=_singleModelClassNameKeyMap;
@property(retain, nonatomic) NSMutableDictionary *singleKeyMap; // @synthesize singleKeyMap=_singleKeyMap;
@property(retain, nonatomic) Class widgetsClass; // @synthesize widgetsClass=_widgetsClass;
@property(retain, nonatomic) Class loadMoreCellClass; // @synthesize loadMoreCellClass=_loadMoreCellClass;
@property(retain, nonatomic) NSMutableDictionary *footerToUIClassKeyMap; // @synthesize footerToUIClassKeyMap=_footerToUIClassKeyMap;
@property(retain, nonatomic) NSMutableDictionary *footerClassKeyMap; // @synthesize footerClassKeyMap=_footerClassKeyMap;
@property(retain, nonatomic) NSMutableDictionary *headerToUIClassKeyMap; // @synthesize headerToUIClassKeyMap=_headerToUIClassKeyMap;
@property(retain, nonatomic) NSMutableDictionary *headerClassKeyMap; // @synthesize headerClassKeyMap=_headerClassKeyMap;
@property(retain, nonatomic) NSMutableDictionary *itemToCellClassKeyMap; // @synthesize itemToCellClassKeyMap=_itemToCellClassKeyMap;
@property(retain, nonatomic) NSMutableDictionary *cellClassKeyMap; // @synthesize cellClassKeyMap=_cellClassKeyMap;
@property(retain, nonatomic) NSMutableDictionary *itemClassKeyMap; // @synthesize itemClassKeyMap=_itemClassKeyMap;
- (void).cxx_destruct;
- (void)registerTabContentVC:(Class)arg1 tabActionType:(id)arg2;
- (void)registerWidgetsClass:(Class)arg1;
- (id)getSingleInfosWithEnumkey:(long long)arg1;
- (id)getSingleModelClassName:(long long)arg1;
- (void)innerRegisgerSingleModelClass:(Class)arg1 UIClass:(Class)arg2 FieldName:(id)arg3 singleEnumModelClassNameKey:(long long)arg4 defaultLoad:(_Bool)arg5;
- (void)registerTabUIClass:(Class)arg1;
- (void)registerLoadingClass:(Class)arg1 UIClass:(Class)arg2;
- (void)registerErrorClass:(Class)arg1 UIClass:(Class)arg2;
- (void)registerEmptyClass:(Class)arg1 UIClass:(Class)arg2 FieldName:(id)arg3;
- (void)registerHalfStickyHeaderClass:(Class)arg1 UIClass:(Class)arg2 FieldName:(id)arg3;
- (void)regisgerSingleNoResultClass:(Class)arg1 UIClass:(Class)arg2 FieldName:(id)arg3;
- (void)regisgerSingleThemeClass:(Class)arg1 UIClass:(Class)arg2 FieldName:(id)arg3;
- (void)regisgerSingleSearchBarClass:(Class)arg1 UIClass:(Class)arg2 FieldName:(id)arg3;
- (void)registerLoadMoreCellClass:(Class)arg1;
- (void)registerFooterClass:(Class)arg1 UIClass:(Class)arg2 Type:(id)arg3;
- (void)registerHeaderClass:(Class)arg1 UIClass:(Class)arg2 Type:(id)arg3;
- (void)registerItemClass:(Class)arg1 CellClass:(Class)arg2 Type:(id)arg3;
- (id)init;

@end

