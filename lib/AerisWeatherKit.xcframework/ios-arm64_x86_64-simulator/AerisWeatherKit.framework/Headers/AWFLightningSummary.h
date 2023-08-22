//
//  AWFLightningSummary.h
//  AerisWeatherKit
//
//  Created by Slipp Douglas Thompson on 5/30/23.
//  Copyright © 2023 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFWeatherObject.h>

NS_ASSUME_NONNULL_BEGIN

@class AWFRangeSummary;

@interface AWFLightningSummary : AWFWeatherObject

/**
 Date and time range of the of the summary.
 */
@property (nonatomic, strong) AWFRangeSummary *range;

/**
 Timestamp of the first lightning pulse within the summary time range.
 */
@property (nonatomic, copy) NSDate *earliestPulseTimestamp;

/**
 Timestamp of the last lightning pulse within the summary time range.
 */
@property (nonatomic, copy) NSDate *latestPulseTimestamp;

/**
 Total number of lightning pulses within the summary range.
 */
@property (nonatomic, assign) NSInteger pulseCount;

/**
 The total number of cloud-to-ground pulses within the summary range, or `NSNotFound` if not available.
 */
@property (nonatomic, assign) NSInteger cloudToGroundPulseCount;

/**
 The total number of intracloud pulses within the summary range, or `NSNotFound` if not available.
 */
@property (nonatomic, assign) NSInteger intracloudPulseCount;

/**
 The total number of lightning pulses with positive polarity peak amperage within the summary range, or `NSNotFound` if not available.
 */
@property (nonatomic, assign) NSInteger positivePulseCount;

/**
 The total number of lightning pulses with negative polarity peak amperage within the summary range, or `NSNotFound` if not available.
 */
@property (nonatomic, assign) NSInteger negativePulseCount;

/**
 Range of peak amperage information, or `nil` if not available.
 */
@property (nonatomic, strong, nullable) AWFRangeSummary *peakAmperage;

/**
 Range of peak amperage information for postive polarity pulses, or `nil` if not available.
 */
@property (nonatomic, strong, nullable) AWFRangeSummary *peakPositiveAmperage;

/**
 Range of peak amperage information for negative polarity pulses, or `nil` if not available.
 */
@property (nonatomic, strong, nullable) AWFRangeSummary *peakNegativeAmperage;

/**
 Range of number of sensors that detected lightning strikes, or `nil` if not available.
 */
@property (nonatomic, strong, nullable) AWFRangeSummary *sensorCount;

@end

NS_ASSUME_NONNULL_END
