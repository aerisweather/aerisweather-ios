//
//  AWFFirePerimeter.h
//  AerisWeatherKit
//
//  Created by Nicholas Shipes on 12/9/21.
//  Copyright © 2021 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AerisWeatherKit.h>
#import <AerisWeatherKit/AWFWeatherObject.h>
#import <AerisWeatherKit/AWFGeoPolygon.h>

NS_ASSUME_NONNULL_BEGIN

/**
 An `AWFFirePerimeter` object represents perimeter information for a fire as returned by the [**fires** endpoint](https://www.aerisweather.com/support/docs/api/reference/endpoints/fires/)
 of the Aeris Weather API.
 */
@interface AWFFirePerimeter : AWFWeatherObject

/**
 GMT date when the fire started.
 
 This property is usually only provided for critical/large fires (type=`L`), but not always.
 */
@property (nonatomic, strong, nullable) NSDate *startedAt;

/**
 GMT date when the fire perimeter data was last updated.
 */
@property (nonatomic, strong, nullable) NSDate *updatedAt;

/**
 Estimated coverage of the fire in square kilometers.
 */
@property (nonatomic, assign) CGFloat areaKM;

/**
 Estimated coverage of the fire in square miles.
 */
@property (nonatomic, assign) CGFloat areaMI;

/**
 Estimated coverage of the fire in acres.
 */
@property (nonatomic, assign) CGFloat areaAC;

/**
 An array of `AWFGeoPolygon` instances that define the perimeter of the fire when available.
 
 In order to return polygons with your request, you must also include the `geo` filter with your request options. If this filter is not included and/or
 there are no cell groups, then this value will be `nil`.
 */
@property (nonatomic, strong, nullable) NSArray<AWFGeoPolygon *> *polygons;

@end

NS_ASSUME_NONNULL_END
