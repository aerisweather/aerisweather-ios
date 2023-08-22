//
//  AWFMKAmpTileSource.h
//  AerisMapKit
//
//  Created by Nicholas Shipes on 12/19/19.
//  Copyright © 2019 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AerisMapKit/AWFTileSource.h>
#import <AerisMapKit/AWFOverlayProvider.h>
#import <AerisMapKit/AWFAmpTileSource.h>
#import <AerisMapKit/AWFMKTileSource.h>

NS_ASSUME_NONNULL_BEGIN

/**
 An `AWFMKAmpTileSource` object is a subclass of `AWFAmpTileSource` that provides the necessary `MKOverlay` instance to use with Apple's
 MapKit for displaying a tile overlay using imagery from the Aeris Maps Platform (AMP) on an `MKMapView` instance.
 */
@interface AWFMKAmpTileSource : AWFAmpTileSource <AWFOverlayProvider, AWFMKTileProvider>

/**
 The `MKTileOverlay` instance managed by the layer.
 */
@property (readonly, nonatomic, strong) id<MKOverlay> overlay;

/**
 The position of the overlay relative to other content on the map.
 */
@property (nonatomic, assign) MKOverlayLevel overlayLevel;

@end

NS_ASSUME_NONNULL_END
