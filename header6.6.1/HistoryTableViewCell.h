//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class MMUILabel, MMWebImageView, UIView, VerticallyAlignedLabel;

@interface HistoryTableViewCell : MMMultiMenuTableViewCell
{
    VerticallyAlignedLabel *_title;
    MMUILabel *_source;
    MMWebImageView *_image;
    MMUILabel *_time;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMUILabel *time; // @synthesize time=_time;
@property(retain, nonatomic) MMWebImageView *image; // @synthesize image=_image;
@property(retain, nonatomic) MMUILabel *source; // @synthesize source=_source;
@property(retain, nonatomic) VerticallyAlignedLabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTableCellInfo:(id)arg1;
- (void)initLineView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

