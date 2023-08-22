//
//  AWFMKMapViewDelegateProxy.h
//  AerisMapKit
//
//  Created by Nicholas Shipes on 7/15/20.
//  Copyright © 2020 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWFDelegateProxy<T> : NSObject

@property (nonatomic, assign) BOOL silentWhenEmpty;

- (void)addDelegate:(T)delegate;
- (void)removeDelegate:(T)delegate;
- (void)removeAllDelegates;

@end

NS_ASSUME_NONNULL_END
