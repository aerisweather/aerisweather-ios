//
//  AWFWindRangeSummary.h
//  AerisWeatherKit
//
//  Created by Nicholas Shipes on 9/1/20.
//  Copyright © 2020 AerisWeather, LLC. All rights reserved.
//

#import <AerisWeatherKit/AWFRangeSummary.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWFWindRangeSummary : AWFRangeSummary

/**
 Minimum Cardinal wind direction for the range.
 */
@property (nonatomic, copy, nullable) NSString *minDirection;

/**
 Minimum wind direction in degrees (0=North) for the range.
 */
@property (nonatomic, assign) CGFloat minDirectionDEG;

/**
 Maximum Cardinal wind direction for the range.
 */
@property (nonatomic, copy, nullable) NSString *maxDirection;

/**
 Maximum wind direction in degrees (0=North) for the range.
 */
@property (nonatomic, assign) CGFloat maxDirectionDEG;

@end

NS_ASSUME_NONNULL_END
