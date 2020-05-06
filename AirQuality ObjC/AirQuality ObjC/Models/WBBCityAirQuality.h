//
//  WBBCityAirQuality.h
//  AirQuality ObjC
//
//  Created by Bryce Bradshaw on 5/6/20.
//  Copyright © 2020 BRYCE BRADSHAW. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WBBWeather.h"
#import "WBBPollution.h"

NS_ASSUME_NONNULL_BEGIN

@interface WBBCityAirQuality : NSObject

@property (nonatomic, readonly, copy) NSString *city;
@property (nonatomic, readonly, copy) NSString *country;
@property (nonatomic, readonly, copy) WBBWeather *weather;
@property (nonatomic, readonly, copy) WBBPollution *pollution;

- (instancetype)initWithCity:(NSString *)city
                     country:(NSString *)country
                     weather:(WBBWeather *)weather
                   pollution:(WBBPollution *)pollution;

- (instancetype)initWtihDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
