//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOTextFieldValidator-Protocol.h"

@class JETTextFieldContentViewObject, NSString;

@interface JETEditWanRouterAddressValidator : NSObject <GOOTextFieldValidator>
{
    JETTextFieldContentViewObject *_ipAddressField;
    JETTextFieldContentViewObject *_subnetMaskField;
}

@property(retain, nonatomic) JETTextFieldContentViewObject *subnetMaskField; // @synthesize subnetMaskField=_subnetMaskField;
@property(retain, nonatomic) JETTextFieldContentViewObject *ipAddressField; // @synthesize ipAddressField=_ipAddressField;
- (void).cxx_destruct;
- (id)validationResultsForTextField:(id)arg1;
- (id)validationResultsForString:(id)arg1;
- (id)init;
- (id)initWithIPAddressField:(id)arg1 subnetMaskField:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) long long announcementFrequency;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

