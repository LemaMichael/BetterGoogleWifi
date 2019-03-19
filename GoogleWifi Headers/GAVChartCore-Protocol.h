//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString, UIView;
@protocol GAVAxisSpec, GAVChartStyle, GAVSelectionModel, GAVSeriesSpec, GAVStylePack;

@protocol GAVChartCore
@property(readonly, nonatomic) NSArray *seriesSpecs;
@property(retain, nonatomic) id <GAVChartStyle> style;
@property(retain, nonatomic) id <GAVSelectionModel> selectionModel;
@property(nonatomic) double animationDuration;
@property(readonly, nonatomic) NSDictionary *axes;
@property(retain, nonatomic) id <GAVStylePack> stylePack;
@property(copy, nonatomic) NSString *defaultRenderer;
- (void)fireEventWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)addDrawAreaSubview:(UIView *)arg1 atZIndex:(long long)arg2;
- (void)addDrawAreaSubview:(UIView *)arg1;
- (void)addBottomGutterSubview:(UIView *)arg1;
- (void)addTopGutterSubview:(UIView *)arg1;
- (void)addRightGutterSubview:(UIView *)arg1;
- (void)addLeftGutterSubview:(UIView *)arg1;
- (void)reset;
- (void)draw;
- (void)drawWithSeriesData:(NSDictionary *)arg1;
- (void)addSeries:(id <GAVSeriesSpec>)arg1;
- (void)addAxis:(id <GAVAxisSpec>)arg1;
@end

