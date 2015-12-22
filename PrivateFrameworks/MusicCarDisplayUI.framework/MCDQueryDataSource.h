/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDQueryDataSource : MPUCompletionQueryDataSource {
    MPMediaPredicate *_localPredicate;
}

- (void).cxx_destruct;
- (void)_predicateBehaviorsChangedNotification:(id)arg1;
- (id)_queryForNowPlayingComparisonAtIndex:(unsigned int)arg1;
- (BOOL)_updateQueryPredicatesAndOrdering;
- (void)dealloc;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
- (id)initWithQuery:(id)arg1 entityType:(int)arg2;
- (id)playbackContextForIndex:(unsigned int)arg1;
- (BOOL)queryIsNowPlayingAtIndex:(unsigned int)arg1;
- (BOOL)showsIndexBar;

@end