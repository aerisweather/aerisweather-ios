//
//  AWFLightningThreat.h
//  AerisWeatherKit
//
//  Created by Slipp Douglas Thompson on 5/16/23.
//  Copyright © 2023 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFGeographicObject.h>
#import <AerisWeatherKit/AWFGeoPolygon.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * AWFLightningThreatMovementReliability NS_TYPED_EXTENSIBLE_ENUM;

FOUNDATION_EXPORT AWFLightningThreatMovementReliability const AWFLightningThreatMovementReliabilityNotAvailable;
FOUNDATION_EXPORT AWFLightningThreatMovementReliability const AWFLightningThreatMovementReliabilityUnphysical;
FOUNDATION_EXPORT AWFLightningThreatMovementReliability const AWFLightningThreatMovementReliabilityLow;
FOUNDATION_EXPORT AWFLightningThreatMovementReliability const AWFLightningThreatMovementReliabilityMedium;
FOUNDATION_EXPORT AWFLightningThreatMovementReliability const AWFLightningThreatMovementReliabilityHigh;

@class AWFLightningThreatMovement, AWFLightningThreatPeriod;

/**
 An `AWFLightningThreat` object represents data returned by the [**lightning/threats** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/lightning-threats/)
 of the Aeris Weather API.
 */
@interface AWFLightningThreat : AWFGeographicObject

/**
 Unique identifier for the lightning storm threat.
 */
@property (nonatomic, copy) NSString *stormId;

/**
 Data source for the lightning storm threat.
 */
@property (nonatomic, copy) NSString *dataSource;

/**
 Date/time when the lightning storm threat was issued.
 */
@property (nonatomic, copy) NSDate *issued;

/**
 Starting date/time of the lightning storm threat.
 */
@property (nonatomic, copy) NSDate *startDate;

/**
 Ending date/time of the lightning storm threat.
 */
@property (nonatomic, copy) NSDate *endDate;

/**
 A Boolean indicating whether this is a severe lightning storm threat.
 */
@property (nonatomic, readonly) BOOL isSevere;

/**
 An `AWFLightningThreatMovement` instance containing direction and speed information about the lightning storm threat, or `nil` if not available.
 */
@property (nonatomic, strong, nullable) AWFLightningThreatMovement *movement;

/**
 Array of `AWFThreatPeriod` instances for the current and future periods, containing coverage area and start and end date-time information for each period.
 */
@property (nonatomic, copy) NSArray<AWFLightningThreatPeriod *> *periods;

/**
 Array of coordinates (latitude, longitude) representing the estimated direction of the storm, or `nil` if not available.
 */
@property (nonatomic, copy, nullable) NSArray<AWFGeoPolygonCoordValue> *forecastPath;

/**
 The geo polyline defined by the array of coordinates, or `nil` if not available.
 */
@property (nonatomic, strong, nullable, readonly) AWFGeoPolygon *forecastPolyline;

/**
 Time zone of the location of the lightning storm threat.
 */
@property (nonatomic, copy) NSTimeZone *timeZone;

@end


/**
 An `AWFLightningThreat` object represents data for a single period returned by the [**lightning/threats** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/lightning-threats/)
 of the Aeris Weather API.
 */
@interface AWFLightningThreatMovement : AWFWeatherObject

/**
 Estimated direction the lightning storm threat is moving at the time of the advisory in degrees.
 */
@property (nonatomic, assign) CGFloat direction;

/**
 Estimated direction the lightning storm threat is moving at the time of the advisory as a Cardinal coordinate value.
 */
@property (nonatomic, copy) NSString *directionENG;

/**
 Estimated speed the lightning storm threat is moving at the time of the advisory in knots.
 */
@property (nonatomic, assign) CGFloat speedKTS;

/**
 Estimated speed the lightning storm threat is moving at the time of the advisory in kilometers per hour.
 */
@property (nonatomic, assign) CGFloat speedKMH;

/**
 Estimated speed the lightning storm threat is moving at the time of the advisory in miles per hour.
 */
@property (nonatomic, assign) CGFloat speedMPH;

/**
 Reliability of the estimated threat movement information, or `AWFLightningThreatMovementReliabilityNotAvailable` if not available.
 */
@property (nonatomic, assign) AWFLightningThreatMovementReliability reliability;

@end


/**
 An `AWFLightningThreatPeriod` object contains lightning threat information for a specific time period.
 */
@interface AWFLightningThreatPeriod : AWFWeatherObject

/**
 Starting date/time covered by the lightning storm threat period.
 */
@property (nonatomic, copy) NSDate *startDate;

/**
 Ending date/time covered by the lightning storm threat period.
 */
@property (nonatomic, copy) NSDate *endDate;

/**
 An `AWFGeoPolygon` instance representing the threat coverage area for the period.
 */
@property (nonatomic, strong) AWFGeoPolygon *polygon;

@end

NS_ASSUME_NONNULL_END
