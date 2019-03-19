//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface SSOResources : NSObject
{
    NSString *_bundleName;
    NSBundle *_bundle;
    NSString *_fullBundleName;
}

+ (id)tintImage:(id)arg1 withColor:(id)arg2;
+ (id)iconInSquareFromIcon:(id)arg1;
+ (id)bundleSearchOrder;
+ (id)resources;
@property(retain, nonatomic) NSString *fullBundleName; // @synthesize fullBundleName=_fullBundleName;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (void).cxx_destruct;
- (id)dropDownImage;
- (id)lighterDropDownImage;
- (id)defaultAvatar;
- (id)lighterImageWithResourceName:(id)arg1;
- (id)imageWithResourceName:(id)arg1;
- (id)stringForID:(int)arg1;
- (id)init;

@end

