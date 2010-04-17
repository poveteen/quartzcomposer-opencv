
#import <Cocoa/Cocoa.h>

#import "QCCVAbstractInputImageProcessingPlugIn.h"

@interface QCCVLaplace : QCCVAbstractInputImageProcessingPlugIn {
  NSUInteger inputApertureSizeIndex;
  IplImage *outputIplImage32F;
}

@property (assign) NSUInteger inputApertureSizeIndex;

@end
