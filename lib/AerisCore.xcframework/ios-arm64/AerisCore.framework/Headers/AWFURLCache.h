//
//  AWFURLCache.h
//  AerisCore
//
//  Created by Nicholas Shipes on 12/1/15.
//  Copyright © 2015 AerisWeather. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AWFURLCache : NSObject

@property (readonly, strong, nonatomic) NSURLCache *cache;

+ (instancetype)sharedCache;
+ (NSString *)defaultCachePath;
+ (NSURL *)defaultCacheDirectory;

- (instancetype)initWithMemoryCapacity:(NSUInteger)memoryCapacity diskCapacity:(NSUInteger)diskCapacity;

- (void)setMemoryCapacity:(NSUInteger)memoryCapacity diskCapacity:(NSUInteger)diskCapacity;
- (NSTimeInterval)cachedResponseAgeForRequest:(NSURLRequest *)request;
- (NSData *)cachedDataForRequest:(NSURLRequest *)request;
- (NSData *)cachedDataForURL:(NSURL *)URL;
- (UIImage *)cachedImageForRequest:(NSURLRequest *)request;
- (UIImage *)cachedImageForRequest:(NSURLRequest *)request maxAge:(NSTimeInterval)maxAge;

@end
