//
//  AWFLineGraphRenderer.h
//  AerisUI
//
//  Created by Nicholas Shipes on 12/19/14.
//  Copyright (c) 2014 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AerisCoreUI/AWFGraphRenderer.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AWFLineGraphRendererDelegate;

@interface AWFLineGraphRenderer : AWFGraphRenderer

/**
 *  Whether the renderer should show points at each data point.
 */
@property (nonatomic, assign) BOOL showPoints;

/**
 *  Whether the renderer should show lines connecting the data points.
 */
@property (nonatomic, assign) BOOL showLines;

/**
 *  Whether the renderer should fill the region underneath the data points/line.
 */
@property (nonatomic, assign) BOOL fillPoints;

/**
 *  Whether the line should be smoothed.
 */
@property (nonatomic, assign, getter=isSmoothed) BOOL smoothed;

@end

NS_ASSUME_NONNULL_END
