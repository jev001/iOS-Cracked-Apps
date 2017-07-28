//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMPrivateMessageBaseCell, NSObject, NSString;

@protocol NMPrivateMessageBaseCellDelegate <NSObject>
- (void)topicTouched:(NMPrivateMessageBaseCell *)arg1 topicName:(NSString *)arg2;
- (void)commentViewTouched:(NMPrivateMessageBaseCell *)arg1 object:(NSObject *)arg2;
- (void)userNameTouched:(NMPrivateMessageBaseCell *)arg1 userNickName:(NSString *)arg2;
- (void)retrySendButtonTouchedInCell:(NMPrivateMessageBaseCell *)arg1;

@optional
- (void)imageTouchedInPrivateMessageCell:(NMPrivateMessageBaseCell *)arg1;
- (void)privateMessageCell:(NMPrivateMessageBaseCell *)arg1 linkClicked:(id)arg2;
@end

