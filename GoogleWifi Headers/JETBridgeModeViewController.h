//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

#import "GOONavigationCustomization-Protocol.h"
#import "JETSavableViewController-Protocol.h"

@class GOOAlertView, GOONavigationStyle, JETSelectActionRightButtonContentViewObject, NSSet, NSString, NSTimer, UIBarButtonItem, UIImage, UIScrollView, UIView;

@interface JETBridgeModeViewController : JETGroupAwareCollectionViewController <GOONavigationCustomization, JETSavableViewController>
{
    _Bool _closed;
    _Bool _newBridgeMode;
    NSString *_accessPointID;
    JETSelectActionRightButtonContentViewObject *_bridgeModeItem;
    JETSelectActionRightButtonContentViewObject *_standardModeItem;
    UIImage *_itemSelectedImage;
    UIImage *_itemNotSelectedImage;
    long long _selectedDeviceMode;
    GOOAlertView *_savingAlert;
    NSTimer *_retryTimer;
    NSString *_updateDeviceModeOperationId;
    unsigned long long _updateDeviceModeWaitForCompletionAttemptsRemaining;
    unsigned long long _deviceRefreshAttemptsRemaining;
    UIBarButtonItem *_saveButton;
}

@property(retain, nonatomic) UIBarButtonItem *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) unsigned long long deviceRefreshAttemptsRemaining; // @synthesize deviceRefreshAttemptsRemaining=_deviceRefreshAttemptsRemaining;
@property(nonatomic) unsigned long long updateDeviceModeWaitForCompletionAttemptsRemaining; // @synthesize updateDeviceModeWaitForCompletionAttemptsRemaining=_updateDeviceModeWaitForCompletionAttemptsRemaining;
@property(copy, nonatomic) NSString *updateDeviceModeOperationId; // @synthesize updateDeviceModeOperationId=_updateDeviceModeOperationId;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) _Bool newBridgeMode; // @synthesize newBridgeMode=_newBridgeMode;
@property(nonatomic) __weak GOOAlertView *savingAlert; // @synthesize savingAlert=_savingAlert;
@property(nonatomic) long long selectedDeviceMode; // @synthesize selectedDeviceMode=_selectedDeviceMode;
@property(retain, nonatomic) UIImage *itemNotSelectedImage; // @synthesize itemNotSelectedImage=_itemNotSelectedImage;
@property(retain, nonatomic) UIImage *itemSelectedImage; // @synthesize itemSelectedImage=_itemSelectedImage;
@property(retain, nonatomic) JETSelectActionRightButtonContentViewObject *standardModeItem; // @synthesize standardModeItem=_standardModeItem;
@property(retain, nonatomic) JETSelectActionRightButtonContentViewObject *bridgeModeItem; // @synthesize bridgeModeItem=_bridgeModeItem;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(copy, nonatomic) NSString *accessPointID; // @synthesize accessPointID=_accessPointID;
- (void).cxx_destruct;
- (id)itemForDeviceMode:(long long)arg1;
- (_Bool)areUnsavedChangesPresent;
- (void)handleDeviceModeChange:(long long)arg1;
- (_Bool)bridgeModeAllowed;
- (void)updateItemEnabledStates;
- (void)updateSaveButtonEnabledState;
- (_Bool)isInBridgeMode;
- (void)close;
- (void)standardModeInfoButtonTapped;
- (void)bridgeModeInfoButtonTapped;
- (void)constructModel;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)cancelButtonTapped;
- (void)refreshDeviceOnCompletion;
- (void)waitForDeviceModeUpdateOperationCompletion;
- (void)saveChanges;
- (void)saveButtonTapped;
- (void)accessPointsGroupIsUpdated;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserState:(id)arg1 group:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 accessPointID:(id)arg3;

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

