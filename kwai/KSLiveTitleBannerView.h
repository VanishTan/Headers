//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSVideoBannerContentView.h"

@interface KSLiveTitleBannerView : KSVideoBannerContentView
{
    struct CGPoint _centerBeforeDragStart;
    CDUnknownBlockType _endEditBlock;
    struct CGRect _restrictedArea;
}

@property(copy, nonatomic) CDUnknownBlockType endEditBlock; // @synthesize endEditBlock=_endEditBlock;
@property(nonatomic) struct CGRect restrictedArea; // @synthesize restrictedArea=_restrictedArea;
- (void).cxx_destruct;
- (_Bool)becomeFirstResponder;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)didDragBannerView:(id)arg1;
- (struct CGRect)validateNewFrame:(struct CGRect)arg1;
- (id)initWithCanvasSize:(struct CGSize)arg1;

@end

