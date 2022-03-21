//
//  AWFConditionSummary.h
//  AerisWeatherKit
//
//  Created by Nicholas Shipes on 9/1/20.
//  Copyright © 2020 AerisWeather, LLC. All rights reserved.
//

#import <AerisWeatherKit/AWFGeographicObject.h>
#import <AerisWeatherKit/AWFCondition.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSDictionary<NSString *, id> *AWFConditionWeatherCodedItem;

@class AWFConditionSummaryPeriod;
@class AWFRangeSummary;
@class AWFWindRangeSummary;
@class AWFPrecipRangeSummary;

/**
 An `AWFConditionSummary` object represents data returned by the [**conditions/summary** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/conditions-summary/)
 of the Aeris Weather API.
 */
@interface AWFConditionSummary : AWFGeographicObject

/**
 Array of `AWFConditionSummaryPeriod` instances.
 */
@property (nonatomic, strong, nullable) NSArray<AWFConditionSummaryPeriod *> *periods;

@end

/**
 An `AWFConditionSummaryPeriod` object represents data for a single period returned by the [**conditions/summary** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/conditions-summary/)
 of the Aeris Weather API.
 */
@interface AWFConditionSummaryPeriod : AWFWeatherObject

/**
 GMT date for the period.
 */
@property (nonatomic, strong, nullable) NSDate *timestamp;

/**
 Local timezone for the forecast period.
 */
@property (nonatomic, strong, nullable) NSTimeZone *timeZone;

/**
 Date range for the period.
 */
@property (nonatomic, strong) AWFRangeSummary *range;

//-----------------------------------------------------------------------------
// @name Weather & Clouds
//-----------------------------------------------------------------------------

/**
 Primary observed weather phrase for the period.
 */
@property (nonatomic, copy, nullable) NSString *weather;

/**
 Coded weather for the primary weather observed during the period.
 */
@property (nonatomic, copy, nullable) NSString *weatherCoded;

/**
 Full observed weather phrase for the period.
 */
@property (nonatomic, copy, nullable) NSString *weatherFull;

/**
 Full set of weather codes for the observed weather during the period.
 */
@property (nonatomic, strong, nullable) NSArray<AWFConditionWeatherCodedItem> *weatherFullCoded;

/**
 Total number of weather records for the period. If no weather other than sky conditions was reported, this value will be zero.
 */
@property (nonatomic, assign) NSInteger weatherCount;

/**
 Array of unique cloud codes that were observed during the period.
 */
@property (nonatomic, strong, nullable) NSArray<NSString *> *cloudsCoded;

/**
 Weather icon representing the observed weather from the default icon set.
 */
@property (nonatomic, copy, nullable) NSString *icon;

/**
 Sky coverage range for the period as a percentage.
 */
@property (nonatomic, strong) AWFRangeSummary *skyCoverPercentage;

//-----------------------------------------------------------------------------
// @name Temperatures
//-----------------------------------------------------------------------------

/**
 Temperature range observed during the period in degrees Celsius.
 */
@property (nonatomic, strong) AWFRangeSummary *tempC;

/**
 Temperature range observed during the period in degrees Fahrenheit.
 */
@property (nonatomic, strong) AWFRangeSummary *tempF;

/**
 Feels like temperature range observed during the period in degrees Celsius.
 */
@property (nonatomic, strong) AWFRangeSummary *feelslikeC;

/**
 Feels like temperature range observed during the period in degrees Fahrenheit.
 */
@property (nonatomic, strong) AWFRangeSummary *feelslikeF;

/**
 Dew point range for the period in degrees Celsius.
 */
@property (nonatomic, strong) AWFRangeSummary *dewpointC;

/**
 Dew point range for the period in degrees Fahrenheit.
 */
@property (nonatomic, strong) AWFRangeSummary *dewpointF;

/**
 Humidity range for the period as a percentage.
 */
@property (nonatomic, strong) AWFRangeSummary *humidity;

//-----------------------------------------------------------------------------
// @name Winds
//-----------------------------------------------------------------------------

/**
 Wind speed range for the period in knots.
 */
@property (nonatomic, strong) AWFWindRangeSummary *windSpeedKTS;

/**
 Wind speed range for the period in miles per hour.
 */
@property (nonatomic, strong) AWFWindRangeSummary *windSpeedMPH;

/**
 Wind speed range for the period in kilometers per hour.
 */
@property (nonatomic, strong) AWFWindRangeSummary *windSpeedKMH;

/**
 Wind gust range for the period in knots.
 */
@property (nonatomic, strong) AWFWindRangeSummary *windGustKTS;

/**
 Wind gust range for the period in miles per hour.
 */
@property (nonatomic, strong) AWFWindRangeSummary *windGustMPH;

/**
 Wind gust range for the period in kilometers per hour.
 */
@property (nonatomic, strong) AWFWindRangeSummary *windGustKMH;

//-----------------------------------------------------------------------------
// @name Pressure
//-----------------------------------------------------------------------------

/**
 Barometric pressure range for the period in millibars.
 */
@property (nonatomic, strong) AWFRangeSummary *pressureMB;

/**
 Barometric pressure range for the period in inches of mercury.
 */
@property (nonatomic, strong) AWFRangeSummary *pressureIN;

//-----------------------------------------------------------------------------
// @name Visibility
//-----------------------------------------------------------------------------

/**
 Surface visibility range for the period in kilometers.
 */
@property (nonatomic, strong) AWFRangeSummary *visibilityKM;

/**
 Surface visibility range for the period in miles.
 */
@property (nonatomic, strong) AWFRangeSummary *visibilityMI;

//-----------------------------------------------------------------------------
// @name Precipitation
//-----------------------------------------------------------------------------

/**
 Total precipitation range observed for the period in inches.
 */
@property (nonatomic, strong) AWFPrecipRangeSummary *precipIN;

/**
 Total precipitation range observed for the period in millimeters.
 */
@property (nonatomic, strong) AWFPrecipRangeSummary *precipMM;

/**
 Total snowfall range observed for the period in inches.
 */
@property (nonatomic, strong) AWFPrecipRangeSummary *snowIN;

/**
 Total snowfall range observed for the period in centimeters.
 */
@property (nonatomic, strong) AWFPrecipRangeSummary *snowCM;

//-----------------------------------------------------------------------------
// @name Other
//-----------------------------------------------------------------------------

/**
 Solar radiation range for the period in watts per square meter (not provided by all stations).
 */
@property (nonatomic, strong) AWFRangeSummary *solarRadiationWM2;

/**
 Ultraviolet radiation range for the period.
 */
@property (nonatomic, strong) AWFRangeSummary *uvi;

@end


NS_ASSUME_NONNULL_END
