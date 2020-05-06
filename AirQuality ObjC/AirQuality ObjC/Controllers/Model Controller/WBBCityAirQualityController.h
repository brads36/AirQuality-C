//
//  WBBCityAirQualityController.h
//  AirQuality ObjC
//
//  Created by Bryce Bradshaw on 5/6/20.
//  Copyright © 2020 BRYCE BRADSHAW. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WBBCityAirQuality.h"

NS_ASSUME_NONNULL_BEGIN

@interface WBBCityAirQualityController : NSObject

- (void)fetchSupportedCountries:(NSArray *)countries;

- (void)fetchSupportedStates:(NSArray *)states;

- (void)fetchSupportedCitiesInState:(NSArray *)cities;

- (void)fetchDataForCity:(WBBCityAirQuality *)cityAirQuality;

@end

NS_ASSUME_NONNULL_END
