//
//  AWFLightningFlash.h
//  AerisWeatherKit
//
//  Created by Slipp Douglas Thompson on 5/19/23.
//  Copyright © 2023 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFGeographicObject.h>
#import <AerisWeatherKit/AWFGeoPolygon.h>

NS_ASSUME_NONNULL_BEGIN

@class AWFLightningFlashMovement, AWFLightningFlashPeriod;

/**
 An `AWFLightningFlash` object represents data returned by the [**lightning/threats** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/lightning-threats/)
 of the Aeris Weather API.
 */
@interface AWFLightningFlash : AWFGeographicObject

/**
 Unique identifier for the lightning storm threat.
 */
@property (nonatomic, copy) NSString *flashId;

/**
 Date/time of the flash event.
 */
@property (nonatomic, copy) NSDate *timestamp;

/**
 Age in seconds of the flash event at the time of the API request.
 */
@property (nonatomic, assign) NSTimeInterval age;

@end

NS_ASSUME_NONNULL_END
