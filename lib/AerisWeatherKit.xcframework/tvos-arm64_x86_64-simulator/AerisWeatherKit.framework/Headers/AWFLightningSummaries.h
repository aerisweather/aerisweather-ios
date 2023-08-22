//
//  AWFLightningSummaries.h
//  AerisWeatherKit
//
//  Created by Slipp Douglas Thompson on 5/30/23.
//  Copyright © 2023 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFWeatherEndpoint.h>
#import <AerisWeatherKit/AWFLightningSummary.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * AWFLightningSummaryFilter NS_TYPED_EXTENSIBLE_ENUM;

FOUNDATION_EXPORT AWFLightningSummaryFilter const AWFLightningSummaryFilterAll;
FOUNDATION_EXPORT AWFLightningSummaryFilter const AWFLightningSummaryFilterCloudToGround;
FOUNDATION_EXPORT AWFLightningSummaryFilter const AWFLightningSummaryFilterCloudToCloud;
FOUNDATION_EXPORT AWFLightningSummaryFilter const AWFLightningSummaryFilterNegative;
FOUNDATION_EXPORT AWFLightningSummaryFilter const AWFLightningSummaryFilterPositive;


typedef NSString * AWFLightningSummaryField NS_TYPED_EXTENSIBLE_ENUM;

FOUNDATION_EXPORT AWFLightningSummaryField const AWFLightningSummaryFieldDateTime;
FOUNDATION_EXPORT AWFLightningSummaryField const AWFLightningSummaryFieldPulseType;
FOUNDATION_EXPORT AWFLightningSummaryField const AWFLightningSummaryFieldPeakAmperage;
FOUNDATION_EXPORT AWFLightningSummaryField const AWFLightningSummaryFieldSensorCount;

/**
 `AWFLightningSummaries` provides convenience methods for interacting with the
 [`alerts/summary` endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/lightning-summary) of the Aeris API. All requests will
 return instances of `AWFLightningSummary` that will be populated by the data returned by the API unless otherwise indicated.
 */
@interface AWFLightningSummaries : AWFWeatherEndpoint

@end

NS_ASSUME_NONNULL_END
