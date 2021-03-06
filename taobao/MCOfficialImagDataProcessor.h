//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCOfficialBaseProcessor.h"

#import "MCChatPhotoViewerContainerViewDataSource-Protocol.h"
#import "MCOfficialBubbleDelegate-Protocol.h"
#import "MCOfficialCellDelegate-Protocol.h"

@class MCChatPhotoViewerContainerView, NSString;

@interface MCOfficialImagDataProcessor : MCOfficialBaseProcessor <MCOfficialBubbleDelegate, MCChatPhotoViewerContainerViewDataSource, MCOfficialCellDelegate>
{
    MCChatPhotoViewerContainerView *_photoViewerContainerView;
}

@property(retain, nonatomic) MCChatPhotoViewerContainerView *photoViewerContainerView; // @synthesize photoViewerContainerView=_photoViewerContainerView;
- (void).cxx_destruct;
- (void)tableViewCell:(id)arg1 reSendMessageVO:(id)arg2;
- (id)localImageWithPhotoModel:(id)arg1;
- (void)backPhotoModelListWithPhotoViewerContainerView:(id)arg1 photoModel:(id)arg2 requestCount:(long long)arg3;
- (void)frontPhotoModelListWithPhotoViewerContainerView:(id)arg1 photoModel:(id)arg2 requestCount:(long long)arg3;
- (_Bool)isBackHasMore;
- (_Bool)isFrontHasMore;
- (long long)photoViewerRequestOffset;
- (long long)photoViewerRequestCount;
- (void)bubble:(id)arg1 didSelectedMessageVO:(id)arg2;
- (void)bubble:(id)arg1 longPressWithMessageVO:(id)arg2;
- (id)getCellByOfficialVO:(id)arg1 tableView:(id)arg2 config:(id)arg3;
- (id)doTransformProcessorData:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

