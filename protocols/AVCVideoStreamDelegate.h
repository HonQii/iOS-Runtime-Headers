/* Generated by RuntimeBrowser.
 */

@protocol AVCVideoStreamDelegate <NSObject>

@required

- (void)stream:(AVCVideoStream *)arg1 didStart:(BOOL)arg2 error:(NSError *)arg3;
- (void)streamDidServerDie:(AVCVideoStream *)arg1;
- (void)streamDidStop:(AVCVideoStream *)arg1;

@optional

- (void)stream:(AVCVideoStream *)arg1 didGetLastDecodedFrame:(NSData *)arg2;
- (void)stream:(AVCVideoStream *)arg1 didPause:(BOOL)arg2 error:(NSError *)arg3;
- (void)stream:(AVCVideoStream *)arg1 didReceiveRTCPPackets:(NSArray *)arg2;
- (void)stream:(AVCVideoStream *)arg1 didResume:(BOOL)arg2 error:(NSError *)arg3;
- (void)stream:(AVCVideoStream *)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(NSError *)arg3;
- (void)stream:(AVCVideoStream *)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (void)stream:(AVCVideoStream *)arg1 uplinkQualityDidChange:(NSDictionary *)arg2;
- (void)streamDidRTCPTimeOut:(AVCVideoStream *)arg1;
- (void)streamDidRTPTimeOut:(AVCVideoStream *)arg1;

@end