//
//  BeePayIapConfigure.h
//  BeePaySDK
//
//  Created by linshucan on 2019/5/9.
//  Copyright © 2019 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, BeePayPopType) {
    BeePayPopCloseType = 0,//关闭
    BeePayPopWatchVideoType = 1,
    BeePayPopClickPurchasedType = 2,
    BeePayPopPurchasedStateType = 3,
};

typedef void (^BeePayPopWindowCompletion)(BOOL success, BeePayPopType type, NSString* productID);
typedef void (^BeePayCheckPurchaseStatus)(BOOL status, NSString* errorMsg, NSString* productID, NSNumber* date);
typedef void (^BeePayInternalPurchaseSuccess)(NSString* productID);

@interface BeePayIapConfigure : NSObject

@property (nonatomic, strong) NSString* storeKitSharedSecret;//秘钥
@property (nonatomic, strong) NSArray<NSString*>* renewalProductArr;//订阅项
@property (nonatomic, strong) NSArray<NSString*>* consumablesArr;//消耗性，即一次性购买类型

@property (nonatomic, strong) NSString* appLanguage;//应用语言
@property (nonatomic, strong) NSString* rewardVideoUnitID;//谷歌激励视频广告id
@property (nonatomic, strong) NSString* configFile;//配置文件

@end


