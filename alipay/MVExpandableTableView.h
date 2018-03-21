//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVTableView.h"

#import "UITableViewDelegate-Protocol.h"

@class MVTableSection, NSString, UIView;
@protocol MVExpandableTableViewProtocol;

@interface MVExpandableTableView : MVTableView <UITableViewDelegate>
{
    _Bool _floatedViewFrameInitialized;
    id <MVExpandableTableViewProtocol> _expanableTableViewProtocol;
    double _emptyRowHeight;
    UIView *_floatedView;
    MVTableSection *_emptySection;
}

@property(retain, nonatomic) MVTableSection *emptySection; // @synthesize emptySection=_emptySection;
@property(retain, nonatomic) UIView *floatedView; // @synthesize floatedView=_floatedView;
@property(nonatomic) double emptyRowHeight; // @synthesize emptyRowHeight=_emptyRowHeight;
@property(nonatomic) _Bool floatedViewFrameInitialized; // @synthesize floatedViewFrameInitialized=_floatedViewFrameInitialized;
@property(nonatomic) id <MVExpandableTableViewProtocol> expanableTableViewProtocol; // @synthesize expanableTableViewProtocol=_expanableTableViewProtocol;
- (void).cxx_destruct;
- (void)initializeFloatedViewFrame;
- (void)addEmptySectionWithRowHeight:(double)arg1 dataSource:(id)arg2 notifyTarget:(id)arg3 whenClicked:(SEL)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupExpandableTableView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
