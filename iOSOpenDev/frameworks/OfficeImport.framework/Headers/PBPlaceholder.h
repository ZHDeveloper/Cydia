/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PBPlaceholder.h>
#import <OfficeImport/XXUnknownSuperclass.h>


__attribute__((visibility("hidden")))
@interface PBPlaceholder : XXUnknownSuperclass {
}
+ (int)readPlaceholderType:(int)type;	// 0x827d5
+ (int)readPlaceholderSize:(int)size;	// 0x82849
+ (int)readPlaceholderOrientation:(int)orientation;	// 0x82871
+ (int)placeholderTypeFromTextType:(int)textType;	// 0xc28f1
+ (BOOL)isBodyPlaceholder:(int)placeholder;	// 0x21c921
+ (BOOL)isTitlePlaceholder:(int)placeholder;	// 0x21c939
@end

@interface PBPlaceholder (Private)
@end