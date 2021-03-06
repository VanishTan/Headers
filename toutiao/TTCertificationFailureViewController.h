//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTCertificationInReviewViewController.h"

@class NSString, SSThemedLabel, TTCertificationOperationView;

@interface TTCertificationFailureViewController : TTCertificationInReviewViewController
{
    CDUnknownBlockType _operationViewClickBlock;
    NSString *_emailText;
    TTCertificationOperationView *_operationView;
    SSThemedLabel *_emailLabel;
}

@property(retain, nonatomic) SSThemedLabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) TTCertificationOperationView *operationView; // @synthesize operationView=_operationView;
@property(copy, nonatomic) NSString *emailText; // @synthesize emailText=_emailText;
@property(copy, nonatomic) CDUnknownBlockType operationViewClickBlock; // @synthesize operationViewClickBlock=_operationViewClickBlock;
- (void).cxx_destruct;
- (void)operationViewClick;
- (void)themeChanged:(id)arg1;
- (void)setupSubview;
- (void)viewDidLoad;

@end

