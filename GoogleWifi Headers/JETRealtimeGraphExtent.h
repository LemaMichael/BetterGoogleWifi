//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVExtent-Protocol.h"

@class NSNumber;

@interface JETRealtimeGraphExtent : NSObject <GAVExtent>
{
    _Bool _isDownload;
    double _minVal;
    double _maxVal;
}

@property(nonatomic) _Bool isDownload; // @synthesize isDownload=_isDownload;
@property(nonatomic) double maxVal; // @synthesize maxVal=_maxVal;
@property(nonatomic) double minVal; // @synthesize minVal=_minVal;
@property(readonly, copy) NSNumber *end;
@property(readonly, copy) NSNumber *start;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithMinVal:(double)arg1 maxVal:(double)arg2 isDownload:(_Bool)arg3;

@end

