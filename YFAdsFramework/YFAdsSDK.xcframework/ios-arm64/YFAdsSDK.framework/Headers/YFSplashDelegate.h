//
//  YFSplashSupplierDelegate.h
//  YFAdsSDK
//
//  Created by Jentle-Zhi on 2024/4/7.
//

#import <Foundation/Foundation.h>

@class YFSplashManager;

NS_ASSUME_NONNULL_BEGIN

@protocol YFSplashDelegate <NSObject>
@required
/**
 广告数据加载成功
 */
- (void)yf_splashAdDidLoadSuccess:(YFSplashManager *)manager;
@optional
/**
 开屏广告开始请求
 */
- (void)yf_splashAdBeginLoad:(YFSplashManager *)manager;
/**
 广告数据加载失败
 */
- (void)yf_splashAdDidLoadFail:(YFSplashManager *)manager error:(NSError *)error;
/**
 广告将要展示
 */
- (void)yf_splashAdWillShow:(YFSplashManager *)manager;
/**
 广告点击
 */
- (void)yf_splashAdDidClicked:(YFSplashManager *)manager;
/**
 广告曝光成功
 */
- (void)yf_splashAdDidExposuredSuccess:(YFSplashManager *)manager;
/**
 广告曝光失败，快手无此回调
 */
- (void)yf_splashAdDidExposuredFail:(YFSplashManager *)manager error:(nullable NSError *)error;
/**
 跳过按钮被点击
 */
- (void)yf_splashAdSkipButtonDidClicked:(YFSplashManager *)manager;
/**
 广告关闭
 */
- (void)yf_splashAdDidClosed:(YFSplashManager *)manager;
/**
 广告落地页关闭
 */
- (void)yf_splashAdDetailDidClosed:(YFSplashManager *)manager;
/**
 广告倒计时结束回调
 */
- (void)yf_splashAdCountdownToZero:(YFSplashManager *)manager;
/**
 广告数据加载失败回调（平台的失败回调）
 */
- (void)yf_splashAdPlatformDidLoadFail:(YFSplashManager *)manager error:(NSError *)error;
/**
 广告结束
 */
- (void)yf_splashAdDidFinished:(YFSplashManager *)manager error:(nullable NSError *)error;

@end

NS_ASSUME_NONNULL_END
