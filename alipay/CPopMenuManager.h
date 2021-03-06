//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BEEMultiStyleCellDelegate-Protocol.h"

@class BEEPopMenuView, NSDictionary, NSString;
@protocol CPopMenuManagerDelegate;

@interface CPopMenuManager : NSObject <BEEMultiStyleCellDelegate>
{
    id <CPopMenuManagerDelegate> _delegate;
    BEEPopMenuView *_popMenuView;
    NSDictionary *_iconFromLocal;
}

@property(retain, nonatomic) NSDictionary *iconFromLocal; // @synthesize iconFromLocal=_iconFromLocal;
@property(retain, nonatomic) BEEPopMenuView *popMenuView; // @synthesize popMenuView=_popMenuView;
@property(nonatomic) __weak id <CPopMenuManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)DidClickCellButton:(id)arg1 ForRowAtIndexpath:(id)arg2;
- (void)DidClickCellView:(id)arg1 ForRowAtIndexpath:(id)arg2;
- (id)convertCellDataModel2Item:(id)arg1;
- (id)convertItem2CellDataModel:(id)arg1;
- (void)hidePopMenu;
- (void)setNeedHidePopMenu;
- (void)showPopMenuInView:(id)arg1 atPoint:(struct CGPoint)arg2 withDatasource:(id)arg3;
- (id)getIconFromLocal:(id)arg1;
- (struct _NSRange)stringContainSubstringOfRange:(id)arg1 regularExpress:(id)arg2;
- (id)subStringWithString:(id)arg1 regularExpress:(id)arg2;
- (id)formatHTML2Text:(id)arg1;
- (id)getMenuDatasourceWithCCard:(id)arg1;
- (void)showPopMenuInView:(id)arg1 atPoint:(struct CGPoint)arg2 withCCard:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

