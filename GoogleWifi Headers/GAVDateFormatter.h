//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVTimeFormatter-Protocol.h"

@class NSDateFormatter, NSString;

@interface GAVDateFormatter : NSObject <GAVTimeFormatter>
{
    NSDateFormatter *_dateFormatter;
}

@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (id)formattedStringForDate:(id)arg1 previousDate:(id)arg2;
- (id)initWithDateFormatter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

