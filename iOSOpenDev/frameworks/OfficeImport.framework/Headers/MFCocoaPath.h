/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPath.h>

@class NSBezierPathStub;

__attribute__((visibility("hidden")))
@interface MFCocoaPath : MFPath {
@private
	NSBezierPathStub *m_path;	// 4 = 0x4
	int m_state;	// 8 = 0x8
}
@property(readonly, assign) int state;	// G=0x2c750d; converted property
- (id)init;	// 0x96d69
- (id)initWithPath:(id)path state:(int)state;	// 0x9cae5
- (void)dealloc;	// 0x91e5d
- (id)copyWithZone:(NSZone *)zone;	// 0x9c87d
// converted property getter: - (int)state;	// 0x2c750d
- (BOOL)isOpen;	// 0x9ae35
- (int)begin;	// 0x15d979
- (int)end;	// 0x15e2a9
- (int)abort;	// 0x2c7569
- (CGPoint)currentPoint;	// 0x15e205
- (int)closeFigure;	// 0x15e1c5
- (int)flatten;	// 0x2c7521
- (int)widen:(id)widen;	// 0x2c751d
- (int)stroke:(id)stroke;	// 0x1d6545
- (int)fill:(id)fill;	// 0x15e395
- (id)getBezierPath;	// 0x1c1705
- (void)appendBezierPath:(id)path dc:(id)dc;	// 0x15de29
@end