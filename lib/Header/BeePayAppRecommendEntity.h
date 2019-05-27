//
//  BeePayAppRecommendEntity.h
//  BeePaySDKExample
//
//  Created by linshucan on 2019/5/27.
//  Copyright © 2019 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BeePayAppRecommendEntity : NSObject

@property (nonatomic, strong) NSString* appName;
@property (nonatomic, strong) NSString* appDescribe;
@property (nonatomic, strong) NSString* appBundleId;
@property (nonatomic, strong) NSString* appId;
@property (nonatomic, strong) NSString* appImage;
@property (nonatomic, assign) BOOL appIsPro;

@end

NS_ASSUME_NONNULL_END
