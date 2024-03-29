//
//  AWFGraphTimeAxis.h
//  AerisUI
//
//  Created by Nicholas Shipes on 12/22/14.
//  Copyright (c) 2014 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AerisCoreUI/AWFGraphAxis.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * _Nullable (^AWFGraphTimeFormatter)(NSDate *date);

@interface AWFGraphTimeAxis : AWFGraphAxis

/**
 *  The time zone to use when formatting graph labels and tooltips for the axis. Defaults to use the system's current time zone.
 */
@property (nonatomic, strong) NSTimeZone *timeZone;

@end


@interface AWFGraphTimeUnit : NSObject

/**
 *  The name for the time unit.
 */
@property (nonatomic, copy) NSString *name;

/**
 *  The time interval this unit represents.
 */
@property (nonatomic, assign) NSTimeInterval interval;

/**
 *  Creates and returns an empty `AWFGraphTimeUnit` instance.
 *
 *  @return The initialized instance
 */
+ (instancetype)unit;

/**
 *  Creates and returns a `AWFGraphTimeUnit` instance initialized with the specified name and time interval.
 *
 *  @param name     The name to use for the unit
 *  @param interval The time interval the unit represents
 *
 *  @return An instance initialized with the name and interval
 */
+ (instancetype)unitWithName:(NSString *)name interval:(NSTimeInterval)interval;

/**
 *  Sets the block to be used when formatting a date for the unit.
 *
 *  @param formatter The block to be used to format dates
 */
- (void)setFormatter:(nullable AWFGraphTimeFormatter)formatter;

/**
 *  Returns a string representation of a date using the current formatter block.
 *
 *  @param date The date for format
 */
- (nullable NSString *)formattedDate:(NSDate *)date;

@end

NS_ASSUME_NONNULL_END
