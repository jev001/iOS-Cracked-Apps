//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBCompleteProfileMegaphoneQuestionView, NSNumber, NSString, UIImageView;

@interface FBCompleteProfileMegaphoneQuestionCell : UITableViewCell
{
    FBCompleteProfileMegaphoneQuestionView *_questionView;
    UIImageView *_topBorderView;
    _Bool _showCompletePercentage;
    NSString *_questionText;
    NSNumber *_completePercentage;
}

@property(nonatomic) _Bool showCompletePercentage; // @synthesize showCompletePercentage=_showCompletePercentage;
@property(copy, nonatomic) NSNumber *completePercentage; // @synthesize completePercentage=_completePercentage;
@property(copy, nonatomic) NSString *questionText; // @synthesize questionText=_questionText;
- (void).cxx_destruct;
- (void)showProgress;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

