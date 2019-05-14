//
//  BeePaySDK.h
//  BeePaySDK
//
//  Created by linshucan on 2018/5/2.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BeePayIapConfigure.h"

@interface BeePaySDK : NSObject

//sdk初始化内购配置
+ (void)initPurchaseConfigs:(BeePayIapConfigure*)configure withInternalPurchase:(BeePayInternalPurchaseSuccess)block;

//弹窗--controller不传，sdk默认是取最高层controller
+ (BOOL)showPopWindowPurchaseWithController:(UIViewController*)controller completion:(BeePayPopWindowCompletion)completionBlock;

//检测内购是否在使用中
+ (void)checkUserPurchaseStatus:(BeePayCheckPurchaseStatus)completionBlock;

//修改应用语言
+ (void)changeAppLanguage:(NSString*)language withConfigFile:(NSString*)configFile;

//用户已经跳过广告后即将进入应用需要告知
+ (void)appWillEnterForeground;

@end
