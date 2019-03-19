//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareViewController.h"

#import "GOONavigationCustomization-Protocol.h"
#import "JETNetworkMapDelegate-Protocol.h"

@class GOONavigationStyle, JETInsightsDataCache, JETNetworkMapAnimationView, JETNetworkStatusTopBarViewHelper, JETTabView, MDCInkTouchController, NSSet, NSString, NSTimer, UIScrollView, UIView;

@interface JETNetworkMapViewController : JETGroupAwareViewController <GOONavigationCustomization, JETNetworkMapDelegate>
{
    JETTabView *_tabView;
    JETNetworkMapAnimationView *_networkMapAnimationView;
    JETInsightsDataCache *_cache;
    NSTimer *_refreshTimer;
    JETNetworkStatusTopBarViewHelper *_topBarViewHelper;
    MDCInkTouchController *_inkTouchController;
}

@property(retain, nonatomic) MDCInkTouchController *inkTouchController; // @synthesize inkTouchController=_inkTouchController;
@property(retain, nonatomic) JETNetworkStatusTopBarViewHelper *topBarViewHelper; // @synthesize topBarViewHelper=_topBarViewHelper;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) JETInsightsDataCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) JETNetworkMapAnimationView *networkMapAnimationView; // @synthesize networkMapAnimationView=_networkMapAnimationView;
@property(retain, nonatomic) JETTabView *tabView; // @synthesize tabView=_tabView;
- (void).cxx_destruct;
- (void)stationNodeTapped;
- (void)onHubNodeTapped;
- (void)internetNodeTapped;
- (void)showCloudServicesOffMessage;
- (void)showOfflineMessage;
- (_Bool)isOffline;
- (_Bool)cloudEnabled;
- (_Bool)bridgeModeEnabled;
- (id)groupStateCache;
- (void)updateTopBarView;
- (void)schedulePeriodicRefresh;
- (void)performPeriodicRefresh;
- (void)fetchInfoForNetworkMapWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)dealloc;
- (id)initWithUserState:(id)arg1 group:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 tabView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end
