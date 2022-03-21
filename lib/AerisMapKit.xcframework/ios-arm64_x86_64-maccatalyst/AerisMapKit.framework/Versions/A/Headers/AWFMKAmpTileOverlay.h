//
//  AWFMKAmpTileOverlay.h
//  AerisMapKit
//
//  Created by Nicholas Shipes on 12/19/19.
//  Copyright © 2019 AerisWeather, LLC. All rights reserved.
//

#import <AerisMapKit/AWFMKTileOverlay.h>

NS_ASSUME_NONNULL_BEGIN

@class AWFMKAmpTileOverlay;

@protocol AWFMKAmpTileOverlayDelegate <NSObject>

@optional
- (void)tileOverlay:(AWFMKAmpTileOverlay *)tileOverlay didUpdateLayers:(NSArray<NSString *> *)layers;
- (void)tileOverlay:(AWFMKAmpTileOverlay *)tileOverlay needsUpdateInMapRect:(MKMapRect)mapRect;
- (void)tileOverlayNeedsInvalidating:(AWFMKAmpTileOverlay *)tileOverlay;

@end

@interface AWFMKAmpTileOverlay : AWFMKTileOverlay

@property (nonatomic) NSArray<NSString *> *layers;
@property (nonatomic, copy) NSString *timestamp;
@property (nonatomic, weak, nullable) id<AWFMKAmpTileOverlayDelegate> delegate;

- (void)addLayer:(NSString *)layer;
- (void)addLayer:(NSString *)layer atIndex:(NSUInteger)index;
- (void)removeLayer:(NSString *)layer;

@end

NS_ASSUME_NONNULL_END
