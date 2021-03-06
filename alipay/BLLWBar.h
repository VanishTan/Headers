//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BLLWBarItemDelegate-Protocol.h"

@class BLLWBarItem, NSDictionary, NSString, UIImageView;
@protocol BLLWBarDelegate;

@interface BLLWBar : UIView <BLLWBarItemDelegate>
{
    UIImageView *line;
    NSDictionary *_data;
    id <BLLWBarDelegate> _delegate;
    BLLWBarItem *_leftItem;
    BLLWBarItem *_centerItem;
    BLLWBarItem *_rightItem;
}

@property(retain, nonatomic) BLLWBarItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) BLLWBarItem *centerItem; // @synthesize centerItem=_centerItem;
@property(retain, nonatomic) BLLWBarItem *leftItem; // @synthesize leftItem=_leftItem;
@property(nonatomic) __weak id <BLLWBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)selectedMenuItem:(long long)arg1 action:(id)arg2 menuType:(id)arg3 title:(id)arg4;
- (void)layoutSubviews;
- (void)onLayout;
- (id)transformToDict:(id)arg1;
- (void)reLayout:(_Bool)arg1 hasCenter:(_Bool)arg2;
- (void)configData;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

