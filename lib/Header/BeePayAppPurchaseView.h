//
//  BeePayAppPurchaseView.h
//  BeePaySDK
//
//  Created by linshucan on 2019/2/12.
//  Copyright © 2019年 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BeePayGeneralPurchaseConfigure.h"

@class BeePayAppPurchaseView;
@protocol BeePayAppPurchaseViewDelegate <NSObject>

- (void)BeePayClosePurchaseView:(BeePayAppPurchaseView*)purchaseView;

- (void)BeePayUserClickRestore;
- (void)BeePayUserRestoreSuccess:(NSString*)productID;
- (void)BeePayUserRestoreFailed;

- (void)BeePayUserClickPurchased:(NSString*)productID;
- (void)BeePayUserPurchasedSuccess:(NSString*)productID;
- (void)BeePayUserPurchasedFailed:(NSString*)productID;;

@end

@interface BeePayAppPurchaseView : UIView

@property (nonatomic, weak) id<BeePayAppPurchaseViewDelegate> delegate;

- (instancetype)initWithConfigure:(BeePayGeneralPurchaseConfigure*)configure;
- (instancetype)initWithFrame:(CGRect)frame withConfigure:(BeePayGeneralPurchaseConfigure*)configure;

- (void)showPurchaseView;//引导页滑到内购页面后，需要设置此项， 否则导致不可能预知问题

@end

