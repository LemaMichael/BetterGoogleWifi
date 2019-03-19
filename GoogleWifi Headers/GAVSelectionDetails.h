//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface GAVSelectionDetails : NSObject
{
    NSString *_seriesName;
    id _datum;
    id _domain;
    id _measure;
    NSNumber *_distance;
}

@property(retain, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) id measure; // @synthesize measure=_measure;
@property(retain, nonatomic) id domain; // @synthesize domain=_domain;
@property(retain, nonatomic) id datum; // @synthesize datum=_datum;
@property(copy, nonatomic) NSString *seriesName; // @synthesize seriesName=_seriesName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithSeriesName:(id)arg1 datum:(id)arg2 domain:(id)arg3 measure:(id)arg4;
- (id)init;

@end

