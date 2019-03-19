//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableURLRequest, NSThread;

@interface SSOLoginScopedAuthorizationArgs : NSObject
{
    NSMutableURLRequest *_request;
    CDUnknownBlockType _handler;
    id _delegate;
    SEL _selector;
    NSThread *_thread;
    NSError *_error;
}

+ (id)argsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2 delegate:(id)arg3 selector:(SEL)arg4 thread:(id)arg5;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property SEL selector; // @synthesize selector=_selector;
@property(retain) id delegate; // @synthesize delegate=_delegate;
@property(copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain) NSMutableURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

