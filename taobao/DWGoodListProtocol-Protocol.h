//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DWContext, NSArray, NSString, UIView;

@protocol DWGoodListProtocol <NSObject>
- (void)hideNewGoodList;
- (void)showNewGoodList:(DWContext *)arg1 items:(NSArray *)arg2 coverImage:(NSString *)arg3 onView:(UIView *)arg4 delegate:(id)arg5 completion:(void (^)(void))arg6;
@end

