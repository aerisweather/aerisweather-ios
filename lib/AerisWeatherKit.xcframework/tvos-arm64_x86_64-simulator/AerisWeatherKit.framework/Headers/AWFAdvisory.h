//
//  AWFAdvisory.h
//  Aeris
//
//  Created by Nicholas Shipes on 9/6/13.
//  Copyright (c) 2013 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AerisWeatherKit/AWFGeographicObject.h>
#import <AerisWeatherKit/AWFGeoPolygon.h>

NS_ASSUME_NONNULL_BEGIN

@class AWFGeoPolygon;

/**
 An `AWFAdvisory` object represents data returned by the [**alerts** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/alerts/)
 of the Aeris Weather API.
 */
@interface AWFAdvisory : AWFGeographicObject

/**
 Data source for the  alert.
 */
@property (nonatomic, copy, nullable) NSString *dataSource;

/**
 Valid-time event code (VTEC) for the advisory.
 */
@property (nonatomic, copy, nullable) NSString *type;

/**
 Type name of the advisory.
 */
@property (nonatomic, copy, nullable) NSString *name;

/**
 Weather zone for the advisory.
 */
@property (nonatomic, copy, nullable) NSString *zone;

/**
 Shortened and formatted version of the advisory body text.
 */
@property (nonatomic, copy, nullable) NSString *body;

/**
 Complete, unmodified version of the advisory body text including raw headers.
 */
@property (nonatomic, copy, nullable) NSString *bodyFull;

/**
 Color used for the alert which corresponds to the AMP Alert types/colors.
 See https://www.aerisweather.com/support/docs/aeris-maps/reference/alert-types/
 */
@property (nonatomic, copy, nullable) UIColor *color;

/**
 Default category of the alert type. May be null for non common alerts.
 */
@property (nonatomic, copy, nullable) NSString *category;

/**
 A Boolean value that indicates whether this is an emergency-specific alert, such as a tornado emergency.
 */
@property (nonatomic, assign) BOOL isEmergency;

/**
 GMT date when the advisory was issued.
 */
@property (nonatomic, strong, nullable) NSDate *issued;

/**
 GMT date when the advisory goes into effect.
 */
@property (nonatomic, strong, nullable) NSDate *begins;

/**
 GMT date when the advisory expires.
 */
@property (nonatomic, strong, nullable) NSDate *expires;

/**
 GMT date when the advisory was stored.
 */
@property (nonatomic, strong, nullable) NSDate *added;

/**
 GMT date when the advisory was updated.
 */
@property (nonatomic, strong, nullable) NSDate *updated;

/**
 For US alerts, value will be a list of US counties in the XXC### format, where XX is the state abbreviation and ###
 is the 3-digit county fips number. For non-US alerts, value will be `nil`.
 */
@property (nonatomic, strong) NSArray<NSString *> *includedCounties;

/**
 For US alerts, this value will be a list of US counties in the XX### format, where XX is the state two digit fips
 number and ### is the 3-digit county fips number. For non-US alerts, value will be `nil`.
 */
@property (nonatomic, strong) NSArray<NSString *> *includedFipsCodes;

/**
 If a US alert will be a list of US public weather zones in the NOAA XXZ### format, where XX is the state
 abbreviation and ### is the 3-digit public zone identifier. For Canadian alerts, this value will be a list of Canadian
 location codes (CLCs).
 */
@property (nonatomic, strong) NSArray<NSString *> *includedWeatherZones;

/**
 For US-based alerts, this value is a list of US zip codes that are affected by the alert. Only US zip codes, where the
 zip code centroid are within the alert, including any small polygon, will be returned.
 */
@property (nonatomic, strong) NSArray<NSNumber *> *includedZipCodes;

/**
 A comma-delimited string of coordinates (longitude, latitude) defining the boundary for the advisory.
 *
 Typically this is only used for certain short-fuse advisories, such as tornado and severe thunderstorm warnings.
 */
@property (nonatomic, copy, nullable) NSString *polygon;

/**
 A `AWFGeoPolygon` instance created from the string of coordinates found in `polygon`, if any.
 */
@property (readonly, nonatomic, nullable) AWFGeoPolygon *geoPolygon;

/**
 Returns a dictionary of `UIColor` instances mapped to their respective advisory VTEC codes. This is the standard advisory color associations used by the
 National Weather Service (NWS) and those used with the advisory map overlay.
 */
+ (nonnull NSDictionary<NSString *, UIColor *> *)colorMappingsForTypes;

/**
 Returns a dictionary of advisory names mapped to their respective advisory VTEC codes.
 */
+ (nonnull NSDictionary<NSString *, NSString *> *)namesByType;

/**
 Returns the standard color associated with the specific advisory VTEC code.
 
 @param type The advisory VTEC code to return the color for
 @return A `UIColor` instance for the advisory type
 */
+ (nullable UIColor *)colorForAdvisoryWithType:(nonnull NSString *)type;

@end


@interface AWFAdvisoryBreakpoint : AWFWeatherObject

/**
 Valid-time event code (VTEC) for the advisory.
 */
@property (nonatomic, copy) NSString *type;

/**
 Array of coordinates (latitude, longitude) defining the line path for the breakpoint.
 */
@property (nonatomic, strong, nullable) NSArray<AWFGeoPolygonCoordValue> *path;

/**
 The geo polyline defined by the array of coordinates.
 */
@property (nonatomic, strong, readonly) AWFGeoPolygon *polyline;

@end

NS_ASSUME_NONNULL_END
