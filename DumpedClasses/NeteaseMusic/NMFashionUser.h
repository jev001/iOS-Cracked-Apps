//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMUser.h"

@interface NMFashionUser : NMUser
{
    double _distance;
    _Bool _isBindingSina;
    _Bool _isBindingDouban;
    _Bool _isBindingTencent;
    _Bool _isBindingNetease;
    _Bool _isBindingQzone;
}

@property(nonatomic) _Bool isBindingQzone; // @synthesize isBindingQzone=_isBindingQzone;
@property(nonatomic) _Bool isBindingNetease; // @synthesize isBindingNetease=_isBindingNetease;
@property(nonatomic) _Bool isBindingTencent; // @synthesize isBindingTencent=_isBindingTencent;
@property(nonatomic) _Bool isBindingDouban; // @synthesize isBindingDouban=_isBindingDouban;
@property(nonatomic) _Bool isBindingSina; // @synthesize isBindingSina=_isBindingSina;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (id)initWithDictionary:(id)arg1;
- (id)description;

@end

