//
//  AWFLightningFlashes.h
//  AerisWeatherKit
//
//  Created by Slipp Douglas Thompson on 5/19/23.
//  Copyright © 2023 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFWeatherEndpoint.h>
#import <AerisWeatherKit/AWFLightningFlash.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * AWFLightningFlashField NS_TYPED_EXTENSIBLE_ENUM;

FOUNDATION_EXPORT AWFLightningFlashField const AWFLightningFlashFieldDateTime;

/**
 `AWFLightningFlashes` provides convenience methods for interacting with the
 [`lightning/threats` endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/lightning-flash) of the Aeris API. All requests will
 return instances of `AWFLightningFlash` that will be populated by the data returned by the API unless otherwise indicated.
 */
@interface AWFLightningFlashes : AWFWeatherEndpoint

@end

NS_ASSUME_NONNULL_END
