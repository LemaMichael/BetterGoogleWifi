//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETOOBECollectionViewControllerDataSource-Protocol.h"

@class NSString;

@protocol JETGrOOBEListPickerViewControllerDataSource <JETOOBECollectionViewControllerDataSource>
- (void)onRightButton;
- (NSString *)rightButtonText;
- (long long)rightButtonType;
- (NSString *)itemAccessibilityIdentifierForIndex:(unsigned long long)arg1;
- (NSString *)itemSubtitleForIndex:(unsigned long long)arg1;
- (NSString *)itemTitleForIndex:(unsigned long long)arg1;
- (unsigned long long)numItems;

@optional
- (void)onLeftButton;
- (NSString *)leftButtonText;
- (long long)leftButtonType;
@end

