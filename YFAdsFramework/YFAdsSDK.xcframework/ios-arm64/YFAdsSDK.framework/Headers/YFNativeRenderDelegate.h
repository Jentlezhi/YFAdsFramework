//
//  YFNativeRenderObjectDelegate.h
//  YFAdsSDKDemo
//
//  Created by Jentle-Zhi on 2024/3/29.
//

#import <UIKit/UIKit.h>
#import <YFAdsSDK/YFNativeRenderObject.h>

@class YFNativeRenderManager, YFNativeRenderView;

NS_ASSUME_NONNULL_BEGIN

///===========================================================
/// YFNativeRenderObjectDelegate
///===========================================================

@protocol YFNativeRenderObjectDelegate <NSObject>

@optional
/**
 广告开始请求
 */
- (void)yf_nativeAdBeginLoad:(YFNativeRenderManager *_Nonnull)nativeRenderManager;
/**
 广告请求结果（成功和失败都在这个回调，error为nil，则请求成功，否则请求失败）
 */
- (void)yf_nativeAdDataDidLoadSuccess:(YFNativeRenderManager *_Nonnull)nativeRenderManager
                      nativeAdObjects:(NSArray <YFNativeRenderObject *> *_Nullable)nativeAdObjects
                                error:(NSError *_Nullable)error;
/**
 广告数据加载失败回调（平台的失败回调）
 */
- (void)yf_nativeAdPlatformDidLoadFail:(YFNativeRenderManager *)nativeRenderManager error:(NSError *)error;
@end

///===========================================================
/// YFNativeRenderViewDelegate
///===========================================================

@protocol YFNativeRenderViewDelegate <NSObject>
/**
 广告曝光成功
 */
- (void)yf_nativeAdViewDidExposedSuccess:(YFNativeRenderView *_Nonnull)nativeRenderView;
/**
 广告曝光失败
 */
- (void)yf_nativeAdViewDidExposedFail:(YFNativeRenderView *_Nonnull)nativeRenderView
                                error:(NSError *_Nonnull)error;
/**
 广告点击
 */
- (void)yf_nativeAdViewDidClicked:(YFNativeRenderView *_Nonnull)nativeRenderView
                   nativeAdObject:(YFNativeRenderObject *_Nonnull)nativeAdObject;
/**
 广告关闭
 */
- (void)yf_nativeAdViewDetailDidClosed:(YFNativeRenderView *_Nonnull)nativeRenderView;
/**
 广告视频开始播放
 */
- (void)yf_nativeAdMediaBeginPlay:(YFNativeRenderView *_Nonnull)nativeRenderView
                   nativeAdObject:(YFNativeRenderObject *_Nonnull)nativeAdObject;
/**
 广告视频暂停播放
 */
- (void)yf_nativeAdMediaPause:(YFNativeRenderView *_Nonnull)nativeRenderView
                   nativeAdObject:(YFNativeRenderObject *_Nonnull)nativeAdObject;
/**
 广告视频恢复播放
 */
- (void)yf_nativeAdMediaResume:(YFNativeRenderView *_Nonnull)nativeRenderView
                   nativeAdObject:(YFNativeRenderObject *_Nonnull)nativeAdObject;
/**
 广告视频播放完毕
 */
- (void)yf_nativeAdMediaFinishPlay:(YFNativeRenderView *_Nonnull)nativeRenderView
                    nativeAdObject:(YFNativeRenderObject *_Nonnull)nativeAdObject;
/**
 广告视频播放失败
 */
- (void)yf_nativeAdMediaPlayFailed:(YFNativeRenderView *_Nonnull)nativeRenderView
                           error:(NSError *_Nonnull)error;
@end

NS_ASSUME_NONNULL_END
