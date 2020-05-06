/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSSoftwareUpdatesContext.h>

@class NSString, NSArray;

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext {
}
@property(copy, nonatomic) NSString *clientIdentifierHeader;	// S=0x1eed1; @dynamic
@property(copy, nonatomic) NSArray *softwareTypes;	// S=0x1ef25; @dynamic
@property(assign, nonatomic, getter=isForced) BOOL forced;	// S=0x1ef15; @dynamic
// declared property setter: - (void)setSoftwareTypes:(id)types;	// 0x1ef25
// declared property setter: - (void)setForced:(BOOL)forced;	// 0x1ef15
// declared property setter: - (void)setClientIdentifierHeader:(id)header;	// 0x1eed1
@end