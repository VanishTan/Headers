//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBDViewItem, TBMytaobaoDinamicModel;

@interface TBMyTaobaoDinamicTableCell : UITableViewCell
{
    TBDViewItem *_viewItem;
    TBMytaobaoDinamicModel *_dataModel;
}

@property(retain, nonatomic) TBMytaobaoDinamicModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) TBDViewItem *viewItem; // @synthesize viewItem=_viewItem;
- (void).cxx_destruct;
- (void)trackLog:(id)arg1;
- (void)updateExactTemplates;
- (void)setData:(id)arg1;

@end

