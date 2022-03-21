//
//  AWFAdvisorySummary.h
//  AerisWeatherKit
//
//  Created by Nicholas Shipes on 12/9/21.
//  Copyright © 2021 AerisWeather, LLC. All rights reserved.
//

#import <AerisWeatherKit/AerisWeatherKit.h>
#import <AerisWeatherKit/AWFWeatherObject.h>

NS_ASSUME_NONNULL_BEGIN

@class AWFAdvisoryType;

@interface AWFAdvisorySummary : AWFWeatherObject

/**
 The total number of weather zones or FIPS that have active alerts.
 */
@property (nonatomic, assign) NSUInteger count;

/**
 Array containing two-letter country abbreviations that have active alerts.
 */
@property (nonatomic, strong, nullable) NSArray<NSString *> *countries;

/**
 Array containing two-letter US state abbreviations or Canadian province (in the format of "ca.xx") that have active alerts.
 */
@property (nonatomic, strong, nullable) NSArray<NSString *> *states;

/**
 Array containing active VTEC or WMO (if no VTEC) codes for the active alerts.
 */
@property (nonatomic, strong, nullable) NSArray<NSString *> *typeCodes;

/**
 Array containing each active alert type and summary information for each.
 */
@property (nonatomic, strong, nullable) NSArray<AWFAdvisoryType *> *types;

@end

@interface AWFAdvisoryType : AWFWeatherObject

/**
 The total number of weather zones or FIPS that the alert is active within.
 */
@property (nonatomic, assign) NSUInteger count;

/**
 The alert type name.
 */
@property (nonatomic, copy, nullable) NSString *type;

/**
 The VTEC or WMO (if no VTEC) codes for the alert.
 */
@property (nonatomic, copy, nullable) NSString *code;

/**
 The 6 character hex color code for the alert. Corresponds to the [AMP Alert types/colors](https://www.aerisweather.com/support/docs/aeris-maps/reference/alert-types/).
 */
@property (nonatomic, copy, nullable) NSString *color;

/**
 The alert priority, usually based on severity and level of importance.
 */
@property (nonatomic, assign) NSUInteger priority;

/**
 Array containing two-letter country abbreviations in which the alert is active.
 */
@property (nonatomic, strong, nullable) NSArray<NSString *> *countries;

/**
 Array containing two-letter US state abbreviations or Canadian province (in the format of "ca.xx") in which the alert is active.
 */
@property (nonatomic, strong, nullable) NSArray<NSString *> *states;

/**
 Array containing NOAA public weather zones and/or FIPS codes that in which the alert is active.
 */
@property (nonatomic, strong, nullable) NSArray<NSString *> *zones;

@end

NS_ASSUME_NONNULL_END
