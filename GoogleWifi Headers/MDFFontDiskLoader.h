//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface MDFFontDiskLoader : NSObject <NSCopying>
{
    _Bool _loadFailed;
    _Bool _disableSanityChecks;
    NSString *_fontName;
    NSURL *_fontURL;
}

+ (_Bool)isFontURLLoaded:(id)arg1;
+ (void)setFontURL:(id)arg1 loaded:(_Bool)arg2;
+ (void)initialize;
@property(nonatomic) _Bool disableSanityChecks; // @synthesize disableSanityChecks=_disableSanityChecks;
@property(readonly, copy, nonatomic) NSURL *fontURL; // @synthesize fontURL=_fontURL;
@property(readonly, copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=hasLoadFailed) _Bool loadFailed; // @synthesize loadFailed=_loadFailed;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)fontOfSize:(double)arg1;
- (_Bool)unload;
- (_Bool)load;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithFontName:(id)arg1 filename:(id)arg2 bundleFileName:(id)arg3 baseBundle:(id)arg4;
- (id)initWithFontName:(id)arg1 fontURL:(id)arg2;

@end

