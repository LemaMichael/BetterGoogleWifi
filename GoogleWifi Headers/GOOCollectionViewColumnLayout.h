//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface GOOCollectionViewColumnLayout : UICollectionViewLayout
{
    NSMutableArray *_layoutAttributes;
    struct CGSize _collectionViewContentSize;
    long long _numberOfColumns;
    _Bool _hasFixedColumns;
    long long _minimumNumberOfColumns;
    double _itemHeight;
    double _spaceBetweenColumns;
    double _verticalSpaceBetweenItems;
    struct UIEdgeInsets _contentInsets;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double verticalSpaceBetweenItems; // @synthesize verticalSpaceBetweenItems=_verticalSpaceBetweenItems;
@property(nonatomic) double spaceBetweenColumns; // @synthesize spaceBetweenColumns=_spaceBetweenColumns;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) long long minimumNumberOfColumns; // @synthesize minimumNumberOfColumns=_minimumNumberOfColumns;
- (void).cxx_destruct;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (_Bool)isMetricSection:(long long)arg1;
- (long long)columnIndexForItemAtIndexPath:(id)arg1;
- (double)widthOfItemAtIndexPath:(id)arg1;
- (double)columnWidth;
- (struct CGRect)contentFrame;
- (struct CGRect)availableContentFrame;
- (void)calculateLayoutAttributes;
- (void)updateLayoutAttributes:(id)arg1 atIndexPath:(id)arg2;
- (id)calculateItemDimensions;
- (unsigned long long)layoutAttributesIndexForItemAtIndexPath:(id)arg1;
- (long long)totalNumberOfItems;
- (long long)numberOfColumns;
- (_Bool)shouldBeginMasonryAtSection:(long long)arg1;
- (_Bool)shouldBeginColumnAtSection:(long long)arg1;
- (_Bool)isKindOfClass:(Class)arg1 atSection:(long long)arg2;
- (double)heightOfItemAtIndexPath:(id)arg1;
- (id)delegate;
- (void)invalidateLayout;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)init;

@end

