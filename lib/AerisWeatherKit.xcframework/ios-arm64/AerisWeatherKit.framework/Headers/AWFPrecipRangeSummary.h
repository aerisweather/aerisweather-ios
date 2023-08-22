//
//  AWFPrecipRangeSummary.h
//  AerisWeatherKit
//
//  Created by Nicholas Shipes on 9/1/20.
//  Copyright © 2020 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AerisWeatherKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWFPrecipRangeSummary : AWFRangeSummary

/**
 Total value for the range.
 */
@property (nonatomic, assign) CGFloat total;

@end

NS_ASSUME_NONNULL_END
