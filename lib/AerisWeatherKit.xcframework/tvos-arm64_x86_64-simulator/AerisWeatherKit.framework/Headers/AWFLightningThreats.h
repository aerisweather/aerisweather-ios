//
//  AFLightningThreats.h
//  Aeris
//
//  Created by Slipp Douglas Thompson on 5/16/23.
//  Copyright © 2023 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFWeatherEndpoint.h>
#import <AerisWeatherKit/AWFLightningThreat.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * AWFLightningThreatFilter NS_TYPED_EXTENSIBLE_ENUM;

FOUNDATION_EXPORT AWFLightningThreatFilter const AWFLightningThreatFilterSevere;
FOUNDATION_EXPORT AWFLightningThreatFilter const AWFLightningThreatFilterNotSevere;

typedef NSString * AWFLightningThreatField NS_TYPED_EXTENSIBLE_ENUM;

FOUNDATION_EXPORT AWFLightningThreatField const AWFLightningThreatFieldStormId;
FOUNDATION_EXPORT AWFLightningThreatField const AWFLightningThreatFieldIssued;
FOUNDATION_EXPORT AWFLightningThreatField const AWFLightningThreatFieldMinValidTime;
FOUNDATION_EXPORT AWFLightningThreatField const AWFLightningThreatFieldMaxValidTime;
FOUNDATION_EXPORT AWFLightningThreatField const AWFLightningThreatFieldSpeed;
FOUNDATION_EXPORT AWFLightningThreatField const AWFLightningThreatFieldAdded;
FOUNDATION_EXPORT AWFLightningThreatField const AWFLightningThreatFieldCreated;

/**
 `AWFLightningThreats` provides convenience methods for interacting with the
 [`lightning/threats` endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/lightning-threats) of the Aeris API. All requests will
 return instances of `AWFLightningThreat` that will be populated by the data returned by the API unless otherwise indicated.
 */
@interface AWFLightningThreats : AWFWeatherEndpoint

@end

NS_ASSUME_NONNULL_END
