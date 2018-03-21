//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSFeedCommentSectionController, NSNumber;

@protocol KSFeedCommentSectionControllerDelegate <NSObject>
- (void)didFoldSubCommentsInSectionController:(KSFeedCommentSectionController *)arg1;
- (void)didUnfoldSubCommentsInSectionController:(KSFeedCommentSectionController *)arg1;
- (void)didFoldComment:(struct KS_comment *)arg1 inSectionController:(KSFeedCommentSectionController *)arg2;
- (void)didUnfoldComment:(struct KS_comment *)arg1 inSectionController:(KSFeedCommentSectionController *)arg2;
- (void)willShowComment:(struct KS_comment *)arg1 inSectionController:(KSFeedCommentSectionController *)arg2;
- (void)didTapNicknameWithID:(NSNumber *)arg1 ofComment:(struct KS_comment *)arg2 inSectionController:(KSFeedCommentSectionController *)arg3;
- (void)didTapAvatarOfComment:(struct KS_comment *)arg1 inSectionController:(KSFeedCommentSectionController *)arg2;
- (void)didSelectComment:(struct KS_comment *)arg1 inSectionController:(KSFeedCommentSectionController *)arg2;
@end
