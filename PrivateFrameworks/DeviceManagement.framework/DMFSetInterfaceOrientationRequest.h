/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFSetInterfaceOrientationRequest : CATTaskRequest {
    int _interfaceOrientation;
    BOOL _lockOrientation;
}

@property (nonatomic) int interfaceOrientation;
@property (nonatomic) BOOL lockOrientation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)interfaceOrientation;
- (BOOL)lockOrientation;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setLockOrientation:(BOOL)arg1;

@end