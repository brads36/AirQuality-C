//
//  WBBWeather.h
//  AirQuality ObjC
//
//  Created by Bryce Bradshaw on 5/6/20.
//  Copyright © 2020 BRYCE BRADSHAW. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WBBWeather : NSObject

@property (nonatomic, readonly) NSInteger tp;
@property (nonatomic, readonly) NSInteger hu;
@property (nonatomic, readonly) NSInteger ws;

- (instancetype)initWithTemperature:(NSInteger)tp
                                 hu:(NSInteger)hu
                                 ws:(NSInteger)ws;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
