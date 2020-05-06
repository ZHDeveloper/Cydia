/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <PersistentConnection/PCGrowthAlgorithm.h>

#import <PersistentConnection/PersistentConnection-Structs.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PCMultiStageGrowthAlgorithm : NSObject <PCGrowthAlgorithm> {
@private
	double _currentKeepAliveInterval;	// 4 = 0x4
	double _minimumKeepAliveInterval;	// 12 = 0xc
	double _maximumKeepAliveInterval;	// 20 = 0x14
	double _lastKeepAliveInterval;	// 28 = 0x1c
	int _growthStage;	// 36 = 0x24
	double _highWatermark;	// 40 = 0x28
	double _initialGrowthStageHighWatermark;	// 48 = 0x30
	double _initialGrowthStageLastAttempt;	// 56 = 0x38
	NSDate *_leaveSteadyStateDate;	// 64 = 0x40
	NSString *_loggingIdentifier;	// 68 = 0x44
	NSString *_algorithmName;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) double currentKeepAliveInterval;	// G=0x539d; @synthesize=_currentKeepAliveInterval
@property(assign, nonatomic) double minimumKeepAliveInterval;	// G=0x5385; S=0x543d; @synthesize=_minimumKeepAliveInterval
@property(assign, nonatomic) double maximumKeepAliveInterval;	// G=0x536d; S=0x53b5; @synthesize=_maximumKeepAliveInterval
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x535d; @synthesize=_loggingIdentifier
+ (void)_loadDefaults;	// 0x5e79
+ (void)_loadDefaultValue:(double *)value forKey:(CFStringRef)key;	// 0x5dc9
- (id)initWithKeepAliveInterval:(double)keepAliveInterval loggingIdentifier:(id)identifier algorithmName:(id)name;	// 0x5cd9
- (void)dealloc;	// 0x62fd
// declared property setter: - (void)setMaximumKeepAliveInterval:(double)interval;	// 0x53b5
// declared property setter: - (void)setMinimumKeepAliveInterval:(double)interval;	// 0x543d
- (void)_setCurrentKeepAliveInterval:(double)interval;	// 0x54c5
- (void)_resetAlgorithmToInterval:(double)interval;	// 0x55d9
- (void)processNextAction:(int)action;	// 0x5695
- (void)_processInitialGrowthAction:(int)action;	// 0x6139
- (void)_processBackoffAction:(int)action;	// 0x581d
- (void)_processSteadyStateAction:(int)action;	// 0x5889
- (void)_processRefinedGrowthAction:(int)action;	// 0x5f91
- (double)_steadyStateTimeout;	// 0x5b55
- (id)description;	// 0x5edd
- (id)_stringForAction:(int)action;	// 0x52dd
- (id)_stringForStage:(int)stage;	// 0x531d
// declared property getter: - (id)loggingIdentifier;	// 0x535d
// declared property getter: - (double)maximumKeepAliveInterval;	// 0x536d
// declared property getter: - (double)minimumKeepAliveInterval;	// 0x5385
// declared property getter: - (double)currentKeepAliveInterval;	// 0x539d
@end