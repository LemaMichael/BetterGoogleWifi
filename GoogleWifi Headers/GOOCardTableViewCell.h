//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "GOOGroupedCell-Protocol.h"
#import "NICell-Protocol.h"
#import "NIGroupedCellAppearance-Protocol.h"

@class NSString, UIView;
@protocol GOOContentView;

@interface GOOCardTableViewCell : UITableViewCell <GOOGroupedCell, NICell, NIGroupedCellAppearance>
{
    UIView<GOOContentView> *_cardContentView;
    _Bool _stateTransitioning;
}

+ (Class)cellStyleClassForTableView:(id)arg1;
+ (double)minimumCellHeight;
+ (double)heightForObject:(id)arg1 atIndexPath:(id)arg2 tableView:(id)arg3;
+ (struct CGRect)contentBoundsWithTableView:(id)arg1 object:(id)arg2;
+ (_Bool)shouldAppendObjectClassToReuseIdentifier;
@property(readonly, nonatomic) UIView<GOOContentView> *cardContentView; // @synthesize cardContentView=_cardContentView;
- (void).cxx_destruct;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (_Bool)cellIsActionable;
- (void)prepareForReuse;
- (_Bool)goo_shouldRelayoutSubviewsForRTL;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

