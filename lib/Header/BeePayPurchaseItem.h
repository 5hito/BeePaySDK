//
//  BeePayPurchaseItem.h
//  BeePaySDK
//
//  Created by linshucan on 2019/2/14.
//  Copyright © 2019年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BeePayPurchaseItem : NSObject

//内购id
@property (nonatomic, strong) NSString* productID;
@property (nonatomic, strong) NSString* title;
@property (nonatomic, strong) NSString* subTitle;
@property (nonatomic, strong) NSString* present;//节省
@property (nonatomic, strong) NSString* freeDay;//免费天数
@property (nonatomic, strong) NSString* money;//订阅价格

@end

