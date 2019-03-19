//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDCTypographyScheming-Protocol.h"

@class UIFont;

@interface MDCTypographyScheme : NSObject <MDCTypographyScheming>
{
    UIFont *_headline1;
    UIFont *_headline2;
    UIFont *_headline3;
    UIFont *_headline4;
    UIFont *_headline5;
    UIFont *_headline6;
    UIFont *_subtitle1;
    UIFont *_subtitle2;
    UIFont *_body1;
    UIFont *_body2;
    UIFont *_caption;
    UIFont *_button;
    UIFont *_overline;
}

@property(retain, nonatomic) UIFont *overline; // @synthesize overline=_overline;
@property(retain, nonatomic) UIFont *button; // @synthesize button=_button;
@property(retain, nonatomic) UIFont *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) UIFont *body2; // @synthesize body2=_body2;
@property(retain, nonatomic) UIFont *body1; // @synthesize body1=_body1;
@property(retain, nonatomic) UIFont *subtitle2; // @synthesize subtitle2=_subtitle2;
@property(retain, nonatomic) UIFont *subtitle1; // @synthesize subtitle1=_subtitle1;
@property(retain, nonatomic) UIFont *headline6; // @synthesize headline6=_headline6;
@property(retain, nonatomic) UIFont *headline5; // @synthesize headline5=_headline5;
@property(retain, nonatomic) UIFont *headline4; // @synthesize headline4=_headline4;
@property(retain, nonatomic) UIFont *headline3; // @synthesize headline3=_headline3;
@property(retain, nonatomic) UIFont *headline2; // @synthesize headline2=_headline2;
@property(retain, nonatomic) UIFont *headline1; // @synthesize headline1=_headline1;
- (void).cxx_destruct;
- (id)initWithDefaults:(long long)arg1;
- (id)init;

@end

