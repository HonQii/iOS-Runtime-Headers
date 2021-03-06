/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualTestKit.framework/VisualTestKit
 */

@interface VTKAssert : NSObject {
    <VTKComparator> * _comparator;
    NSMutableArray * _mutableDrawItems;
    <VTKReferenceItemsSource> * _referenceItemsSource;
    <VTKStoreManager> * _storeManager;
    XCTestCase * _testCase;
}

@property (nonatomic, readonly) <VTKComparator> *comparator;
@property (nonatomic, readonly) NSArray *drawItems;
@property (nonatomic, copy) NSString *referenceImagesDirectory;
@property (nonatomic, readonly) <VTKReferenceItemsSource> *referenceItemsSource;
@property (nonatomic, readonly) <VTKStoreManager> *storeManager;
@property (nonatomic, readonly) XCTestCase *testCase;

- (void).cxx_destruct;
- (id)_drawItems:(id)arg1 atImageUnderTest:(id)arg2;
- (void)addHorozontalGuideAt:(double)arg1 withColor:(id)arg2;
- (void)addSquareGuideAt:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withColor:(id)arg2;
- (void)addVerticalGuideAt:(double)arg1 withColor:(id)arg2;
- (void)assertView:(id)arg1 identifier:(id)arg2 filePath:(id)arg3 lineNumber:(unsigned long long)arg4;
- (id)comparator;
- (id)drawItems;
- (id)initWithTestCase:(id)arg1;
- (id)initWithTestCase:(id)arg1 referenceItemsSource:(id)arg2 storeMnanager:(id)arg3 imageComparator:(id)arg4;
- (id)referenceImagesDirectory;
- (id)referenceItemsSource;
- (void)setReferenceImagesDirectory:(id)arg1;
- (id)storeManager;
- (id)testCase;

@end
