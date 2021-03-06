//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@class WDPostQuestionInputDescViewController, WDPostQuestionInputTitleViewController, WDPostQuestionViewModel;

@interface WDPostQuestionViewController : SSViewControllerBase
{
    WDPostQuestionInputTitleViewController *_inputTitleController;
    WDPostQuestionInputDescViewController *_inputDescController;
    SSViewControllerBase *_currentViewController;
    WDPostQuestionViewModel *_viewModel;
}

+ (void)animationPushRight:(id)arg1;
+ (void)animationPushLeft:(id)arg1;
+ (long long)preferredRouteViewControllerOpenStyle;
+ (void)load;
@property(retain, nonatomic) WDPostQuestionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SSViewControllerBase *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) WDPostQuestionInputDescViewController *inputDescController; // @synthesize inputDescController=_inputDescController;
@property(retain, nonatomic) WDPostQuestionInputTitleViewController *inputTitleController; // @synthesize inputTitleController=_inputTitleController;
- (void).cxx_destruct;
- (void)animationAddByView:(id)arg1 direction:(long long)arg2;
- (void)addDetailVC:(id)arg1 direction:(long long)arg2;
- (void)addKVO;
- (void)viewDidLoad;
- (id)initWithTaskModel:(id)arg1 gdExtJson:(id)arg2 apiParams:(id)arg3 source:(id)arg4 listEntrance:(id)arg5;
- (id)initWithTaskModel:(id)arg1 gdExtJson:(id)arg2 apiParams:(id)arg3;
- (id)initWithRouteParamObj:(id)arg1;

@end

