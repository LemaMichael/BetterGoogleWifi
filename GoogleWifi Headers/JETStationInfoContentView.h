//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class JETStationInfo, UILabel;

@interface JETStationInfoContentView : GOOBaseContentView
{
    UILabel *_titleView;
    UILabel *_macAddressKeyView;
    UILabel *_macAddressValueView;
    UILabel *_typeOrIPKeyView;
    UILabel *_typeOrIPValueView;
    JETStationInfo *_station;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) JETStationInfo *station; // @synthesize station=_station;
@property(retain, nonatomic) UILabel *typeOrIPValueView; // @synthesize typeOrIPValueView=_typeOrIPValueView;
@property(retain, nonatomic) UILabel *typeOrIPKeyView; // @synthesize typeOrIPKeyView=_typeOrIPKeyView;
@property(retain, nonatomic) UILabel *macAddressValueView; // @synthesize macAddressValueView=_macAddressValueView;
@property(retain, nonatomic) UILabel *macAddressKeyView; // @synthesize macAddressKeyView=_macAddressKeyView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

