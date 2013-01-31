/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, <SAAceSerializable>;

@interface SAUISayIt : SABaseClientBoundCommand  {
}

@property(retain) <SAAceSerializable> * context;
@property(copy) NSString * message;

+ (id)sayItWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sayIt;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setContext:(id)arg1;
- (id)context;
- (id)groupIdentifier;

@end