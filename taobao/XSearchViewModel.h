//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol XSearchViewComponent;

@interface XSearchViewModel : NSObject
{
    id <XSearchViewComponent> _uiComponent;
}

@property(nonatomic) __weak id <XSearchViewComponent> uiComponent; // @synthesize uiComponent=_uiComponent;
- (void).cxx_destruct;
- (void)reloadData;
- (void)loadDataFailed:(id)arg1;
- (void)dataLoaded;
- (void)stopLoading;
- (void)startLoading;
- (id)init;

@end

