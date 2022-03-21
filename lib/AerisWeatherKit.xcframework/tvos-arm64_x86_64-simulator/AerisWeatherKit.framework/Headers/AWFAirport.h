//
//  AWFAirport.h
//  AerisWeatherKit
//
//  Created by Nicholas Shipes on 9/1/20.
//  Copyright © 2020 AerisWeather, LLC. All rights reserved.
//

#import <AerisWeatherKit/AWFPlace.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWFAirport : AWFPlace

/**
 The globally recognized airport ID.
 */
@property (nonatomic, copy, nullable) NSString *airportId;

/**
 The name of the airport's city.
 */
@property (nonatomic, copy, nullable) NSString *city;

/**
 The 3 character IATA code for the location when available.
 */
@property (nonatomic, copy, nullable) NSString *iataCode;

/**
 The local ID/code for the location when available.
 */
@property (nonatomic, copy, nullable) NSString *localId;

/**
 The facility type code.
 */
@property (nonatomic, copy, nullable) NSString *typeCode;

/**
 The English name of the facility type.
 */
@property (nonatomic, copy, nullable) NSString *type;

@end

NS_ASSUME_NONNULL_END
