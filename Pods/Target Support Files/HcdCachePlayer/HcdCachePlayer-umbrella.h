#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "HcdAudioPlayer.h"
#import "HcdCachePlayer.h"
#import "HcdCacheVideoPlayer.h"
#import "HcdLightView.h"
#import "HcdLoaderURLConnection.h"
#import "HcdPlayerView.h"
#import "HcdTimeSheetView.h"
#import "HcdVideoRequestTask.h"
#import "NSString+HCD.h"

FOUNDATION_EXPORT double HcdCachePlayerVersionNumber;
FOUNDATION_EXPORT const unsigned char HcdCachePlayerVersionString[];

