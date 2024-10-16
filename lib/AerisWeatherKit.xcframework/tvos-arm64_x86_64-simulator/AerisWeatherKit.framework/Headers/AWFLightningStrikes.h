//
//  AFLightningStrikesLoader.h
//  Aeris
//
//  Created by Nicholas Shipes on 9/6/13.
//  Copyright (c) 2013 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFWeatherEndpoint.h>
#import <AerisWeatherKit/AWFLightningStrike.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * AWFLightningStrikeFilter NS_TYPED_EXTENSIBLE_ENUM;

FOUNDATION_EXPORT AWFLightningStrikeFilter const AWFLightningStrikeFilterAll;
FOUNDATION_EXPORT AWFLightningStrikeFilter const AWFLightningStrikeFilterCloudToGround;
FOUNDATION_EXPORT AWFLightningStrikeFilter const AWFLightningStrikeFilterCloudToCloud;
FOUNDATION_EXPORT AWFLightningStrikeFilter const AWFLightningStrikeFilterNegative;
FOUNDATION_EXPORT AWFLightningStrikeFilter const AWFLightningStrikeFilterPositive;


typedef NSString * AWFLightningStrikeField NS_TYPED_EXTENSIBLE_ENUM;

FOUNDATION_EXPORT AWFLightningStrikeField const AWFLightningStrikeFieldDateTime;
FOUNDATION_EXPORT AWFLightningStrikeField const AWFLightningStrikeFieldPulseType;
FOUNDATION_EXPORT AWFLightningStrikeField const AWFLightningStrikeFieldPeakAmperage;
FOUNDATION_EXPORT AWFLightningStrikeField const AWFLightningStrikeFieldSensorCount;

/**
 `AWFLightningStrikes` provides convenience methods for interacting with the
 [`lightning` endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/lightning) of the Aeris API. All requests will
 return instances of `AWFLightningStrike` that will be populated by the data returned by the API unless otherwise indicated.
 */
@interface AWFLightningStrikes : AWFWeatherEndpoint

@end

NS_ASSUME_NONNULL_END
