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
- (void)BeePayLoadPurchaseFailure:(BeePayShowAppPurchaseView*)purchaseView;
- (void)BeePayClosePurchaseView:(BeePayShowAppPurchaseView*)purchaseView;

- (void)BeePayUserClickRestore;
- (void)BeePayUserRestoreSuccess:(NSString*)productID;
- (void)BeePayUserRestoreFailed;

- (void)BeePayUserClickPurchased:(NSString*)productID;
- (void)BeePayUserPurchasedSuccess:(NSString*)productID;
- (void)BeePayUserPurchasedFailed:(NSString*)productID;

@end

@interface BeePayShowAppPurchaseView : UIView

@property (nonatomic, assign) BOOL isAppGuide;
@property (nonatomic, assign) BOOL isUseBackground;
@property (nonatomic, weak) id<BeePayShowAppPurchaseViewDelegate> delegate;

- (instancetype)initWithGuide:(BOOL)isGuide;//默认不使用
- (instancetype)initWithGuide:(BOOL)isGuide withUseBackground:(BOOL)isUseBG;
- (instancetype)initWithFrame:(CGRect)frame withGuide:(BOOL)isGuide withUseBackground:(BOOL)isUseBG;

- (void)showPurchaseView;//引导页滑到内购页面后，需要设置此项

@end
