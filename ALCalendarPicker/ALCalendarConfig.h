//
//  ALCalendarConfig.h
//  ALCalendarPickerDemo
//
//  Created by Arclin on 2017/6/17.
//  Copyright © 2017年 arclin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ALCalendarConfig : NSObject

/** 当前日期优先 */
@property (nonatomic, assign) BOOL hightlightPriority;

/**** 今天日期 *****/

/** 文字颜色 */
@property (nonatomic, strong) UIColor *tod_textColor;

/** 背景颜色 */
@property (nonatomic, strong) UIColor *tod_backgroundColor;

/** 圆角 */
@property (nonatomic, strong) NSNumber *tod_backgroundCornerRadius;

/**** 高亮日期 ****/

/** 高亮日期 */
@property (nonatomic, strong) NSArray<NSString *> *heightlightDates;

/** 选择日期 */
@property (nonatomic, strong) NSArray<NSString *> *selectedDates;

/** 文字颜色 */
@property (nonatomic, strong) UIColor *hl_textColor;

/** 背景颜色 */
@property (nonatomic, strong) UIColor *hl_backgroundColor;

/** 圆角 */
@property (nonatomic, strong) NSNumber *hl_backgroundCornerRadius;

/**** 选中日期 ****/

/** 文字颜色 */
@property (nonatomic, strong) UIColor *sel_textColor;

/** 背景颜色 */
@property (nonatomic, strong) UIColor *sel_backgroundColor;

/** 圆角 */
@property (nonatomic, strong) NSNumber *sel_backgroundCornerRadius;

/** 标记日期 */
@property (nonatomic, strong) NSArray<NSString *> *tagDates;

@property (nonatomic, strong) UIColor *tagColor;

@property (nonatomic, strong) NSNumber *tagCornerRadius;


@end
