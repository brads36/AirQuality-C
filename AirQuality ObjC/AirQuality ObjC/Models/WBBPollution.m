//
//  WBBPollution.m
//  AirQuality ObjC
//
//  Created by Bryce Bradshaw on 5/6/20.
//  Copyright © 2020 BRYCE BRADSHAW. All rights reserved.
//

#import "WBBPollution.h"

@implementation WBBPollution

- (instancetype)initWithStringAirQualityIndex:(NSString *)aqius
{
    self = [super init];
    if (self)
    {
        _aqius = aqius;
    }
    
    return self;
}

- (instancetype)initWithDictionary:(NSDictionary *)dictionary
{
    NSDictionary *pollutionDictionary = dictionary[@"pollution"];
    
    NSInteger aqius = [pollutionDictionary[@"aqius"] intValue];
    NSString *aqiusString = [NSString stringWithFormat:@"%ld", (long)aqius];
    return [self initWithStringAirQualityIndex:aqiusString];
}
@end
