//
//  OSVVideoRecorder.h
//  ScreenCaptureViewTest
//
//  Created by Bogdan Sala on 07/03/16.
//
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@protocol OSVVideoRecorder <NSObject>

- (void)recordingFinished:(NSString*)outputPathOrNil;

@end

@interface OSVVideoRecorder : NSObject

@property (weak, nonatomic) id<OSVVideoRecorder> delegate;

- (instancetype)initWithVideoSize:(CMVideoDimensions)size;

- (BOOL)createRecordingWithURL:(NSURL *)url orientation:(AVCaptureVideoOrientation)orientaton;
- (void)completeRecordingSessionWithBlock:(void (^)(BOOL success, NSError *error))completion;

//this method will add a image every 200 miliseconds in the current recording.
- (void)addPixelBuffer:(CVPixelBufferRef)pixelsBuffer withRotation:(NSInteger)rotation completion:(void (^)(BOOL success))block;

- (long long)currentVideoSize;

@end


