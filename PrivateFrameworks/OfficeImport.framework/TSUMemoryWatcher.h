/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUFlushingManager;



@interface TSUMemoryWatcher : NSObject 
{
    TSUFlushingManager *_flushingManager;
    BOOL _going;
    BOOL _stop;
}


- (id)initWithFlushingManager:(id)arg1;
- (void)beginObserving;
- (void)stopObserving;
- (void)dealloc;

@end