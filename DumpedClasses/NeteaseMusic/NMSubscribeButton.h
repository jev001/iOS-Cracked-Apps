//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface NMSubscribeButton : UIView
{
    UIButton *_focusButton;
    unsigned long long _status;
    id <NMSubscribeButtonDelegate> _delegate;
}

+ (struct CGSize)defaultSize;
@property(nonatomic) __weak id <NMSubscribeButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

