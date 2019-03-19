//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

#import "GOONavigationCustomization-Protocol.h"
#import "GOOSwitchContentViewDelegate-Protocol.h"
#import "JETSavableViewController-Protocol.h"
#import "JETSwipeControlPriorityDeviceSelectionDelegate-Protocol.h"

@class GOONavigationStyle, GOOSwitchContentViewObject, JETSelectActionContentViewObject, JETSelectActionRightImageContentViewObject, NSSet, NSString, UIScrollView, UIView;

@interface JETSwipeControlConfigViewController : JETGroupAwareCollectionViewController <GOONavigationCustomization, GOOSwitchContentViewDelegate, JETSavableViewController, JETSwipeControlPriorityDeviceSelectionDelegate>
{
    GOOSwitchContentViewObject *_enableSwitch;
    JETSelectActionContentViewObject *_selectSwipeModeItem;
    unsigned long long _swipeControlMode;
    NSString *_priorityDeviceSHMAC;
    unsigned long long _priorityDeviceDuration;
    JETSelectActionRightImageContentViewObject *_priorityDeviceSelectDeviceItem;
    JETSelectActionRightImageContentViewObject *_priorityDeviceSelectTimeItem;
}

@property(retain, nonatomic) JETSelectActionRightImageContentViewObject *priorityDeviceSelectTimeItem; // @synthesize priorityDeviceSelectTimeItem=_priorityDeviceSelectTimeItem;
@property(retain, nonatomic) JETSelectActionRightImageContentViewObject *priorityDeviceSelectDeviceItem; // @synthesize priorityDeviceSelectDeviceItem=_priorityDeviceSelectDeviceItem;
@property(nonatomic) unsigned long long priorityDeviceDuration; // @synthesize priorityDeviceDuration=_priorityDeviceDuration;
@property(copy, nonatomic) NSString *priorityDeviceSHMAC; // @synthesize priorityDeviceSHMAC=_priorityDeviceSHMAC;
@property(nonatomic) unsigned long long swipeControlMode; // @synthesize swipeControlMode=_swipeControlMode;
@property(retain, nonatomic) JETSelectActionContentViewObject *selectSwipeModeItem; // @synthesize selectSwipeModeItem=_selectSwipeModeItem;
@property(retain, nonatomic) GOOSwitchContentViewObject *enableSwitch; // @synthesize enableSwitch=_enableSwitch;
- (void).cxx_destruct;
- (id)titleForPriorityDeviceDuration:(unsigned long long)arg1;
- (void)priorityDeviceSelectTimeItemTapped;
- (void)priorityDeviceSelectDeviceItemTapped;
- (void)selectSwipeModeItemTapped;
- (void)savePriorityDeviceConfig;
- (void)updatePriorityDeviceItemState:(_Bool)arg1;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)cancelButtonTapped;
- (void)saveButtonTapped;
- (void)selectedDeviceWithSHMAC:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 inkTouchStyleAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 cellDividerStyleForSection:(long long)arg2;
- (void)switchObject:(id)arg1 didUpdateSwitch:(_Bool)arg2;
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

