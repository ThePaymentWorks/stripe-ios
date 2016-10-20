//
//  STPOptimizationMetrics.h
//  Stripe
//
//  Created by Ben Guo on 7/15/16.
//  Copyright © 2016 Stripe, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const STPUserDefaultsKeyFirstAppOpenTime;
extern NSString *const STPUserDefaultsKeyTotalAppOpenCount;
extern NSString *const STPUserDefaultsKeyTotalAppUsageDuration;

@interface STPOptimizationMetrics : NSObject
@property (nonatomic, strong) NSDate *sessionAppOpenTime;
- (NSDictionary *)serialize;
@end
