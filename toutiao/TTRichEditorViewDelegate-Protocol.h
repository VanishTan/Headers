//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, TTRichEditorView;

@protocol TTRichEditorViewDelegate <UIWebViewDelegate>

@optional
- (void)editorViewDidTriggerSelectAtUser:(TTRichEditorView *)arg1;
- (void)editorView:(TTRichEditorView *)arg1 editLinkWithTitle:(NSString *)arg2 linkUrl:(NSString *)arg3;
- (void)editorView:(TTRichEditorView *)arg1 openCustomUrl:(NSURL *)arg2;
- (void)editorViewDidEndDragging:(TTRichEditorView *)arg1 willDecelerate:(_Bool)arg2;
- (void)editorViewDidFinishLoading:(TTRichEditorView *)arg1;
- (void)editorViewDidFinishLoadingDOM:(TTRichEditorView *)arg1;
- (void)editorViewDidChange:(TTRichEditorView *)arg1;
- (void)editorViewDidEndEditing:(TTRichEditorView *)arg1;
- (void)editorViewDidBeginEditing:(TTRichEditorView *)arg1;
@end

