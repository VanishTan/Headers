//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIView, XSearchContext, XSearchService, XSearchWXInstance;

@interface XSearchWeexComponent : NSObject
{
    _Bool _isRendered;
    XSearchWXInstance *_wxInstance;
    UIView *_rootView;
    NSString *_type;
    NSString *_version;
    NSString *_bizName;
    CDUnknownBlockType _onCreateBlock;
    CDUnknownBlockType _renderFinishBlock;
    CDUnknownBlockType _onFailedBlock;
    XSearchService *_searchService;
    XSearchContext *_searchContext;
    NSDictionary *_data;
    NSDictionary *_nativeStatus;
    struct CGSize _viewSize;
}

@property(nonatomic) _Bool isRendered; // @synthesize isRendered=_isRendered;
@property(retain, nonatomic) NSDictionary *nativeStatus; // @synthesize nativeStatus=_nativeStatus;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) XSearchContext *searchContext; // @synthesize searchContext=_searchContext;
@property(retain, nonatomic) XSearchService *searchService; // @synthesize searchService=_searchService;
@property(copy, nonatomic) CDUnknownBlockType onFailedBlock; // @synthesize onFailedBlock=_onFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType renderFinishBlock; // @synthesize renderFinishBlock=_renderFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType onCreateBlock; // @synthesize onCreateBlock=_onCreateBlock;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(retain, nonatomic) XSearchWXInstance *wxInstance; // @synthesize wxInstance=_wxInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)renderWithCreateBlock:(CDUnknownBlockType)arg1 finishBlock:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)bundleName;
- (id)generateRenderData;
- (id)initWithType:(id)arg1 version:(id)arg2 data:(id)arg3 status:(id)arg4;

@end
