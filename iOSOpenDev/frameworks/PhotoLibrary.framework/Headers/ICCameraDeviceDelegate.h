/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/ICDeviceDelegate.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>


@protocol ICCameraDeviceDelegate <ICDeviceDelegate>
@optional
- (void)cameraDevice:(id)device didReceiveMetadata:(id)metadata forItem:(id)item error:(id)error;
- (void)cameraDevice:(id)device didReceiveThumbnail:(CGImageRef)thumbnail forItem:(id)item error:(id)error;
- (void)cameraDevice:(id)device didRemoveItems:(id)items;
- (void)cameraDevice:(id)device didAddItems:(id)items;
@end