//
//  CALayer+AerisCoreUI.h
//  AerisCoreUI
//
//  Created by Nicholas Shipes on 12/4/15.
//  Copyright © 2015 AerisWeather, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface CALayer (AerisCoreUI)

- (void)awf_addAnimation:(CAAnimation *)animation forKey:(nullable NSString *)key;

@end

NS_ASSUME_NONNULL_END
