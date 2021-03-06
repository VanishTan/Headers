//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class QZFloatingPictureView, QZMoodComposeViewCoordinator, QZMoodComposeViewPresenter;

@interface QZMoodEasterEggViewController : UIViewController
{
    QZMoodComposeViewPresenter *_viewModel;
    QZMoodComposeViewCoordinator *_coordinator;
    QZFloatingPictureView *_easterEggImageCell;
    UIViewController *_hostViewController;
}

@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (void).cxx_destruct;
- (void)hideEasterEggImageCell;
- (void)showEasterEggImagePicker:(long long)arg1 keyword:(id)arg2;
- (void)hide;
- (void)show;
- (void)viewDidLoad;
- (void)loadView;
- (id)cell;
- (id)initWithViewModel:(id)arg1 coordinator:(id)arg2;

@end

