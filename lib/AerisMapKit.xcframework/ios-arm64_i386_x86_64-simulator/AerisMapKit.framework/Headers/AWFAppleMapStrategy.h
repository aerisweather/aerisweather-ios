//
//  AFAppleMapManager.h
//  AerisMap
//
//  Created by Nicholas Shipes on 10/16/13.
//  Copyright (c) 2013 AerisWeather, LLC. All rights reserved.
//

#import <MapKit/MapKit.h>
#import <AerisMapKit/AWFMapStrategy.h>
#import <AerisMapKit/AWFMapOverlayFactory.h>

NS_ASSUME_NONNULL_BEGIN

@class AWFMKAnimationContainerView;

/**
 An `AWFAppleMapStrategy` object implements the `AWFMapStrategy` protocol and provides the necessary functionality for managing a `AWFWeatherMap` configured
 with an `MKMapView` instance that interacts with Apple's MapKit.
 */
@interface AWFAppleMapStrategy : NSObject <AWFMapStrategy, MKMapViewDelegate>

/**
 The map strategy type for the instance.
 */
@property (readonly, nonatomic) AWFMapStrategyType strategyType;

/**
 The map view being managed by the strategy.
 */
@property (nonatomic, strong) MKMapView *mapView;

/**
 The weather map configuration associated with the weather map.
 */
@property (readonly, nonatomic, strong) AWFWeatherMapConfig *config;

/**
 The factory object responsible for generating the map overlays and annotations required by `MKMapView`.
 */
@property (readonly, nonatomic, strong) id<AWFMapOverlayFactory> overlayFactory;

/**
 The annotation callout view used when selecting annotations.
 */
@property (readonly, nonatomic, strong) AWFMapCallout *callout;

/**
 The complete list of overlays associated with the map view.
 */
@property (nonatomic, strong, readonly) NSArray *overlays;

/**
 The complete list of annotations associated with the map view.
 */
@property (nonatomic, strong, readonly) NSArray *annotations;

/**
 The visible map coordinate bounds of the map view.
 */
@property (nonatomic, readonly) AWFMapCoordinateBounds *coordinateBounds;

/**
 The map coordinate at the center of the map view.
 */
@property (nonatomic, readonly) CLLocationCoordinate2D centerCoordinate;

/**
 The zoom level of the map view.
 */
@property (nonatomic, readonly) NSInteger zoomLevel;

/**
 The internal view used for rendering animated raster data.
 */
@property (readonly, nonatomic, strong) AWFMKAnimationContainerView *animationContainerView;

/**
 The receiver's delegate.
 
 The delegate should implement the methods of the `AWFMapStrategyDelegate` protocol.
 */
@property (nonatomic, weak, nullable) id<AWFMapStrategyDelegate> delegate;

/**
 Returns the default annotation view for the specified annotation as configured and styled by the SDK.

 @param annotation Annotation to return the default MKAnnotationView for
 */
- (MKAnnotationView *)defaultAnnotationViewForAnnotation:(id<MKAnnotation>)annotation;

/**
 Returns the default overlay renderer for the specified overlay as configured and styled by the SDK.

 @param overlay Overlay to return the MKOverlayRenderer or layer for
 */
- (MKOverlayRenderer *)defaultRendererForOverlay:(id<MKOverlay>)overlay;

@end

NS_ASSUME_NONNULL_END
