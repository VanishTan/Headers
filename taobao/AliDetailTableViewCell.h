//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "AliDetailTableViewCellProtocol-Protocol.h"

@class AliDetailComponent, NSString, UIViewController;

@interface AliDetailTableViewCell : UITableViewCell <AliDetailTableViewCellProtocol>
{
    AliDetailComponent *_component;
    UIViewController *_parentVC;
}

+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) AliDetailComponent *component; // @synthesize component=_component;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)rebindActions:(id)arg1;
- (void)setObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

