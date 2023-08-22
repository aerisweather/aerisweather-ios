//
//  AFLightning.h
//  Aeris
//
//  Created by Nicholas Shipes on 9/6/13.
//  Copyright (c) 2013 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFGeographicObject.h>

NS_ASSUME_NONNULL_BEGIN

/**
 An `AWFLightningStrike` object represents data returned by the [**lightning** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/lightning/)
 of the Aeris Weather API.
 */
@interface AWFLightningStrike : AWFGeographicObject

/**
 GMT date of the strike.
 */
@property (nonatomic, strong, nullable) NSDate *timestamp;

/**
 Type of lightning strike, either cloud-to-cloud (IC) or cloud-to-ground (CG).
 */
@property (nonatomic, copy, nullable) NSString *pulseType;

/**
 Peak electric current in amps, or `NAN` if not available.
 */
@property (nonatomic, assign) CGFloat peakAmperage;

/**
 The number of sensors that detected the lightning pulse, or `NSNotFound` if not available.
 */
@property (nonatomic, assign) NSInteger sensorCount;

@end

NS_ASSUME_NONNULL_END
