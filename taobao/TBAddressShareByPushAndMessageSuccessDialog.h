//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TBAddressShareByPushAndMessageSuccessDialog : UIView
{
    CDUnknownBlockType _shareBlock;
    CDUnknownBlockType _closeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
- (void).cxx_destruct;
- (void)hide;
- (void)checkSharingButtonClicked:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (id)taobaoFriendViewWithImageURLStringAndType:(id)arg1 nick:(id)arg2;
- (void)showWithCheckSharingBlock:(CDUnknownBlockType)arg1 closeBlock:(CDUnknownBlockType)arg2;
- (id)initWithTaobaoFriendsInfo:(id)arg1 addressBookFriendsInfo:(id)arg2;

@end
