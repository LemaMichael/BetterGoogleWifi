//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIPNetworkImage.h"

@protocol GIPCache;

@interface GIPCachedNetworkImage : GIPNetworkImage
{
    id <GIPCache> backingCache_;
}

+ (void)setDefaultCacheProvider:(id)arg1;
+ (id)defaultCacheProvider;
- (void).cxx_destruct;
- (id)imageCache;
- (void)setBackingCache:(id)arg1;

@end

