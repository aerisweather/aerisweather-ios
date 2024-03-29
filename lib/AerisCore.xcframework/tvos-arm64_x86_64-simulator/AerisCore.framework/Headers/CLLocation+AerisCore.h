//
//  CLLocation+AerisCore.h
//  AerisCore
//
//  Created by Nicholas Shipes on 12/3/15.
//  Copyright © 2015 AerisWeather. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

/**
 *  Checks if a coordinate is both valid and non-zero.
 */
BOOL AWFCoordinate2DIsValidNonZero(CLLocationCoordinate2D coord);

/**
 *  Returns a string formatted to contain the data from a map coordinate.
 *
 *  @param coord The map coordinate to format.
 *
 *  @return A string that corresponds to the map coordinate.
 */
NSString *AWFStringFromCLLocationCoordinate2D(CLLocationCoordinate2D coord);

/**
 *  AWFCoordinateRect
 *
 *	Discussion:
 *		A structure that contains a coordinate bounding box (rect).
 *
 *	Fields:
 *		topLeft:
 *			The coordinate at the top-left corner of the bounding box.
 *		bottomRight:
 *			The coorindate at the bottom-right corner of the bounding box.
 */
typedef struct {
	CLLocationCoordinate2D topLeft;
	CLLocationCoordinate2D bottomRight;
} AWFCoordinateRect;

extern AWFCoordinateRect const AWFCoordinateRectZero;

BOOL AWFCoordinateRectIsValidNonZero(AWFCoordinateRect rect);

/**
 *  CLLocation (Aeris) extension
 *
 *	Adds capabilities to measure distance and direction from coordinates and other locations, define bounding boxes and more.
 */

@interface CLLocation (AerisCore)

/**
 *  Returns the great-circle distance between two coordinates.
 *
 *  @param fromCoord The starting coordinate from which to measure the distance
 *  @param toCoord   The coordinate to which the distance is measured
 *
 *  @return The distance between the two coordiantes as `CLLocationDistance`
 */
+ (CLLocationDistance)awf_distanceFromCoordinate:(CLLocationCoordinate2D)fromCoord toCoordinate:(CLLocationCoordinate2D)toCoord;

/**
 *  Returns the distance between the location and another coordinate.
 *
 *  @param fromCoord The coordinate to which the distance is measured.
 *
 *  @return The distance between the location and the coordinate.
 */
- (CLLocationDirection)awf_distanceFromCoordinate:(CLLocationCoordinate2D)fromCoord;

/**
 *  Returns a direction (in degrees) between an origin coordinate and a destination coordinate.
 *
 *  @param fromCoord The origin coordinate
 *  @param toCoord   The destination coordinate
 *
 *  @return The direction to the destination coordinate in degrees
 */
+ (CLLocationDirection)awf_directionFromCoordinate:(CLLocationCoordinate2D)fromCoord toCoordinate:(CLLocationCoordinate2D)toCoord;

/**
 *  Returns a direction (in degrees) between the receiver and the given location.
 *
 *  @param location The destination location
 *
 *  @return The direction to the destination location in degrees
 */
- (CLLocationDirection)awf_directionToLocation:(CLLocation *)location;

/**
 *  Returns the coordinate bounding box which contains all of the locations.
 *
 *  @param locations The array of `CLLocation` instances to be included in the bounding box
 *
 *  @return The bounding box as `AWFCoordinateRect`
 */
+ (AWFCoordinateRect)awf_boundingBoxContainingLocations:(NSArray *)locations;

/**
 *  Returns the bounding box of a circle defined by a center coordinate and radius in meters.
 *
 *  @param centerCoord The center coordinate of the circle
 *  @param radius      The radius of the circle in meters
 *
 *  @return The bounding box containing the circle
 */
+ (AWFCoordinateRect)awf_boundingBoxWithCenter:(CLLocationCoordinate2D)centerCoord radius:(CLLocationDistance)radius;

@end
