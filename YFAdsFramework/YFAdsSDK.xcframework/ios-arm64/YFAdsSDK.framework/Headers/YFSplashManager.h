//
//  YFSplashManager.h
//  YFAdsSDK
//
//  Created by Jentle-Zhi on 2024/3/22.
//

#import <UIKit/UIKit.h>
#import <YFAdsSDK/YFCommon.h>
#import <YFAdsSDK/YFSplashConfig.h>
#import <YFAdsSDK/YFSplashDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface YFSplashManager : NSObject

@property(nonatomic, weak) id<YFSplashDelegate> delegate;
/// 当前广告商类型
@property(nonatomic, assign, readonly) YFSupplierType currentSupplierType;
/**
 初始化开屏广告
 */
- (instancetype)initWithConfig:(void(^)(YFSplashConfig *config))configBlock;
/**
 加载广告数据
 */
- (void)loadData;
/**
 显示广告
 */
- (void)showSplash;
/**
 显示广告
 */
- (void)showSplashInWindow:(nonnull UIWindow *)window;
/**
 显示广告
 @param window               窗口
 @param rootViewController   根控制器
 */
- (void)showSplashInWindow:(nonnull UIWindow *)window
        rootViewController:(nonnull UIViewController *)rootViewController;
/**
 移除开屏广告（默认会自动移除，异常时可以自行调该方法手动移除）
 */
- (void)removeSplash;

@end

NS_ASSUME_NONNULL_END
