//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, UIView, UIWindow;

@interface GOOModalWindowViewController : UIViewController
{
    NSMutableArray *_modalStack;
    UIView *_dimmingBackgroundView;
    UIWindow *_displacedWindow;
    struct CGRect _previousBounds;
}

@property(nonatomic) struct CGRect previousBounds; // @synthesize previousBounds=_previousBounds;
@property(retain, nonatomic) UIWindow *displacedWindow; // @synthesize displacedWindow=_displacedWindow;
@property(readonly, nonatomic) UIView *dimmingBackgroundView; // @synthesize dimmingBackgroundView=_dimmingBackgroundView;
@property(retain, nonatomic) NSMutableArray *modalStack; // @synthesize modalStack=_modalStack;
- (void).cxx_destruct;
- (void)updateModal:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)displacedFullscreenViewController;
- (id)displacedTopViewController;
- (id)displacedRootViewController;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)updateStatusBar;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)targetViewControllerForInterfaceOrientationQuery:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)dismissModal:(id)arg1 withAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModal:(id)arg1;
- (struct CGRect)dimmingBackgroundViewFrame;
- (id)topModal;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

