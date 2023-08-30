//
//  AWFMaritimeReport.h
//  AerisWeatherKit
//
//  Created by Slipp Douglas Thompson on 6/28/23.
//  Copyright © 2023 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFGeographicObject.h>

@class AWFMaritimePeriod;

NS_ASSUME_NONNULL_BEGIN

/**
 An `AWFMaritimeReport` object represents data returned by the [**maritime** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/maritime/)
 of the Aeris Weather API.
 */
@interface AWFMaritimeReport : AWFGeographicObject

/**
 The interval between periods.
 */
@property (nonatomic, copy) NSString *interval;

/**
 An array of air quality report periods returned for this item.
 */
@property (nonatomic, strong) NSArray<AWFMaritimePeriod *> *periods;

@end

/**
 An `AWFMaritimePeriod` object represents data for a single period returned by the [**maritime** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/maritime/)
 of the Aeris Weather API.
 */
@interface AWFMaritimePeriod : AWFWeatherObject

/**
 GMT date/time for the event.
 */
@property (nonatomic, strong, nullable) NSDate *timestamp;

/**
 Local time zone of the event location.
 */
@property (nonatomic, copy) NSTimeZone *timeZone;

//-----------------------------------------------------------------------------
#pragma mark Sea Surface Temperature
//-----------------------------------------------------------------------------

/**
 Sea surface temperature in Fahrenheit, or `nil` if unavailable.  Available out 7 days.
 */
@property (nonatomic, assign) CGFloat seaSurfaceTemperatureF;

/**
 Sea surface temperature in Celsius, or `nil` if unavailable.  Available out 7 days.
 */
@property (nonatomic, assign) CGFloat seaSurfaceTemperatureC;

//-----------------------------------------------------------------------------
#pragma mark Sea Current
//-----------------------------------------------------------------------------

/**
 Sea currents speed in knots (KTS), or `NAN` if no current or unavailable.
 */
@property (nonatomic, assign) CGFloat seaCurrentSpeedKTS;

/**
 Sea currents speed in kilometers per hour (KMH), or `NAN` if no current or unavailable.
 */
@property (nonatomic, assign) CGFloat seaCurrentSpeedKMH;

/**
 Sea currents speed in meters per second (MPS), or `NAN` if no current or unavailable.
 */
@property (nonatomic, assign) CGFloat seaCurrentSpeedMPS;

/**
 Sea currents speed in miles per hour (MPH), or `NAN` if no current or unavailable.
 */
@property (nonatomic, assign) CGFloat seaCurrentSpeedMPH;

/**
 Sea current direction in degrees, or `NAN` if no current or unavailable.
 */
@property (nonatomic, assign) CGFloat seaCurrentDirection;

/**
 Sea current direction as a cardinal coordinate value, or `nil` if no current or unavailable.
 */
@property (nonatomic, copy) NSString *seaCurrentDirectionENG;

//-----------------------------------------------------------------------------
#pragma mark Significant Wave
//-----------------------------------------------------------------------------
/**
 Significant wave height in meters, or `NAN` if unavailable.
 */
@property (nonatomic, assign) CGFloat significantWaveHeightM;

/**
 Significant wave height in feet, or `NAN` if unavailable.
 */
@property (nonatomic, assign) CGFloat significantWaveHeightFT;

//-----------------------------------------------------------------------------
#pragma mark Primary Wave
//-----------------------------------------------------------------------------

/**
 Primary wave direction in degrees, or `NAN` if no wave or unavailable.
 */
@property (nonatomic, assign) CGFloat primaryWaveDirection;

/**
 Primary wave direction as a cardinal coordinate value, or `nil` if no wave or unavailable.
 */
@property (nonatomic, copy) NSString *primaryWaveDirectionENG;

/**
 Primary wave period in seconds, or `NAN` if no wave or unavailable.
 */
@property (nonatomic, assign) NSTimeInterval primaryWavePeriod;

//-----------------------------------------------------------------------------
#pragma mark Wind Wave
//-----------------------------------------------------------------------------

/**
 Wind wave direction in degrees, or `NAN` if no wave or unavailable.
 */
@property (nonatomic, assign) CGFloat windWaveDirection;

/**
 Wind wave direction as a cardinal coordinate value, or `nil` if no wave or unavailable.
 */
@property (nonatomic, copy) NSString *windWaveDirectionENG;

/**
 Wind wave period in seconds, or `NAN` if no wave or unavailable.
 */
@property (nonatomic, assign) NSTimeInterval windWavePeriod;

//-----------------------------------------------------------------------------
#pragma mark Primary Swell
//-----------------------------------------------------------------------------

/**
 Primary swell height in meters, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) CGFloat primarySwellHeightM;

/**
 Primary swell height in feet, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) CGFloat primarySwellHeightFT;

/**
 Primary swell direction in degrees, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) CGFloat primarySwellDirection;

/**
 Primary swell direction as a cardinal coordinate value, or `nil` if no swell or unavailable.
 */
@property (nonatomic, copy) NSString *primarySwellDirectionENG;

/**
 Primary swell period in seconds, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) NSTimeInterval primarySwellPeriod;

//-----------------------------------------------------------------------------
#pragma mark Secondary Swell
//-----------------------------------------------------------------------------

/**
 Secondary swell height in meters, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) CGFloat secondarySwellHeightM;

/**
 Secondary swell height in feet, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) CGFloat secondarySwellHeightFT;

/**
 Secondary swell direction in degrees, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) CGFloat secondarySwellDirection;

/**
 Secondary swell direction as a cardinal coordinate value, or `nil` if no swell or unavailable.
 */
@property (nonatomic, copy) NSString *secondarySwellDirectionENG;

/**
 Secondary swell period in seconds, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) NSTimeInterval secondarySwellPeriod;

//-----------------------------------------------------------------------------
#pragma mark Tertiary Swell
//-----------------------------------------------------------------------------

/**
 Tertiary swell height in meters, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) CGFloat tertiarySwellHeightM;

/**
 Tertiary swell height in feet, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) CGFloat tertiarySwellHeightFT;

/**
 Tertiary swell direction in degrees, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) CGFloat tertiarySwellDirection;

/**
 Tertiary swell direction as a cardinal coordinate value, or `nil` if no swell or unavailable.
 */
@property (nonatomic, copy) NSString *tertiarySwellDirectionENG;

/**
 Tertiary swell period in seconds, or `NAN` if no swell or unavailable.
 */
@property (nonatomic, assign) NSTimeInterval tertiarySwellPeriod;

//-----------------------------------------------------------------------------
#pragma mark Tides
//-----------------------------------------------------------------------------

/**
 Tide level in meters, or `NAN` if unavailable.  Can be negative for low tide.  Useful near shore.
 */
@property (nonatomic, assign) CGFloat tideLevelM;

/**
 Tide level in feet, or `NAN` if unavailable.  Can be negative for low tide.  Useful near shore.
 */
@property (nonatomic, assign) CGFloat tideLevelFT;

//-----------------------------------------------------------------------------
#pragma mark Surge
//-----------------------------------------------------------------------------

/**
 Surge level in meters, or `NAN` if unavailable.  Useful near shore.
 */
@property (nonatomic, assign) CGFloat surgeLevelM;

/**
 Surge level in feet, or `NAN` if unavailable.  Useful near shore.
 */
@property (nonatomic, assign) CGFloat surgeLevelFT;

@end

NS_ASSUME_NONNULL_END
