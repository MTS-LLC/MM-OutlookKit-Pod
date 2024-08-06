//
//  Status.h
//  JMapOutlookKit
//
//  Created by Jibestream on 2017-05-18.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapCoreKit.h>
#import <JMapControllerKit/JMapController.h>

/**
 * The JMapStatus model
 */
@interface JMapStatus : NSObject

/**
 * destination object property
 */
@property (nonatomic, strong, nonnull) JMapDestination *meetingRoom;

/**
 * BOOL property
 */
@property (nonatomic) BOOL isFree;

/**
 * String object property for rawJson
 */
@property (nonatomic, strong, nonnull) NSString *rawJson;

/**
 * Initialization method for Status object
 *
 * @param meetingRoom The meeting room to be checked
 * @param isFree A boolean to be set dependant on availability
 * @param rawJson The raw data returned from API call
 * @return A Status instance
 */
-(nonnull instancetype)initWithMeetingRoom:(nonnull JMapDestination *)meetingRoom isFree:(BOOL)isFree rawJsonString:(nonnull NSString *)rawJson;

@end
