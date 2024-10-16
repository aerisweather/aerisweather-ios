//
//  AWFObservationSummary.h
//  Aeris
//
//  Created by Nicholas Shipes on 8/20/14.
//  Copyright (c) 2014 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFGeographicObject.h>
#import <AerisWeatherKit/AWFObservation.h>

NS_ASSUME_NONNULL_BEGIN

@class AWFObservationSummaryPeriod;
@class AWFRangeSummary;
@class AWFPrecipRangeSummary;
@class AWFWindRangeSummary;

/**
 An `AWFObservationSummary` object represents data returned by the [**observations/summary** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/observations-summary/)
 of the Aeris Weather API.
 */
@interface AWFObservationSummary : AWFGeographicObject

/**
 Station identifier for this location, usually an ICAO.
 */
@property (nonatomic, copy, nullable) NSString *stationId;

/**
 Array of `AWFObservationSummaryPeriod` instances.
 */
@property (nonatomic, strong, nullable) NSArray<AWFObservationSummaryPeriod *> *periods;

@end


/**
 An `AWFObservationSummaryPeriod` object represents data for a single period returned by the [**observations/summary** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/observations-summary/)
 of the Aeris Weather API.
 */
@interface AWFObservationSummaryPeriod : AWFWeatherObject

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
@property (nonatomic, strong, nullable) NSArray<AWFObservationWeatherCodedItem> *weatherFullCoded;

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
 True if at least one observation reported a trace of precipitation.
 */
@property (nonatomic, assign) BOOL hasPrecipTrace;

/**
 Total number of observations that reported a trace of precipitation.
 */
@property (nonatomic, assign) CGFloat precipTraceCount;

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
 Maximum wind gust range observed during the period in knots.
 */
@property (nonatomic, assign) AWFWindRangeSummary *windGustKTS;

/**
 Maximum wind gust range observed during the period in miles per hour.
 */
@property (nonatomic, assign) AWFWindRangeSummary *windGustMPH;

/**
 Maximum wind gust range observed during the period in kilometers per hour.
 */
@property (nonatomic, assign) AWFWindRangeSummary *windGustKMH;

//-----------------------------------------------------------------------------
// @name Barometric Pressure
//-----------------------------------------------------------------------------

/**
 Mean sea level pressure (MSLP) range for the period in millibars.
 */
@property (nonatomic, strong) AWFRangeSummary *pressureMB;

/**
 Mean sea level pressure (MSLP) range for the period in inches of mercury.
 */
@property (nonatomic, strong) AWFRangeSummary *pressureIN;

/**
 Station pressure range for the period in millibars.
 */
@property (nonatomic, strong) AWFRangeSummary *stationPressureMB;

/**
 Station pressure range for the period in inches of mercury.
 */
@property (nonatomic, strong) AWFRangeSummary *stationPressureIN;

/**
 Altimeter pressure range for the period in millibars.
 */
@property (nonatomic, strong) AWFRangeSummary *altimeterMB;

/**
 Altimeter pressurerange for the period in inches of mercury.
 */
@property (nonatomic, strong) AWFRangeSummary *altimeterIN;

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
// @name Solar Radiation
//-----------------------------------------------------------------------------

/**
 Solar radiation range for the period in watts per square meter (not provided by all stations).
 */
@property (nonatomic, strong) AWFRangeSummary *solarRadiationWM2;

@property (nonatomic, strong) AWFRangeSummary *trustFactor;

@end

NS_ASSUME_NONNULL_END
