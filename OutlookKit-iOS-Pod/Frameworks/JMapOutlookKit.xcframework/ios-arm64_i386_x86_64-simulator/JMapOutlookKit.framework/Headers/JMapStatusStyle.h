//
//  StatusStyle.h
//  JMapOutlookKit
//
//  Created by Jibestream on 2017-05-17.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapCoreKit.h>
#import <JMapControllerKit/JMapController.h>

/**
 * The JMapStatusStyle model
 */
@interface JMapStatusStyle : NSObject

/**
 * The styling for free status
 */
@property (nonatomic, strong, nonnull) JMapStyle * freeStyle;
/**
 * The styling for busy status
 */
@property (nonatomic, strong, nonnull) JMapStyle * busyStyle;

/**
 * Initialization method for StatusStyle object
 *
 * @param freeStyle The JMapStyle for free rooms
 * @param busyStyle The JMapStyle for busy rooms
 * @return A StatusStyle instance
 */
-(nonnull instancetype) initWithFreeStyle:(nonnull JMapStyle *)freeStyle busyStyle:(nonnull JMapStyle *)busyStyle;

@end
