//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTMLogBasicFormatter.h"

@class NSDateFormatter, NSString;

@interface GTMLogStandardFormatter : GTMLogBasicFormatter
{
    NSDateFormatter *dateFormatter_;
    NSString *pname_;
    int pid_;
}

- (id)stringForFunc:(id)arg1 withFormat:(id)arg2 valist:(char *)arg3 level:(int)arg4;
- (void)dealloc;
- (id)init;

@end

