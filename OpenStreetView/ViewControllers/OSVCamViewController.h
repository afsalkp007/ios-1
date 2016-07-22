//
//  OSVCamViewController.h
//  OpenStreetView
//
//  Created by Bogdan Sala on 09/09/15.
//  Copyright (c) 2015 Bogdan Sala. All rights reserved.
//

#import "AVCamViewController.h"

@interface OSVCamViewController : AVCamViewController

@property (atomic, assign, readonly) BOOL                           isSnapping;
@property (assign, nonatomic) UIBackgroundTaskIdentifier            backgroundRenderingID;

@end
