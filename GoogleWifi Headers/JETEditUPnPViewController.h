//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

#import "GOONavigationCustomization-Protocol.h"
#import "JETSavableViewController-Protocol.h"

@class GOONavigationStyle, GOOSwitchContentViewObject, NSSet, NSString, UIBarButtonItem, UIScrollView, UIView;

@interface JETEditUPnPViewController : JETGroupAwareCollectionViewController <GOONavigationCustomization, JETSavableViewController>
{
    _Bool _closed;
    GOOSwitchContentViewObject *_upnpEnabledSwitch;
    UIBarButtonItem *_saveButton;
}

@property(retain, nonatomic) UIBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(retain, nonatomic) GOOSwitchContentViewObject *upnpEnabledSwitch; // @synthesize upnpEnabledSwitch=_upnpEnabledSwitch;
- (void).cxx_destruct;
- (void)updateSaveButton:(_Bool)arg1;
- (void)cancelButtonTapped;
- (void)saveButtonTapped;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)accessPointsGroupIsUpdated;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

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

