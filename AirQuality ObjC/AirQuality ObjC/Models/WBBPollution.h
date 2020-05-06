//
//  WBBPollution.h
//  AirQuality ObjC
//
//  Created by Bryce Bradshaw on 5/6/20.
//  Copyright © 2020 BRYCE BRADSHAW. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WBBPollution : NSObject

@property (nonatomic, readonly, copy) NSString *aqius;
//@property (nonatomic, readonly, copy) NSString *mainus;
//@property (nonatomic, readonly) NSInteger aqicn;
//@property (nonatomic, readonly, copy) NSString *maincn;

- (instancetype)initWithStringAirQualityIndex:(NSString *)airQualityIndex;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
