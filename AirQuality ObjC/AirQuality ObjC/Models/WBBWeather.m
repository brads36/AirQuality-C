//
//  WBBWeather.m
//  AirQuality ObjC
//
//  Created by Bryce Bradshaw on 5/6/20.
//  Copyright © 2020 BRYCE BRADSHAW. All rights reserved.
//

#import "WBBWeather.h"

@implementation WBBWeather

- (instancetype)initWithTemperature:(NSInteger)tp hu:(NSInteger)hu ws:(NSInteger)ws
{
    self = [super init];
    if (self)
    {
        _tp = tp;
        _hu = hu;
        _ws = ws;
    }
    return self;
}

- (instancetype)initWithDictionary:(NSDictionary *)dictionary
{
    NSDictionary *weatherDictionary = dictionary[@"weather"];
    
    NSInteger tp = [weatherDictionary[@"tp"] intValue];
    NSInteger hu = [weatherDictionary[@"hu"] intValue];
    NSInteger ws = [weatherDictionary[@"ws"] intValue];
    
    return [self initWithTemperature:tp hu:hu ws:ws];
}
@end
