//
//  AWFMaritime.h
//  AerisWeatherKit
//
//  Created by Slipp Douglas Thompson on 6/28/23.
//  Copyright © 2023 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFWeatherEndpoint.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * AWFMaritimeFilter NS_TYPED_EXTENSIBLE_ENUM;

FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter1Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter2Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter3Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter4Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter5Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter6Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter7Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter8Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter9Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter10Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter11Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter12Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter13Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter14Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter15Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter16Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter17Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter18Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter19Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter20Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter21Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter22Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter23Hour;
FOUNDATION_EXPORT AWFMaritimeFilter const AWFMaritimeFilter24Hour;

typedef NSString * AWFMaritimeField NS_TYPED_EXTENSIBLE_ENUM;

FOUNDATION_EXPORT AWFMaritimeField const AWFMaritimeFieldDateTime;

/**
 `AWFMaritime` provides convenience methods for interacting with the
 [`airquality` endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/airquality) of the Aeris API. All requests will
 return instances of `AWFMaritimeReport` that will be populated by the data returned by the API unless otherwise indicated.
 */
@interface AWFMaritime : AWFWeatherEndpoint
@end

NS_ASSUME_NONNULL_END

