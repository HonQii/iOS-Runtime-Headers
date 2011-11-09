/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString, ATConnection;

@interface IUSongsDataSource : IUMediaQueriesDataSource <ATConnectionDelegate> {
    BOOL _showAlbumConfigured;
    BOOL _showAlbum;
    BOOL _showDurationConfigured;
    BOOL _showDuration;
    int _interfaceOrientation;
    ATConnection *_airTrafficConnection;
    NSString *_syncProgressString;
}

@property BOOL showAlbum;
@property BOOL showDuration;
@property int interfaceOrientation;

+ (Class)cellConfigurationClassForAlbumSongs;
+ (id)queryItemPropertiesToFetch;
+ (int)mediaEntityType;
+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;

- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (void)setShowDuration:(BOOL)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (int)interfaceOrientation;
- (void)connectionWasInterrupted:(id)arg1;
- (Class)songCellConfigurationGlobalContextClass;
- (int)_containingParentEntityType;
- (id)countStringFormat;
- (BOOL)allowsDownloadingAllEntities;
- (void)createGlobalContexts;
- (unsigned int)requiredEntityCountForSections;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (BOOL)allowsDeletion;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (BOOL)showDuration;
- (void)setShowAlbum:(BOOL)arg1;
- (BOOL)showAlbum;
- (id)init;
- (void)dealloc;
- (Class)cellConfigurationClass;

@end