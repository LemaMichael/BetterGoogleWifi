//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVLinearScale-Protocol.h"

@class GAVLinearScaleViewportSettings, GAVNumericExtent, NSNumber, NSString;
@protocol GAVExtent;

@interface GAVLinearScale : NSObject <GAVLinearScale>
{
    _Bool _isRangeDescending;
    int _domainCount;
    GAVNumericExtent *_range;
    GAVLinearScaleViewportSettings *_viewportSettings;
    GAVNumericExtent *_domain;
    NSNumber *_domainStart;
    NSNumber *_domainEnd;
}

@property(retain, nonatomic) NSNumber *domainEnd; // @synthesize domainEnd=_domainEnd;
@property(retain, nonatomic) NSNumber *domainStart; // @synthesize domainStart=_domainStart;
@property(nonatomic) int domainCount; // @synthesize domainCount=_domainCount;
@property(retain, nonatomic) GAVNumericExtent *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) GAVLinearScaleViewportSettings *viewportSettings; // @synthesize viewportSettings=_viewportSettings;
@property(readonly, nonatomic) _Bool isRangeDescending; // @synthesize isRangeDescending=_isRangeDescending;
@property(retain, nonatomic) GAVNumericExtent *range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <GAVExtent> valuesExtent;
@property(readonly, nonatomic) int rangeWidth;
@property(readonly, nonatomic) double rangeBandWidth;
- (void)addValue:(id)arg1;
- (double)applyForValue:(id)arg1;
- (void)setViewportRange:(id)arg1;
- (void)setViewportExtent:(id)arg1;
- (id)initWithRangeDescending:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

