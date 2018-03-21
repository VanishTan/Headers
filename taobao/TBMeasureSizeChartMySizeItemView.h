//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBMeasureSizeChartMySizeItemModel, TBMeasureSizeChartPickChooserView, TBMeasureSizeChartTextField, UILabel;

@interface TBMeasureSizeChartMySizeItemView : UIView
{
    _Bool _lastColumn;
    _Bool _isEditing;
    TBMeasureSizeChartMySizeItemModel *_itemModel;
    TBMeasureSizeChartPickChooserView *_pickerView;
    UILabel *_titleLabel;
    TBMeasureSizeChartTextField *_valueFiled;
    UIView *_divisionLine;
}

@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) UIView *divisionLine; // @synthesize divisionLine=_divisionLine;
@property(retain, nonatomic) TBMeasureSizeChartTextField *valueFiled; // @synthesize valueFiled=_valueFiled;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool lastColumn; // @synthesize lastColumn=_lastColumn;
@property(nonatomic) __weak TBMeasureSizeChartPickChooserView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) TBMeasureSizeChartMySizeItemModel *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;
- (void)setTitle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateState:(_Bool)arg1 success:(_Bool)arg2;
- (id)saveData;

@end
