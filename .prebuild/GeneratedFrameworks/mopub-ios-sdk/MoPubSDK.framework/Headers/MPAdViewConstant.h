//
//  MPAdViewConstant.h
//
//  Copyright 2018-2021 Twitter, Inc.
//  Licensed under the MoPub SDK License Agreement
//  http://www.mopub.com/legal/sdk-license-agreement/
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// This size includes the whole hit box of the button, which might be larger than the button image.
extern const CGSize kMPAdViewCloseButtonSize;

extern const NSTimeInterval kDefaultRewardCountdownTimerIntervalInSeconds;

typedef NS_ENUM(NSUInteger, MPAdContentType) {
    /// 3rd party network ads belong to this case, with 0 for the value as the default
    MPAdContentTypeUndefined = 0,

    /// VAST video ads
    MPAdContentTypeVideo,

    /// HTML ads without MRAID support which are typically JavaScript ads
    MPAdContentTypeWebNoMRAID,

    /// MRAID ads
    MPAdContentTypeWebWithMRAID,

    /// Image ads (ads where an image is loaded into a UIImageView rather than a web view)
    MPAdContentTypeImage
};

NS_ASSUME_NONNULL_END
