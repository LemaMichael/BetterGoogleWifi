//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GOOCollectionViewDataSource-Protocol.h"
#import "GOOCollectionViewDelegate-Protocol.h"
#import "GOONavigationDependency-Protocol.h"
#import "GOOUIViewController-Protocol.h"
#import "NICollectionViewModelDelegate-Protocol.h"

@class GOOCollectionView, GOOCollectionViewCellStyle, NICollectionViewActions, NICollectionViewModel, NSString, UICollectionViewLayout, UIScrollView, UIView;

@interface GOOCollectionViewController : UIViewController <GOONavigationDependency, GOOUIViewController, NICollectionViewModelDelegate, GOOCollectionViewDataSource, GOOCollectionViewDelegate>
{
    GOOCollectionView *_collectionView;
    GOOCollectionViewCellStyle *_defaultStyle;
    _Bool _clearsSelectionOnViewWillAppear;
    UICollectionViewLayout *_layout;
    NICollectionViewModel *_model;
    NICollectionViewActions *_actions;
    long long _statusBarStyle;
}

+ (Class)viewClass;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
@property(retain, nonatomic) NICollectionViewActions *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NICollectionViewModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)receivedCollectionView;
- (void)collectionViewDidLoad;
- (void)loadCollectionView;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
@property(readonly, nonatomic) _Bool isCollectionViewLoaded;
@property(retain, nonatomic) GOOCollectionView *collectionView;
- (_Bool)collectionView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionViewModel:(id)arg1 cellForCollectionView:(id)arg2 atIndexPath:(id)arg3 withObject:(id)arg4;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
- (long long)preferredStatusBarStyle;
@property(retain, nonatomic) UICollectionViewLayout *layout; // @synthesize layout=_layout;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIView *footerView;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIView *headerView;
@property(readonly) Class superclass;

@end

