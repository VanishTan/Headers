//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCOfficialMessageVO.h"

#import "MCOfficialMarketingCardVOProtocol-Protocol.h"

@class NSArray, NSString;
@protocol MCMarketingBottomVOProtocol;

@interface MCOfficialMarketingCardVO : MCOfficialMessageVO <MCOfficialMarketingCardVOProtocol>
{
    NSString *_title;
    NSString *_imageUrl;
    NSString *_content;
    NSArray *_recommandVO;
    id <MCMarketingBottomVOProtocol> _bottomVO;
}

@property(retain, nonatomic) id <MCMarketingBottomVOProtocol> bottomVO; // @synthesize bottomVO=_bottomVO;
@property(retain, nonatomic) NSArray *recommandVO; // @synthesize recommandVO=_recommandVO;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
