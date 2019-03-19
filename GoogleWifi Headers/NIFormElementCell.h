//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NICell-Protocol.h"

@class NIFormElement, NSString;

@interface NIFormElementCell : UITableViewCell <NICell>
{
    NIFormElement *_element;
}

@property(readonly, nonatomic) NIFormElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

