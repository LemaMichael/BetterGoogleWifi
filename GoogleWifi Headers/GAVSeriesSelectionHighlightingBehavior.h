//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVSelectionHighlightingBehavior.h"

@class NSMutableArray, NSString;

@interface GAVSeriesSelectionHighlightingBehavior : GAVSelectionHighlightingBehavior
{
    NSString *_selectedSeries;
    NSMutableArray *_seriesHighlighters;
}

@property(retain, nonatomic) NSMutableArray *seriesHighlighters; // @synthesize seriesHighlighters=_seriesHighlighters;
@property(copy, nonatomic) NSString *selectedSeries; // @synthesize selectedSeries=_selectedSeries;
- (void).cxx_destruct;
- (void)onDrawWithNotification:(id)arg1;
- (void)onSeriesSelectedWithNotification:(id)arg1;
- (void)attachToChart:(id)arg1;
- (id)initWithSeriesHighlighters:(id)arg1;

@end

