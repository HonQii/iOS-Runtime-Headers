/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFChargingCenterClient : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _errorNotifications;
    bool  _forcePill;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    SFWirelessChargingMonitor * _monitor;
    id /* block */  _requestHandler;
    int  _triggerEngagementToken;
    SFChargingUICoordinator * _uiCoordinator;
    id /* block */  _visualInformationRequestHandler;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSMutableDictionary *errorNotifications;
@property (nonatomic, retain) SFWirelessChargingMonitor *monitor;
@property (nonatomic, readonly) long long numberOfDevicesCharging;
@property (nonatomic, copy) id /* block */ requestHandler;
@property (nonatomic, retain) SFChargingUICoordinator *uiCoordinator;
@property (nonatomic, copy) id /* block */ visualInformationRequestHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (void)notificationFeedbackConfigurationWithSound:(bool)arg1 andHaptic:(bool)arg2 forFeedbackType:(long long)arg3 completion:(id /* block */)arg4;
+ (void)playShortEngagementWithSound:(bool)arg1 haptic:(bool)arg2;

- (void).cxx_destruct;
- (void)activate;
- (void)checkDefaults;
- (void)contextsForRemoteAlertActivationWithReason:(id)arg1 completion:(id /* block */)arg2;
- (void)createWorkQueue;
- (void)dealloc;
- (id)dispatchQueue;
- (id)errorNotifications;
- (id)init;
- (void)invalidate;
- (void)listenToNotifications;
- (id)monitor;
- (long long)numberOfDevicesCharging;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)onqueue_activate;
- (id)onqueue_dataRepresentationForInformationProvider:(id)arg1;
- (void)onqueue_invalidate;
- (void)onqueue_presentationRequestContextsForReason:(id)arg1 withHandler:(id /* block */)arg2;
- (void)onqueue_sendPresentationRequestForPowerSource:(id)arg1 removed:(bool)arg2;
- (void)onqueue_updateConfigurationContext:(id)arg1 withInformationProvider:(id)arg2;
- (void)onqueue_updateConfigurationContext:(id)arg1 withKeyPowerSource:(id)arg2;
- (void)onqueue_updateConfigurationContextWithPowerSourcesData:(id)arg1;
- (id /* block */)requestHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorNotifications:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)setRequestHandler:(id /* block */)arg1;
- (void)setUiCoordinator:(id)arg1;
- (void)setUpMonitor;
- (void)setVisualInformationRequestHandler:(id /* block */)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uiCoordinator;
- (void)updateErrorNotificationsForPowerSource:(id)arg1 removed:(bool)arg2;
- (id /* block */)visualInformationRequestHandler;
- (id)workQueue;

@end