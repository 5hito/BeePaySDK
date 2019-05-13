//
//  BeePayShowAppPurchaseView.h
//  BeePaySDK
//
//  Created by linshucan on 2019/5/6.
//  Copyright © 2019 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BeePayShowAppPurchaseView;

@protocol BeePayShowAppPurchaseViewDelegate <NSObject>

@optional

- (void)BeePayLoadPurchaseViewFailure:(BeePayShowAppPurchaseView*)purchaseView;
- (void)BeePayLoadPurchaseViewSuccess:(BeePayShowAppPurchaseView*)purchaseView withPurchaseTemplate:(BeePayPurchaseTemplate)templateID;

- (void)BeePayClosePurchaseView:(BeePayShowAppPurchaseView*)purchaseView withPurchaseTemplate:(BeePayPurchaseTemplate)templateID;

//恢复
- (void)BeePayUserClickRestore:(BeePayShowAppPurchaseView*)purchaseView withPurchaseTemplate:(BeePayPurchaseTemplate)templateID;
- (void)BeePayUserRestoreSuccess:(BeePayShowAppPurchaseView*)purchaseView withPurchaseTemplate:(BeePayPurchaseTemplate)templateID withProductID:(NSString*)productID;
- (void)BeePayUserRestoreFailed:(BeePayShowAppPurchaseView*)purchaseView withPurchaseTemplate:(BeePayPurchaseTemplate)templateID;

//购买
- (void)BeePayUserClickPurchased:(BeePayShowAppPurchaseView*)purchaseView withPurchaseTemplate:(BeePayPurchaseTemplate)templateID withProductID:(NSString*)productID;
- (void)BeePayUserPurchasedSuccess:(BeePayShowAppPurchaseView*)purchaseView withPurchaseTemplate:(BeePayPurchaseTemplate)templateID withProductID:(NSString*)productID;
- (void)BeePayUserPurchasedFailed:(BeePayShowAppPurchaseView*)purchaseView withPurchaseTemplate:(BeePayPurchaseTemplate)templateID withProductID:(NSString*)productID;

@end

@interface BeePayShowAppPurchaseView : UIView

@property (nonatomic, weak) id<BeePayShowAppPurchaseViewDelegate> delegate;

- (instancetype)initWithGuide:(BOOL)isGuide;//默认不使用
- (instancetype)initWithGuide:(BOOL)isGuide withUseBackground:(BOOL)isUseBG;
- (instancetype)initWithFrame:(CGRect)frame withGuide:(BOOL)isGuide withUseBackground:(BOOL)isUseBG;

- (void)showPurchaseView;//引导页滑到内购页面后，需要设置此项

@end
