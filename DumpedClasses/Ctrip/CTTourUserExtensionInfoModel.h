//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface CTTourUserExtensionInfoModel : NSObject <NSCoding, NSCopying>
{
    NSString *_AllianceID;
    NSString *_SID;
}

@property(retain) NSString *SID; // @synthesize SID=_SID;
@property(retain) NSString *AllianceID; // @synthesize AllianceID=_AllianceID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
