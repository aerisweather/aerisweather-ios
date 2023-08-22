//
//  AWFDataRange.h
//  Aeris
//
//  Created by Nicholas Shipes on 11/3/15.
//  Copyright © 2015 Aeris Weather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisWeatherKit/AWFWeatherObject.h>

NS_ASSUME_NONNULL_BEGIN

/**
 An `AWFRangeSummary` object represents a summary of data for a specific range, including the minimum, maximum and average of all values within the
 range.
 */
@interface AWFRangeSummary : AWFWeatherObject

/**
 Number of records used for the range.
 */
@property (nonatomic, assign) NSInteger count;

/**
 Minimum value for the range.
 */
@property (nonatomic, assign) CGFloat min;

/**
 GMT date that the minimum value occurred when available.
 */
@property (nonatomic, strong, nullable) NSDate *minTimestamp;

/**
 Maximum value for the range.
 */
@property (nonatomic, assign) CGFloat max;

/**
 GMT date when the maximum value occurred when available.
 */
@property (nonatomic, strong, nullable) NSDate *maxTimestamp;

/**
 Average of all values for the range.
 */
@property (nonatomic, assign) CGFloat average;

- (void)mergeWithSummary:(AWFRangeSummary *)otherSummary;

+ (NSArray<NSString *> *)propertyAssignmentMapping;
+ (NSDictionary<NSString *, NSString *> *)propertyNameAssignmentMapping;
+ (NSDictionary *)propertyMappingsFromProperty:(NSString *)sourceProperty toProperty:(NSString *)targetProperty;
+ (NSDictionary *)propertyMappingsFromProperty:(NSString *)sourceProperty toProperty:(NSString *)targetProperty sourceSuffixes:(nullable NSArray<NSString *> *)sourceSuffixes;
+ (NSDictionary *)propertyMappingsFromProperty:(NSString *)sourceProperty toProperty:(NSString *)targetProperty sourceSuffixes:(nullable NSArray<NSString *> *)sourceSuffixes targetSuffixes:(nullable NSArray<NSString *> *)targetSuffixes;

@end

NS_ASSUME_NONNULL_END
