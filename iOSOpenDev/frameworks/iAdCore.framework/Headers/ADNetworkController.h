/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/iAdCore-Structs.h>
#import <iAdCore/XXUnknownSuperclass.h>

@class NSTimer;

@interface ADNetworkController : XXUnknownSuperclass {
	SCDynamicStoreRef _store;	// 4 = 0x4
	NSTimer *_notificationTimer;	// 8 = 0x8
	int _networkType;	// 12 = 0xc
@private
	double _localLatency;	// 16 = 0x10
	double _localLatencyStddev;	// 24 = 0x18
	int _localLatencyCount;	// 32 = 0x20
	double _localBandwidth;	// 36 = 0x24
	double _localBandwidthStddev;	// 44 = 0x2c
	double _localBandwidthBytes;	// 52 = 0x34
	NSTimer *_aggdCommitTimer;	// 60 = 0x3c
}
@property(retain, nonatomic) NSTimer *aggdCommitTimer;	// G=0x4b91; S=0x4ba1; @synthesize=_aggdCommitTimer
@property(readonly, assign, nonatomic) double localBandwidthBytes;	// G=0x4b79; @synthesize=_localBandwidthBytes
@property(readonly, assign, nonatomic) double localBandwidthStddev;	// G=0x46ad; @synthesize=_localBandwidthStddev
@property(readonly, assign, nonatomic) double localBandwidth;	// G=0x4b61; @synthesize=_localBandwidth
@property(readonly, assign, nonatomic) int localLatencyCount;	// G=0x4b51; @synthesize=_localLatencyCount
@property(readonly, assign, nonatomic) double localLatencyStddev;	// G=0x45b5; @synthesize=_localLatencyStddev
@property(readonly, assign, nonatomic) double localLatency;	// G=0x4b39; @synthesize=_localLatency
@property(readonly, assign) int networkType;	// G=0x4375; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x4af9
+ (id)sharedNetworkController;	// 0x40d9
// declared property setter: - (void)setAggdCommitTimer:(id)timer;	// 0x4ba1
// declared property getter: - (id)aggdCommitTimer;	// 0x4b91
// declared property getter: - (double)localBandwidthBytes;	// 0x4b79
// declared property getter: - (double)localBandwidth;	// 0x4b61
// declared property getter: - (int)localLatencyCount;	// 0x4b51
// declared property getter: - (double)localLatency;	// 0x4b39
- (id)autorelease;	// 0x4b35
- (oneway void)release;	// 0x4b31
- (unsigned)retainCount;	// 0x4b29
- (id)retain;	// 0x4b25
- (id)copyWithZone:(NSZone *)zone;	// 0x4b21
- (void)_checkForNetworkAndNotify;	// 0x4a31
- (void)_checkForNetwork;	// 0x47ad
- (void)_scheduleCheckForNetwork;	// 0x4701
// declared property getter: - (double)localBandwidthStddev;	// 0x46ad
- (void)_recordBandwidth:(double)bandwidth bytes:(double)bytes;	// 0x4601
// declared property getter: - (double)localLatencyStddev;	// 0x45b5
- (void)_recordLatency:(double)latency;	// 0x450d
- (void)_scheduleAggdCommit;	// 0x4475
- (void)_commitNetworkData:(id)data;	// 0x4415
- (void)resetNetworkStatistics;	// 0x43a9
// converted property getter: - (int)networkType;	// 0x4375
- (void)start;	// 0x413d
@end