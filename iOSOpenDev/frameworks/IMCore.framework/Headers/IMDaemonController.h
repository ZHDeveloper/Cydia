/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */


#import <IMCore/IMCore-Structs.h>

@class IMRemoteObject, NSString, NSMutableDictionary, IMLocalObject, NSArray, NSRecursiveLock, IMDaemonListener, NSLock, NSMutableArray, NSProtocolChecker;
@protocol FZDaemon;

@interface IMDaemonController : NSObject {
	id _delegate;	// 4 = 0x4
	IMRemoteObject<FZDaemon> *_remoteObject;	// 8 = 0x8
	NSMutableDictionary *_listenerMap;	// 12 = 0xc
	IMLocalObject *_localObject;	// 16 = 0x10
	IMDaemonListener *_daemonListener;	// 20 = 0x14
	NSMutableArray *_services;	// 24 = 0x18
	NSProtocolChecker *_protocol;	// 28 = 0x1c
	NSString *_listenerID;	// 32 = 0x20
	dispatch_queue_s *_listenerLockQueue;	// 36 = 0x24
	dispatch_queue_s *_remoteDaemonLockQueue;	// 40 = 0x28
	dispatch_queue_s *_remoteMessageQueue;	// 44 = 0x2c
	NSRecursiveLock *_connectionLock;	// 48 = 0x30
	NSArray *_servicesToAllow;	// 52 = 0x34
	NSArray *_servicesToDeny;	// 56 = 0x38
	CFRunLoopSourceRef _runLoopSource;	// 60 = 0x3c
	NSLock *_blockingLock;	// 64 = 0x40
	BOOL _hasCheckedForDaemon;	// 68 = 0x44
	BOOL _preventReconnect;	// 69 = 0x45
	BOOL _inBlockingConnect;	// 70 = 0x46
	BOOL _autoReconnect;	// 71 = 0x47
	BOOL _blocksConnectionAtResume;	// 72 = 0x48
	BOOL _hasBeenSuspended;	// 73 = 0x49
	unsigned _gMyFZListenerCapabilities;	// 76 = 0x4c
	unsigned _cachedCapabilities;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) dispatch_queue_s *_remoteMessageQueue;	// G=0x29e49; @synthesize
@property(assign, setter=_setAutoReconnect:) BOOL _autoReconnect;	// G=0x29d99; S=0x29da9; @synthesize
@property(assign, setter=__setCapabilities:) unsigned _capabilities;	// G=0x29db9; S=0x29dc9; @synthesize=_gMyFZListenerCapabilities
@property(assign, nonatomic, setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume;	// G=0x29d45; S=0x28ab9; @synthesize
@property(assign, nonatomic) id delegate;	// G=0x29d55; S=0x224d; @synthesize=_delegate
@property(retain, nonatomic, setter=_setListenerID:) NSString *_listenerID;	// G=0x29d65; S=0x29d75; @synthesize
@property(retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny;	// G=0x29e11; S=0x29e25; @synthesize
@property(retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow;	// G=0x29dd9; S=0x29ded; @synthesize
@property(readonly, assign, nonatomic) BOOL isConnected;	// G=0x2275; 
@property(readonly, assign, nonatomic) BOOL isConnecting;	// G=0x2341; 
@property(readonly, assign, nonatomic) unsigned capabilities;	// G=0x28cd9; 
@property(readonly, assign, nonatomic) IMDaemonListener *listener;	// G=0x21bd; @synthesize=_daemonListener
+ (void)_setApplicationWillTerminate;	// 0x26c3d
+ (void)_blockUntilSendQueueIsEmpty;	// 0x26a45
+ (BOOL)_applicationWillTerminate;	// 0x26a35
+ (id)sharedController;	// 0x1acd
// declared property getter: - (dispatch_queue_s *)_remoteMessageQueue;	// 0x29e49
// declared property setter: - (void)_setServicesToDeny:(id)deny;	// 0x29e25
// declared property getter: - (id)_servicesToDeny;	// 0x29e11
// declared property setter: - (void)_setServicesToAllow:(id)allow;	// 0x29ded
// declared property getter: - (id)_servicesToAllow;	// 0x29dd9
// declared property setter: - (void)__setCapabilities:(unsigned)capabilities;	// 0x29dc9
// declared property getter: - (unsigned)_capabilities;	// 0x29db9
// declared property setter: - (void)_setAutoReconnect:(BOOL)reconnect;	// 0x29da9
// declared property getter: - (BOOL)_autoReconnect;	// 0x29d99
// declared property setter: - (void)_setListenerID:(id)anId;	// 0x29d75
// declared property getter: - (id)_listenerID;	// 0x29d65
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x224d
// declared property getter: - (id)delegate;	// 0x29d55
// declared property getter: - (BOOL)_blocksConnectionAtResume;	// 0x29d45
// declared property getter: - (id)listener;	// 0x21bd
- (void)systemApplicationDidResume;	// 0x29c95
- (void)systemApplicationWillEnterForeground;	// 0x29be5
- (void)systemApplicationDidEnterBackground;	// 0x29b81
- (void)systemApplicationDidSuspend;	// 0x29b1d
- (void)setVCCapabilities:(unsigned long long)capabilities;	// 0xcecd
- (void)forwardInvocation:(id)invocation;	// 0x299e9
- (id)methodSignatureForSelector:(SEL)selector;	// 0x299c9
- (void)setDaemonLogsOutWithoutStatusListeners:(BOOL)listeners;	// 0x299c5
- (void)setDaemonTerminatesWithoutListeners:(BOOL)listeners;	// 0x299c1
- (void)setValue:(id)value ofPersistentProperty:(id)persistentProperty;	// 0x297ed
- (void)listener:(id)listener setValue:(id)value ofPersistentProperty:(id)persistentProperty;	// 0x297d5
- (void)setValue:(id)value ofProperty:(id)property;	// 0x2963d
- (void)listener:(id)listener setValue:(id)value ofProperty:(id)property;	// 0x29625
- (void)remoteObjectDiedNotification:(id)notification;	// 0x29569
- (void)localObjectDiedNotification:(id)notification;	// 0x294ad
- (void)_remoteObjectDiedNotification:(id)notification;	// 0x29211
- (void)_localObjectDiedNotification:(id)notification;	// 0x29089
- (void)_setCapabilities:(unsigned)capabilities;	// 0x28ee9
// declared property getter: - (unsigned)capabilities;	// 0x28cd9
- (void)listener:(id)listener setListenerCapabilities:(unsigned)capabilities;	// 0x28cc5
- (void)_noteSetupComplete;	// 0x28ca1
- (void)blockUntilConnected;	// 0xcae1
// declared property getter: - (BOOL)isConnected;	// 0x2275
// declared property getter: - (BOOL)isConnecting;	// 0x2341
// declared property setter: - (void)_setBlocksConnectionAtResume:(BOOL)resume;	// 0x28ab9
- (void)_addressBookChanged:(id)changed;	// 0x28aa9
- (void)setPresenceValue:(id)value forKey:(id)key forAccount:(id)account;	// 0x28a39
- (void)setMyStatus:(unsigned)status message:(id)message forAccount:(id)account;	// 0x28935
- (void)setMyStatus:(unsigned)status message:(id)message;	// 0x28911
- (void)setMyProfile:(id)profile;	// 0x28855
- (void)setMyPicture:(id)picture smallPictureData:(id)data;	// 0x28775
- (id)_remoteObject;	// 0x28765
- (BOOL)setCapabilities:(unsigned)capabilities forListenerID:(id)listenerID;	// 0x2859d
- (unsigned)capabilitiesForListenerID:(id)listenerID;	// 0x28461
- (BOOL)removeListenerID:(id)anId;	// 0x28181
- (BOOL)hasListenerForID:(id)anId;	// 0x28075
- (BOOL)addListenerID:(id)anId capabilities:(unsigned)capabilities;	// 0x27e79
- (void)_listenerSetUpdated;	// 0x27b0d
- (void)sendABInformationToDaemon;	// 0x40a5
- (BOOL)connectToDaemonWithLaunch:(BOOL)launch capabilities:(unsigned)capabilities blockUntilConnected:(BOOL)connected;	// 0x27ac5
- (BOOL)connectToDaemon;	// 0x225d
- (BOOL)connectToDaemonWithLaunch:(BOOL)launch;	// 0x2895
- (BOOL)_connectToDaemonWithLaunch:(BOOL)launch capabilities:(unsigned long long)capabilities;	// 0x2721d
- (void)disconnectFromDaemon;	// 0x27209
- (void)disconnectFromDaemonWithForce:(BOOL)force;	// 0x26c5d
- (void)_makeConnectionWithLaunch:(BOOL)launch;	// 0x240d
- (void)_handleDaemonException:(id)exception;	// 0x268c9
- (void)_agentDidLaunchNotification:(id)_agent;	// 0x39c1
- (void)dealloc;	// 0x26699
- (id)init;	// 0x1ded
- (BOOL)retainWeakReference;	// 0x26659
- (BOOL)allowsWeakReference;	// 0x26655
@end