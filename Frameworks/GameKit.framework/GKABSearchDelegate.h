/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GKABSearchDelegate : NSObject <ABSearchOperationDelegate> {
    id _completionHandler;
    BOOL _gotOne;
}

@property(copy) id completionHandler;
@property BOOL gotOne;

- (void)completedSearchWithFirstName:(id)arg1 lastName:(id)arg2;
- (id)completionHandler;
- (void)dealloc;
- (BOOL)gotOne;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
- (void)setCompletionHandler:(id)arg1;
- (void)setGotOne:(BOOL)arg1;

@end