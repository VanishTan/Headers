//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSScrollView;

@interface KSPageableScrollView : UIView
{
    KSScrollView *_scrollView;
    struct CGSize _pageSize;
}

@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
- (void).cxx_destruct;
- (id)scrollView;
- (id)initWithFrame:(struct CGRect)arg1 pageSize:(struct CGSize)arg2;

@end

