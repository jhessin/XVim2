//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@interface IDEDistributionReformatArchiveStepViewController : IDEDistributionStepViewController
{
    double _startTime;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
@property double startTime; // @synthesize startTime=_startTime;
- (void)spinProgressIndicatorForMinimumDurationAndContinue;
- (void)reformatArchive;
- (BOOL)canGoPrevious;
- (BOOL)canGoNext;
- (id)title;
- (void)viewDidLoad;

@end
