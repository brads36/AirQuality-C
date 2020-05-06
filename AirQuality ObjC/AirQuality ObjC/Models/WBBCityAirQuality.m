//
//  WBBCityAirQuality.m
//  AirQuality ObjC
//
//  Created by Bryce Bradshaw on 5/6/20.
//  Copyright © 2020 BRYCE BRADSHAW. All rights reserved.
//

#import "WBBCityAirQuality.h"

@implementation WBBCityAirQuality

- (instancetype)initWithCity:(NSString *)city country:(NSString *)country weather:(WBBWeather *)weather pollution:(WBBPollution *)pollution
{
    self = [super init];
    if (self)
    {
        _city = city;
        _country = country;
        _weather = weather;
        _pollution = pollution;
    }
    return self;
}

- (instancetype)initWtihDictionary:(NSDictionary *)dictionary
{
    NSDictionary *dataDictionary = dictionary[@"data"];
    
    NSString *city = dataDictionary[@"city"];
    NSString *country = dataDictionary[@"country"];
    
    NSDictionary *currentDictionary = dataDictionary[@"current"];
    
    WBBWeather *weather = [self.weather initWithDictionary:currentDictionary];
    WBBPollution *pollution = [self.pollution initWithDictionary:currentDictionary];
    
    return [self initWithCity:city country:country weather:weather pollution:pollution];
}
@end
