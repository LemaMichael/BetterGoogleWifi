//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETFamilyHubSchedulePresetViewController.h"

#import "GOONavigationCustomization-Protocol.h"
#import "JETFamilyHubSelectPresetDelegate-Protocol.h"

@class GOONavigationStyle, JETFamilyHubSetupWrapperView, NSSet, NSString, UIScrollView, UIView;

@interface JETFamilyHubSelectPresetViewController : JETFamilyHubSchedulePresetViewController <GOONavigationCustomization, JETFamilyHubSelectPresetDelegate>
{
    JETFamilyHubSetupWrapperView *_wrapperView;
}

@property(retain, nonatomic) JETFamilyHubSetupWrapperView *wrapperView; // @synthesize wrapperView=_wrapperView;
- (void).cxx_destruct;
- (void)didSelectPresetForLabel:(id)arg1 withName:(id)arg2 ofType:(int)arg3;
- (void)customSelected;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 delegate:(id)arg3;
- (id)initWithUserState:(id)arg1 group:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end

