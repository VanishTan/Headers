//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPBizNameSettingBaseViewController.h"

@class NSDictionary, NSString;
@protocol CLEditNickNameDelegate;

@interface CLEditNickNameController : SPBizNameSettingBaseViewController
{
    NSString *_originName;
    NSString *_communityId;
    NSDictionary *_lanunchOptions;
    id <CLEditNickNameDelegate> _editNameDelegate;
}

@property(nonatomic) __weak id <CLEditNickNameDelegate> editNameDelegate; // @synthesize editNameDelegate=_editNameDelegate;
- (void).cxx_destruct;
- (void)baseController:(id)arg1 didSetNewBizName:(id)arg2;
- (id)baseControllerConfigDisplayPattern;
- (void)back;
- (id)initWithOptions:(id)arg1;

@end

