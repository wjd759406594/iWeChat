//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface isaac64_objc : NSObject
{
    unsigned long long randrsl[256];
    unsigned long long randcnt;
    unsigned long long mm[256];
    unsigned long long aa;
    unsigned long long bb;
    unsigned long long cc;
}

- (void)randinit:(int)arg1;
- (void)isaac64;
- (int)isaac64_init:(unsigned long long *)arg1 seedLen:(unsigned long long)arg2;
- (unsigned long long)isaac64_rand;
- (id)init;

@end

