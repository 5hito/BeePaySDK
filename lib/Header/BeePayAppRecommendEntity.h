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

@property (nonatomic, assign) BOOL appIsPro;
@property (nonatomic, assign) BOOL bSupportSubs;
@property (nonatomic, strong) NSString* appName;
@property (nonatomic, strong) NSString* appDescribe;
@property (nonatomic, strong) NSString* appBundleID;
@property (nonatomic, strong) NSString* appID;
@property (nonatomic, strong) NSString* appImage;
@property (nonatomic, strong) NSString* teamID;
@property (nonatomic, strong) NSString* appProID;
@property (nonatomic, strong) NSArray<NSString*>* subsColors;

@end

NS_ASSUME_NONNULL_END
