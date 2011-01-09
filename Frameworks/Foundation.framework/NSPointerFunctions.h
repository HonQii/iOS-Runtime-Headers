/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSPointerFunctions : NSObject <NSCopying>
{
}

@property unknown type *hashFunction;
@property unknown type *isEqualFunction;
@property unknown type *sizeFunction;
@property unknown type *descriptionFunction;
@property unknown type *relinquishFunction;
@property unknown type *acquireFunction;
@property BOOL usesStrongWriteBarrier;
@property BOOL usesWeakReadAndWriteBarriers;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)pointerFunctionsWithOptions:(NSUInteger)arg1;

- (id)initWithOptions:(NSUInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSizeFunction:(int (*)())arg1;
- (void)setHashFunction:(int (*)())arg1;
- (void)setIsEqualFunction:(int (*)())arg1;
- (void)setDescriptionFunction:(int (*)())arg1;
- (void)setAcquireFunction:(int (*)())arg1;
- (void)setRelinquishFunction:(int (*)())arg1;
- (void)setUsesStrongWriteBarrier:(BOOL)arg1;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)arg1;
- (int (*)())sizeFunction;
- (int (*)())hashFunction;
- (int (*)())isEqualFunction;
- (int (*)())descriptionFunction;
- (int (*)())acquireFunction;
- (int (*)())relinquishFunction;
- (BOOL)usesStrongWriteBarrier;
- (BOOL)usesWeakReadAndWriteBarriers;

@end