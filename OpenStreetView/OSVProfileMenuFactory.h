//
//  OSVProfileMenuFactory.h
//  OpenStreetView
//
//  Created by Bogdan Sala on 10/11/15.
//  Copyright © 2015 Bogdan Sala. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OSVMenuItem.h"
#import "OSVSectionItem.h"

@interface OSVProfileMenuFactory : NSObject

+ (NSArray *)settingsMenuWithOBDStatus:(int)connectionStatus;

+ (OSVSectionItem *)defaultUserFunctionalitySection;
+ (OSVSectionItem *)settingsSection;

+ (OSVMenuItem *)myStreetViewItem;

@end
